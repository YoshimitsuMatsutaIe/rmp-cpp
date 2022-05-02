import numpy as np

from htm import HTM
from Jos import Jo
from JRxs import JRx
from JRys import JRy
from JRzs import JRz
from Jo_dots import Jo_dot
from JRx_dots import JRx_dot
from JRy_dots import JRy_dot
from JRz_dots import JRz_dot



class Baxter(HTM, Jo, JRx, JRy, JRz, Jo_dot, JRx_dot, JRy_dot, JRz_dot):
    
    q_neutral = np.array([[0.0, -31.0, 0.0, 43.0, 0.0, 72.0, 0.0]]).T
    q_max = np.array([[51.0, 60.0, 173.0, 150.0, 175.0, 120.0, 175.0]]).T
    q_min = np.array([[-141.0, -123.0, -173.0, -3.0, -175.0, -90.0, -175.0]]).T
    
    def __init__(self,):
        self.static_os = [self.o_W0(self.q_neutral), self.o_BR(self.q_neutral)]
        
    
    
    
    def update(q, q_dot):
        pass




if __name__ == "__main__":
    hoge = Baxter()
    
    q = np.array([[0, 0, 0, 0, 0, 0, 0]]).T
    
    
    hoge.o_W0(q)