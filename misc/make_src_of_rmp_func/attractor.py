import sympy as sy

from curvature_ccode_generator import *

N = 2  #次元

x = sy.Matrix(sy.MatrixSymbol('x', N, 1))
x_dot = sy.Matrix(sy.MatrixSymbol('x_dot', N, 1))
x_norm = 0
for i in range(N):
    x_norm += x[i, 0]**2
x_norm = sy.sqrt(x_norm)
x_hat = x / x_norm


### 慣性行列 ###
sigma_alpha, sigma_gamma, w_u, w_l, alpha, epsilon = sy.symbols('sigma_alpha, sigma_gamma, w_u, w_l, alpha, epsilon')

alpha_x = sy.exp(-((x_norm**2) / (2 * sigma_alpha**2)))
gamma_x = sy.exp(-((x_norm**2) / (2 * sigma_gamma**2)))
w_x = gamma_x * w_u + (1 - gamma_x) * w_l
nabla_x_phi = (1 - sy.exp(-2 * alpha * x_norm)) / (1 + sy.exp(-2 * alpha * x_norm)) * x_hat

M = w_x  * ((1 - alpha_x) * nabla_x_phi * nabla_x_phi.T + (alpha_x + epsilon) * sy.eye(N))


## 実行
xi, f, M = calc_rmp_func(x, x_dot, grad_phi=nabla_x_phi, M=M)


file_name = "xi"
include_txt = \
    "#include <cmath>\n" +\
    "#include \"/usr/include/eigen3/Eigen/Core\""
func_header = "func(double alpha, double epsilon, double sigma_alpha, double sigma_gamma, double w_l, double w_u, const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::VectorXd &out)"
gen_cpp_code(xi, file_name, include_txt, func_header)

#gen_cpp_code(f, "f", include_txt, func_header)

gen_cpp_code(M, "M", include_txt, func_header)