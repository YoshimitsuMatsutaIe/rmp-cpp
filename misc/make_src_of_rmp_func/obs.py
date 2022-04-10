"""
1次元の衝突回避制御器
"""

import sympy as sy
from curvature_ccode_generator import *

x, x_dot = sy.symbols('x, x_dot')

### 慣性行列 ###
rw, sigma = sy.symbols('rw, sigma')


w = sy.max(0, rw-x)**2 / x


xi, f, M = calc_rmp_func()



include_txt = \
    "#include <cmath>\n"
func_header = "func(double alpha, double epsilon, double sigma_alpha, double sigma_gamma, double w_l, double w_u, const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::VectorXd &out)"
gen_cpp_code(xi, file_name, include_txt, func_header)

#gen_cpp_code(f, "f", include_txt, func_header)

gen_cpp_code(M, "M", include_txt, func_header)