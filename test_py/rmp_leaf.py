from turtle import dot
import numpy as np
from numpy import linalg as LA
from math import gamma, sqrt, sin, cos, exp

import rmp_tree


class GoalAttractor(rmp_tree.LeafBase):
    def __init__(
        self, name, parent, dim, calc_mappings,
        max_speed, gain, f_alpha, sigma_alpha, sigma_gamma, wu, wl, alpha, epsilon,
    ):
        self.gain = gain
        self.damp = max_speed / gain
        self.f_alpha = f_alpha
        self.sigma_alpha = sigma_alpha
        self.sigma_gamma = sigma_gamma
        self.wu = wu
        self.wl = wl
        self.alpha = alpha
        self.epsilon = epsilon
        
        super().__init__(name, dim, parent, calc_mappings)
    
    
    def calc_rmp_func(self,):
        self.M = self.__inertia_matrix()
        self.f = self.__force()
    
    
    def __grad_phi(self,):
        x_norm = LA.norm(self.x)
        return (1-exp(-2*self.alpha*x_norm)) / (1+exp(-2*self.alpha*x_norm)) * self.x / x_norm
    
    
    def __inertia_matrix(self,):
        x_norm = LA.norm(self.x)
        alpha_x = exp(-x_norm**2 / (2 * self.sigma_alpha**2))
        gamma_x = exp(-x_norm**2 / (2 * self.sigma_gamma**2))
        wx = gamma_x*self.wu + (1 - gamma_x)*self.wl
        
        grad = self.__grad_phi()
        return wx*((1-alpha_x) * grad @ grad.T + (alpha_x+self.epsilon) * np.empty_like(self.M))
    
    
    def __force(self,):
        return self.M @ (-self.gain + self.__grad_phi() - self.damp * self.x_dot)



class ObstacleAvoidance(rmp_tree.LeafBase):
    def __init__(
        self, name, parent, calc_mappings,
        scale_rep,
        scale_damp,
        gain,
        sigma,
        rw
    ):
        self.scale_rep = scale_rep
        self.scale_damp = scale_damp
        self.gain = gain
        self.sigma = sigma
        self.rw = rw
    
        super().__init__(name, 1, parent, calc_mappings)
    
    
    def calc_rmp_func(self,):
        self.M = self.__inertia_matrix()
        self.f = self.__force()
    
    
    def __w2(self, s):
        if self.rw - s > 0:
            return (self.rw - s)**2 / s
        else:
            return 0
    
    def __w2_dot(self, s):
        if self.sw - s > 0:
            return (-2*(self.rw-s)*s + (self.rw-s)) / s**2
        else:
            return 0
    
    def __u2(self, s_dot):
        if s_dot < 0:
            return 1 - exp(-s_dot**2 / (2*self.sigma**2))
        else:
            return 0
    
    def __u2_dot(self, s_dot):
        if s_dot < 0:
            return -exp(s_dot**2 / (2*self.sigma**2)) * (-s_dot/self.sigma**3)
        else:
            return 0
    
    def __delta(self, s_dot):
        return self.__u2(s_dot) + 1/2 * s_dot * self.__u2_dot(s_dot)
    
    def __xi(self, s, s_dot):
        return 1/2 * self.__u2(s_dot) * self.__w2_dot(s) * s_dot**2
    
    def __grad_phi(self, s):
        return self.gain * self.__w2(s) * self.__w2_dot(s)
    
    def __inertia_matrix(self):
        return self.__w2(self.x[0,0]) * self.__delta(self.x[0,0], self.x_dot[0,0])
    
    def __force(self):
        return -self.__grad_phi(self.x[0,0]) - self.__xi(self.x[0,0], self.x_dot[0,0])



class JointLimitAvoidance(rmp_tree.LeafBase):
    def __init__(
        self, name, parent, calc_mappings,
        gamma_p,
        gamma_d,
        lam,
        sigma,
        q_max,
        q_min,
        q_neutral
    ):
        self.gamma_p = gamma_p
        self.gamma_d = gamma_d
        self.lam = lam
        self.sigma = sigma
        self.q_max = q_max
        self.q_min = q_min
        self.q_neutral = q_neutral
        
        super().__init__(name, parent.dim, parent, calc_mappings)
    
    
    def calc_rmp_func(self,):
        self.M = self.__inertia_matrix()
        self.f = self.__force()
    
    def __alpha_upper(self, q_dot):
        return 1 - exp(-max(q_dot, 0)**2 / (2*self.sigma**2))
    
    def __alpha_lower(self, q_dot):
        return 1 - exp(-min(q_dot, 0)**2 / (2*self.sigma**2))
    
    def __s(self, q, qu, ql):
        return (q - ql) / (qu - ql)
    
    def __s_dot(self, qu, ql):
        return 1 / (qu - ql)
    
    def __d(self, s):
        return 4*s*(1-s)
    
    def __d_dot(self, s, s_dot):
        return (4-8*s) * s_dot
    
    def __b(self, q, q_dot, qu, ql):
        s = self.__s(q, qu, ql)
        d = self.__d(s)
        au = self.__alpha_upper(q_dot)
        al = self.__alpha_lower(q_dot)
        return s*(au*d + (1-au)) + (1-s)*(al*d + (1-al))
    
    def __b_dot(self, q, q_dot, qu, ql):
        s = self.__s(q, qu, ql)
        d = self.__d(s)
        au = self.__alpha_upper(q_dot)
        al = self.__alpha_lower(q_dot)
        s_dot = self.__s_dot(qu, ql)
        d_dot = self.__d_dot(s, s_dot)
        return (s_dot*(au * d + (1-au)) + s * d_dot) + -s_dot*(al * d + (1-al)) + (1-s) * d_dot
    
    def __a(self, q, q_dot, qu, ql):
        return self.__b(q, q_dot, qu, ql)**2
    
    def __a_dot(self, q, q_dot, qu, ql):
        return -2*self.__b(q, q_dot, qu, ql)**(-3) * self.__b_dot(q, q_dot, qu ,ql)
    
    def __xi(self,):
        xi = [
            (1/2 * self.__a_dot(
                self.x[i,0],
                self.x_dot[i,0],
                self.q_max[i,0],
                self.q_min[i,0]
            ) * self.x_dot[i,0]**2
            ) for i in range(self.dim)
        ]
        return np.array([xi]).T
    
    def __inertia_matrix(self,):
        diags = [
            (self.lam * self.__a(
                self.x[i,0],
                self.x_dot[i,0],
                self.q_max[i,0],
                self.q_min[i,0])
            ) for i in range(self.dim)
        ]
        return np.diag(diags)
    
    def __force(self,):
        return self.M @ (self.gamma_p*(self.q_neutral - self.x) - self.gamma_d*self.x_dot) - self.__xi()





if __name__ == "__main__":
    pass