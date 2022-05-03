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
        self.static_rxs = [self.rx_W0(self.q_neutral), self.rx_BR(self.q_neutral)]
        self.static_rys = [self.ry_W0(self.q_neutral), self.ry_BR(self.q_neutral)]
        self.static_rzs = [self.rz_W0(self.q_neutral), self.rz_BR(self.q_neutral)]
        self.static_jos = [self.jo_W0(self.q_neutral), self.jo_BR(self.q_neutral)]
        self.static_jrxs = [self.jrx_W0(self.q_neutral), self.jrx_BR(self.q_neutral)]
        self.static_jrys = [self.jry_W0(self.q_neutral), self.jry_BR(self.q_neutral)]
        self.static_jrzs = [self.jrz_W0(self.q_neutral), self.jrz_BR(self.q_neutral)]
        self.static_jo_dots = [self.jo_W0_dot(self.q_neutral, np.zeros_like(self.q_neutral)), self.jo_BR_dot(self.q_neutral, np.zeros_like(self.q_neutral))]
        self.static_jrx_dots = [self.jrx_W0_dot(self.q_neutral, np.zeros_like(self.q_neutral)), self.jrx_BR_dot(self.q_neutral, np.zeros_like(self.q_neutral))]
        self.static_jry_dots = [self.jry_W0_dot(self.q_neutral, np.zeros_like(self.q_neutral)), self.jry_BR_dot(self.q_neutral, np.zeros_like(self.q_neutral))]
        self.static_jrz_dots = [self.jrz_W0_dot(self.q_neutral, np.zeros_like(self.q_neutral)), self.jrz_BR_dot(self.q_neutral, np.zeros_like(self.q_neutral))]
        
        self.os_func = [self.o_0, self.o_1, self.o_2, self.o_3, self.o_4, self.o_5, self.o_6, self.o_ee]
        self.rxs_func = [self.rx_0, self.rx_1, self.rx_2, self.rx_3, self.rx_4, self.rx_5, self.rx_6, self.rx_ee]
        self.rys_func = [self.ry_0, self.ry_1, self.ry_2, self.ry_3, self.ry_4, self.ry_5, self.ry_6, self.ry_ee]
        self.rzs_func = [self.rz_0, self.rz_1, self.rz_2, self.rz_3, self.rz_4, self.rz_5, self.rz_6, self.rz_ee]
        self.jos_func = [self.jo_0, self.jo_1, self.jo_2, self.jo_3, self.jo_4, self.jo_5, self.jo_6, self.jo_ee]
        self.jrxs_func = [self.jrx_0, self.jrx_1, self.jrx_2, self.jrx_3, self.jrx_4, self.jrx_5, self.jrx_6, self.jrx_ee]
        self.jrys_func = [self.jry_0, self.jry_1, self.jry_2, self.jry_3, self.jry_4, self.jry_5, self.jry_6, self.jry_ee]
        self.jrzs_func = [self.jrz_0, self.jrz_1, self.jrz_2, self.jrz_3, self.jrz_4, self.jrz_5, self.jrz_6, self.jrz_ee]
        self.jo_dots_func = [self.jo_0_dot, self.jo_1_dot, self.jo_2_dot, self.jo_3_dot, self.jo_4_dot, self.jo_5_dot, self.jo_6_dot, self.jo_ee_dot]
        self.jrx_dots_func = [self.jrx_0_dot, self.jrx_1_dot, self.jrx_2_dot, self.jrx_3_dot, self.jrx_4_dot, self.jrx_5_dot, self.jrx_6_dot, self.jrx_ee_dot]
        self.jry_dots_func = [self.jry_0_dot, self.jry_1_dot, self.jry_2_dot, self.jry_3_dot, self.jry_4_dot, self.jry_5_dot, self.jry_6_dot, self.jry_ee_dot]
        self.jrz_dots_func = [self.jrz_0_dot, self.jrz_1_dot, self.jrz_2_dot, self.jrz_3_dot, self.jrz_4_dot, self.jrz_5_dot, self.jrz_6_dot, self.jrz_ee_dot]
    
        self.os = [f(self.q_neutral) for f in self.os_func]
        self.rxs = [f(self.q_neutral) for f in self.rxs_func]
        self.rys = [f(self.q_neutral) for f in self.rys_func]
        self.rzs = [f(self.q_neutral) for f in self.rzs_func]
        self.jos = [f(self.q_neutral) for f in self.jos_func]
        self.jrxs = [f(self.q_neutral) for f in self.jrxs_func]
        self.jrys = [f(self.q_neutral) for f in self.jrys_func]
        self.jrzs = [f(self.q_neutral) for f in self.jrzs_func]
        self.jo_dots = [f(self.q_neutral, np.zeros_like(self.q_neutral)) for f in self.jo_dots_func]
        self.jrx_dots = [f(self.q_neutral, np.zeros_like(self.q_neutral)) for f in self.jrx_dots_func]
        self.jry_dots = [f(self.q_neutral, np.zeros_like(self.q_neutral)) for f in self.jry_dots_func]
        self.jrz_dots = [f(self.q_neutral, np.zeros_like(self.q_neutral)) for f in self.jrz_dots_func]


    def update(self, q, q_dot):
        for i, f in enumerate(self.os_func):
            self.os[i] = f(q)
        for i, f in enumerate(self.os_func):
            self.os[i] = f(q)
        for i, f in enumerate(self.os_func):
            self.os[i] = f(q)
        for i, f in enumerate(self.os_func):
            self.os[i] = f(q)




if __name__ == "__main__":
    hoge = Baxter()
    
    q = np.array([[0, 0, 0, 0, 0, 0, 0]]).T
    
    
    hoge.o_W0(q)