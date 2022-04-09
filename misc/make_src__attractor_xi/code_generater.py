import sympy as sy
from sympy.utilities.codegen import codegen

from sympy.printing import cxxcode

import os
from pathlib import Path

import time


N = 2  #次元

x = sy.Matrix(sy.MatrixSymbol('x', N, 1))
x_dot = sy.Matrix(sy.MatrixSymbol('x_dot', N, 1))



x_norm = 0
for i in range(N):
    x_norm += x[i, 0]**2
x_norm = sy.sqrt(x_norm)# ** (1/2)
x_hat = x / x_norm


### 慣性行列 ###

sigma_alpha, sigma_gamma, w_u, w_l, alpha, epsilon = sy.symbols('sigma_alpha, sigma_gamma, w_u, w_l, alpha, epsilon')


alpha_x = sy.exp(-((x_norm**2) / (2 * sigma_alpha**2)))
gamma_x = sy.exp(-((x_norm**2) / (2 * sigma_gamma**2)))
w_x = gamma_x * w_u + (1 - gamma_x) * w_l
nabla_x_phi = (1 - sy.exp(-2 * alpha * x_norm)) / (1 + sy.exp(-2 * alpha * x_norm)) * x_hat


M = w_x  * ((1 - alpha_x) * nabla_x_phi * nabla_x_phi.T + (alpha_x + epsilon) * sy.eye(N))

M = sy.simplify(M)


### 以下共通 ###

# 曲率校xi_Mの前半を計算
partialx_m_dx = []
for i in range(N):
    print("i = ", i)
    partialx_m_dx.append(M[:, i:i+1].jacobian(x) * x_dot)



xi_M_before_ = partialx_m_dx[0]
for i in range(1, N):
    print("i = ", i)
    xi_M_before_ = xi_M_before_.row_join(partialx_m_dx[i])


xi_M_before = xi_M_before_ * x_dot


# # 曲率校xi_Mの後半を計算
xi_M_after_ = x_dot.T * M * x_dot
xi_M_after = -1/2* (xi_M_after_.jacobian(x)).T #　sympyにはナブラあるかも？

# # 合体
xi_M = xi_M_before + xi_M_after
xi_M = sy.simplify(xi_M)  # Elisじゃ無理




# def gen(func, name):
#     [(c_name, c_code), (h_name, c_header)] = codegen(
#         name_expr=(name, func),
#         language="C",
#         project= name + "project",
#         to_files=False
#     )

#     f = open(c_name, 'w')
#     f.write(c_code)
#     f.close()

#     f = open(h_name, 'w')
#     f.write(c_header)
#     f.close()


# gen(xi_M, "rmp2_attractor_xi__" + str(N))




### c++のソースとヘッダー作成 ###

file_name = "rmp2_attractor_xi"
namespace_name = file_name

include_header = \
    "#include <cmath>\n" +\
    "#include \"/usr/include/eigen3/Eigen/Core\""

func_header = "f(double alpha, double epsilon, double sigma_alpha, double sigma_gamma, double w_l, double w_u, const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::VectorXd &out)"


macro_name = "RMP2_ATRACTTOR_XI__H"
hpp_header = "#ifndef " + macro_name + "\n#define " + macro_name + "\n"

code_txt = cxxcode(xi_M, assign_to="out")
with open(file_name+".cpp", "w") as f:
    f.write(
        include_header +
        "\n#include \"" + file_name + ".hpp\""
        "\n\n" +
        
        "void " + namespace_name + "::" + func_header + 
        "\n{\n"
        "    "
        )
    f.write(code_txt + "\n")
    f.write("}\n")

with open(file_name+".hpp", "w") as f:
    f.write(
        hpp_header +
        include_header + "\n" +
        "namespace " + namespace_name + "\n{\n    " +
        "void " + func_header + 
        ";\n" +
        "}\n"
        )
    f.write("#endif")