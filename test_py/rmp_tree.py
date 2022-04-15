import numpy as np



class Node:
    
    def __init__(self, name, dim, parent, calc_mappings,):
        self.name = name
        self.dim = dim
        self.parent = parent
        self.mappings = calc_mappings
        
        self.x = np.zeros((self.dim, 1))
        self.x_dot = np.zeros((self.dim, 1))
        if parent is not None:
            self.children = []
            self.J = np.zeros((self.dim, self.parent.dim))
            self.J_dot = np.zeros((self.dim, self.parent.dim))
    
    
    def add_child(self, child):
        self.children.append(child)
    
    
    def pushforward(self):
        for child in self.children:
            child.calc_mappings(self.x, self.x_dot)
            child.pushforward()
    
    
    def pullback(self):
        for child in self.children:
            child.pullback()
        
        self.parent.f += self.J.T @ (self.f - self.M @ self.J_dot @ self.parent.x_dot)
        self.parent.M += self.J.T @ self.M @ self.J



class Root(Node):
    parent = None
    def __init__(self, dt, x0, x0_dot):
        super().__init__(
            name = "root",
            parent = None,
            dim = x0.shape[0],
            calc_mappings = None,
        )
        self.dt = dt
        self.x = x0
        self.x_dot = x0_dot
        self.x_ddot = np.zeros_like(x0)
    
    
    def pushforward(self):
        self.x_dot += self.x_ddot * self.dt
        self.x += self.x_dot * self.dt
        for child in self.children:
            child.calc_mappings()
            child.pushforward()
    
    
    def pullback(self):
        for child in self.children:
            child.pullback()
    
    
    def resolve(self,):
        self.x_ddot = np.linalg.pinv(self.M) @ self.f




class LeafBase(Node):
    children = None
    def __init__(self, name, parent, dim, calc_mappings,):
        super().__init__(name, parent, dim, calc_mappings)
    
    
    def add_child(self,):
        pass
    
    def pushforward(self,):
        pass
    
    
    def pullback(self):
        self.calc_rmp_func()
        self.parent.f += self.J.T @ (self.f - self.M @ self.J_dot @ self.parent.x_dot)
        self.parent.M += self.J.T @ self.M @ self.J



if __name__ == "__main__":
    hoge = LeafBase("hoge", None, None, None)
    print(hoge.x)