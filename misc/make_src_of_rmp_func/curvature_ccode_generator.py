"""曲率式を計算"""

import sympy as sy
from sympy.printing import cxxcode
from sympy.printing.numpy import NumPyPrinter
import time


def calc_rmp_func(
    x, dx, phi=None, grad_phi=None, M=None, G=None, B=None, toSimplify=False
):
    """コードを生成
    
    """
    
    assert phi is not None or grad_phi is not None, "phiもgrad_phiのどっちもない"
    assert M is not None or G is not None, "MもGもない"
    
    t0 = time.time()
    
    N = x.shape[0]
    
    
    if phi is not None and grad_phi is None:
        grad_phi = phi.jacobian(x).T
    

    if M is not None:
        Xi = sy.zeros(N, N)
        G = M
    else:
        Xi = sy.zeros(N, N)
        for i in range(N):
            Xi += dx[i,0] * G[:, i:i+1].jacobian(dx)
        M = G + Xi
    
    
    # G上付きxの計算
    partial_gs = []
    for i in range(N):
        partial_gs.append(G[:, i:i+1].jacobian(x) * dx)
    
    G_up_x = partial_gs[0]
    for i in range(1, N):
        G_up_x = G_up_x.row_join(partial_gs[i])
    
    xi = G_up_x*dx - 1/2*((dx.T * G * dx).jacobian(x)).T
    
    if B is not None:
        f = -grad_phi -B*dx - xi
    else:
        f = None
    
    
    if toSimplify:
        xi = sy.simplify(xi)
        M = sy.sympify(M)
        if f is not None:
            f = sy.sympify(f)
    
    
    print("time = ", time.time() - t0)
    return xi, f, M



def gen_cpp_code(
    expr, src_name, include_txt, func_header,
):
    """
    """
    namespace_name = src_name
    macro_name = src_name.upper() + "__H"
    hpp_header = "#ifndef " + macro_name + "\n#define " + macro_name + "\n"

    code_txt = cxxcode(expr, assign_to="out")
    
    with open(src_name+".cpp", "w") as f:
        f.write(
            include_txt +
            "\n#include \"" + src_name + ".hpp\""
            "\n\n" +
            
            "void " + namespace_name + "::" + func_header + 
            "\n{\n"
            )
        f.write(code_txt + "\n")
        f.write("}\n")

    with open(src_name+".hpp", "w") as f:
        f.write(
            hpp_header +
            include_txt + "\n" +
            "namespace " + namespace_name + "\n{\n    " +
            "void " + func_header + 
            ";\n" +
            "}\n"
            )
        f.write("#endif")



def gen_numpy_code(expr, name):
    """numpy関数を作成"""
    symbols = sy.sympify(expr).atoms(sy.Symbol)
    s_str = ""
    for s in symbols:
        s_str += str(s) + ", "
    numpy_word = "import numpy\ndef f("+ s_str +"):\n    return "
    name = name + ".py"
    with open(name, 'w') as f:
        f.write(numpy_word)
        f.write(NumPyPrinter().doprint(expr))




if __name__ == "__main__":
    print("hello!")
    
    
    file_name = "hoge"
    
    include_txt = \
        "#include <cmath>\n" +\
        "#include \"/usr/include/eigen3/Eigen/Core\""


    func_header = "f(double alpha, double epsilon, double sigma_alpha, double sigma_gamma, double w_l, double w_u, const Eigen::VectorXd &x, const Eigen::VectorXd &x_dot, Eigen::VectorXd &out)"


    N = 2  #次元

    x = sy.Matrix(sy.MatrixSymbol('x', N, 1))
    x_dot = sy.Matrix(sy.MatrixSymbol('x_dot', N, 1))

    print(type(x))


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

    
    xi, _, M = calc_rmp_func(
        x, x_dot, grad_phi=nabla_x_phi, M=M, toSimplify=False)