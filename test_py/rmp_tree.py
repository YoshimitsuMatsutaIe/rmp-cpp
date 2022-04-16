import numpy as np
from numpy import linalg as LA


class Node:
    
    def __init__(self, name, dim, parent, mappings,):
        self.name = name
        self.dim = dim
        self.parent = parent
        self.mappings = mappings
        self.children = []
        
        self.x = np.zeros((self.dim, 1))
        self.x_dot = np.zeros_like(self.x)
        self.f = np.zeros_like(self.x)
        self.M = np.zeros((self.dim, self.dim))
        if parent is not None:
            self.J = np.zeros((self.dim, self.parent.dim))
            self.J_dot = np.zeros_like(self.J)
    
    
    def add_child(self, child):
        self.children.append(child)
    
    
    def print_state(self,):
        print("name = ", self.name)
        print("parent =", self.parent.name if self.parent is not None else self.parent)
        print("type = ", self.__class__.__name__)
        
        if self.children is None:
            print("children = ", self.children)
        else:
            print("children = ", end="")
            for child in self.children:
                print(child.name, end=", ")
            print("")
        print("x = \n", self.x)
        print("x_dot = \n", self.x_dot)
        if self.parent is not None:
            print("J = \n", self.J)
            print("J_dot = \n", self.J_dot)
        print("f = \n", self.f)
        print("M = \n", self.M)
        print("")
    
    
    def print_all_state(self,):
        self.print_state()
        for child in self.children:
            child.print_all_state()
    
    
    def pushforward(self):
        for child in self.children:
            child.x = child.mappings.phi(self.x)
            child.J = child.mappings.J(self.x)
            child.x_dot = child.mappings.velocity(child.J, self.x_dot)
            child.J_dot = child.mappings.J_dot(self.x, self.x_dot)
            child.pushforward()
    
    
    def pullback(self):
        for child in self.children:
            child.pullback()
        self.parent.f += self.J.T @ (self.f - self.M @ self.J_dot @ self.parent.x_dot)
        self.parent.M += self.J.T @ self.M @ self.J



class Root(Node):
    def __init__(self, dt, x0, x0_dot):
        super().__init__(
            name = "root",
            parent = None,
            dim = x0.shape[0],
            mappings = None,
        )
        self.dt = dt
        self.x = x0
        self.x_dot = x0_dot
        self.x_ddot = np.zeros_like(x0)
    
    
    def pushforward(self):
        self.x_dot += self.x_ddot * self.dt
        self.x += self.x_dot * self.dt
        super().pushforward()
    
    
    def pullback(self):
        for child in self.children:
            child.pullback()
    
    
    def resolve(self,):
        self.x_ddot = LA.pinv(self.M) @ self.f
        print("q_ddot = \n", self.x_ddot)




class LeafBase(Node):
    def __init__(self, name, dim, parent, mappings,):
        super().__init__(name, dim, parent, mappings)
        self.children = None
    
    
    def print_all_state(self):
        self.print_state()
    
    def add_child(self,):
        pass
    
    def pushforward(self,):
        pass
    
    
    def pullback(self):
        self.calc_rmp_func()
        self.parent.f += self.J.T @ (self.f - self.M @ self.J_dot @ self.parent.x_dot)
        self.parent.M += self.J.T @ self.M @ self.J
    
    def calc_rmp_func(self,):
        pass

if __name__ == "__main__":
    hoge = LeafBase("hoge", None, None, None)
    print(hoge.x)