import numpy as np
from numpy import linalg as LA
import matplotlib.pyplot as plt
import time
from scipy import integrate

import rmp_tree
import rmp_leaf
import mappings
import visualization
import sys
sys.path.append('.')
from robot_model_baxter import *

TIME_SPAN = 60
TIME_INTERVAL = 1e-2
q0 = Common.q_neutral
q0_dot = np.zeros_like(q0)

r = rmp_tree.Root(
    x0 = q0,
    x0_dot = q0_dot
)

# tree construction
ns = []
for i, rs in enumerate(Common.R_BARS_ALL[:-1]):
    n_ = []
    for j, _ in enumerate(rs):
        n_.append(
            rmp_tree.LeafBase(
                name = 'x_' + str(i) + '_' + str(j),
                dim = 3,
                parent = r,
                mappings = CPoint(i, j)
            )
        )
    ns.append(n_)

for n_ in ns:
    for n in n_:
        r.add_child(n)



# end-effector node
n_ee = rmp_tree.Node(
    name = "ee",
    dim = 3,
    parent = r,
    mappings = CPoint(7, 0)
)
r.add_child(n_ee)

g = np.array([[0.3, -0.6, 1]]).T
g_dot = np.zeros_like(g)


attracter = rmp_leaf.GoalAttractor(
    name="ee-attractor", parent=n_ee, dim=3,
    calc_mappings=mappings.Translation(g, g_dot),
    max_speed = 5.0,
    gain = 5.0,
    f_alpha = 0.15,
    sigma_alpha = 1.0,
    sigma_gamma = 1.0,
    wu = 10.0,
    wl = 0.1,
    alpha = 0.15,
    epsilon = 0.5,
)
n_ee.add_child(attracter)


jl = rmp_leaf.JointLimitAvoidance(
    name="jl",
    parent=r,
    calc_mappings=mappings.Id(),
    gamma_p = 0.01,
    gamma_d = 0.05,
    lam = 1,
    sigma = 0.1,
    q_max = Common.q_max,
    q_min = Common.q_min,
    q_neutral = Common.q_neutral
)
r.add_child(jl)


# ### 木構造について確認 ###

# r.print_all_state()
# print("-"*100)
# print("pushforward!")
# r.pushforward()
# r.print_all_state()
# print("-"*100)
# print("pullback!")
# r.pullback()
# r.print_all_state()
# print("-"*100)
# print("resolve!")
# r.resolve()
# print("-"*100)



# ### 実行 ###
# times = np.arange(0, TIME_SPAN, TIME_INTERVAL)
# for i, t in enumerate(times):
#     print("\ni = ", i)
#     if i == 0:
#         print("t = ", t)
#         q_list = [q0]
#         q_dot_list = [q0_dot]
#         r.pushforward()
#         error = [n4.x]
#     else:
#         print("t = ", t)
#         r.pushforward()
#         r.pullback()
#         r.resolve()
        
        
#         q_list.append(r.x.copy())
#         q_dot_list.append(r.x_dot.copy())
#         error.append(n4.x.copy())
#         #r.print_all_state()
#         #r.print_state()

#     #print(q_list)


# q_list = np.concatenate(q_list, axis=1)
# q_dot_list = np.concatenate(q_dot_list, axis=1)
# error= np.concatenate(error, axis=1)


# #print(q_list)

# fig = plt.figure()
# ax = fig.add_subplot(111)
# ax.plot(times, q_list[0, :], label="q1", marker="")
# ax.plot(times, q_list[1, :], label="q2", marker="")
# ax.plot(times, q_list[2, :], label="q3", marker="")
# ax.plot(times, q_list[3, :], label="q4", marker="")
# ax.legend()
# ax.grid()
# fig.savefig("test.png")



# fig2 = plt.figure()
# ax2 = fig2.add_subplot()
# ax2.plot(error[0, :], error[1, :], label="ee")
# ax2.scatter(g[0,0], g[1,0], label="goal", marker="*", color="red")
# ax2.legend()
# ax2.grid()
# ax2.set_aspect('equal')
# fig2.savefig("ee.png")




### scipy使用 ###

#@lru_cache()
def dX(t, X):
    print("\nt = ", t)
    X = X.reshape(-1, 1)
    q_ddot = r.solve(q=X[:7, :], q_dot=X[7:, :])
    X_dot = np.concatenate([X[7:, :], q_ddot])
    return np.ravel(X_dot)




# def dX2(t, X):
#     """いつもの"""
#     print("\nt = ", t)
#     X = X.reshape(-1, 1)
#     q = X[:4, :]
#     q_dot = X[4:, :]
    
#     root_f = np.zeros((4, 1))
#     root_M = np.zeros((4, 4))
    
#     jl.set_state(q, q_dot)
#     jl.calc_rmp_func()
#     root_f += jl.f
#     root_M += jl.M
    
#     ee_x = x4.phi(q)
#     ee_J = x4.J(q)
#     ee_x_dot = x4.velocity(ee_J, q_dot)
#     ee_J_dot = x4.J_dot(q, q_dot)
#     attracter.set_state(ee_x-g, ee_x_dot-g_dot)
#     attracter.calc_rmp_func()
#     root_f += ee_J.T @ (attracter.f - attracter.M @ ee_J_dot @ q_dot)
#     root_M += ee_J.T @ attracter.M @ ee_J
    
#     q_ddot = LA.pinv(root_M) @ root_f
    
#     X_dot = np.concatenate([q_dot, q_ddot])
#     return np.ravel(X_dot)






sol = integrate.solve_ivp(
    fun = dX,
    #fun = dX2,
    t_span = (0, TIME_SPAN),
    y0 = np.ravel(np.concatenate([q0, q0_dot])),
    t_eval=np.arange(0, TIME_SPAN, TIME_INTERVAL),
    #atol=1e-6
)
print(sol.message)

fig, axes = plt.subplots(nrows=2, ncols=1, figsize=(8, 13))
for i in range(7):
    axes[0].plot(sol.t, sol.y[i], label="q" + str(i))
    axes[1].plot(sol.t, sol.y[i+7], label="dq" + str(i))

for i in range(2):
    axes[i].legend()
    axes[i].grid()


fig.savefig("solver_bax.png")



def x0(q):
    return np.zeros((3, 1))

q_data, joint_data, ee_data, cpoint_data = visualization.make_data(
    q_s = [sol.y[i] for i in range(7)],
    joint_phi_s=[x0, o_W0, o_BR, o_0, o_1, o_2, o_3, o_4, o_5, o_6, o_ee],
    is3D=True,
    ee_phi=o_ee
)




ani = visualization.make_animation(
    t_data = sol.t,
    joint_data=joint_data,
    is3D=True,
    epoch_max=500,
    goal_data=np.array([[g[0,0], g[1,0], g[2,0]]*len(sol.t)]).reshape(len(sol.t), 3),
    save_dir_path=""
)




plt.show()