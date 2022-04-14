import numpy as np

import rmp_tree



class GoalAttractor(rmp_tree.LeafBase):
    def __init__(
        self, name, parent, calc_mappings,
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
        
        super().__init__(name, parent, calc_mappings, self.calc_rmp_func)
    
    
    def calc_rmp_func(self,):
        pass



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
    
        super().__init__(name, parent, calc_mappings, self.calc_rmp_func)
    
    
    def calc_rmp_func(self,):
        pass



class JointLimitAvoidance(rmp_tree.LefBase):
    def __init__(
        self, name, parent, calc_mappings,
    ):
        
        
        
        super().__init__(name, parent, calc_mappings, self.calc_rmp_func)
    
    
    def calc_rmp_func(self,):
        pass