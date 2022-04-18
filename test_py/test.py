from matplotlib import markers
import numpy as np
import matplotlib.pyplot as plt

from scipy import integrate

import rmp_tree
import rmp_leaf
import mappings
import robot_model_sice

TIME_SPAN = 5.5
TIME_INTERVAL = 1e-2
q0 = np.array([[np.pi/2, 0, 0, 0]]).T
q0_dot = np.zeros_like(q0)

r = rmp_tree.Root(
    dt = TIME_INTERVAL,
    x0 = q0,
    x0_dot = q0_dot
)



n1 = rmp_tree.LeafBase(
    name="x1", parent=r, dim=2,
    mappings=robot_model_sice.X1()
)
r.add_child(n1)

n2 = rmp_tree.LeafBase(
    name="x2", parent=r, dim=2,
    mappings=robot_model_sice.X2()
)
r.add_child(n2)

n3 = rmp_tree.LeafBase(
    name="x3", parent=r, dim=2,
    mappings=robot_model_sice.X3()
)
r.add_child(n3)

n4 = rmp_tree.Node(
    name="x4", parent=r, dim=2,
    mappings=robot_model_sice.X4()
)
r.add_child(n4)



g = np.array([[2, 1]]).T
g_dot = np.zeros_like(g)

attracter = rmp_leaf.GoalAttractor(
    name="ee-attractor", parent=n4, dim=2,
    calc_mappings=mappings.Translation(g, g_dot),
    max_speed = 3.3,
    gain = 10.0,
    f_alpha = 0.15,
    sigma_alpha = 1.0,
    sigma_gamma = 1.0,
    wu = 10.0,
    wl = 0.1,
    alpha = 0.15,
    epsilon = 0.5,
)
n4.add_child(attracter)


jl = rmp_leaf.JointLimitAvoidance(
    name="jl", parent=r,
    calc_mappings=mappings.Id(),
    gamma_p = 0.01,
    gamma_d = 0.05,
    lam = 1,
    sigma = 0.1,
    q_max = robot_model_sice.q_max,
    q_min = robot_model_sice.q_min,
    q_neutral = robot_model_sice.q_neutral
)
r.add_child(jl)



### 実行 ###
times = np.arange(0, TIME_SPAN, TIME_INTERVAL)
for i, t in enumerate(times):
    print("\ni = ", i)
    if i == 0:
        print("t = ", t)
        q_list = [q0]
        q_dot_list = [q0_dot]
        r.pushforward()
        error = [n4.x]
    else:
        print("t = ", t)
        r.pushforward()
        r.pullback()
        r.resolve()
        
        
        q_list.append(r.x.copy())
        q_dot_list.append(r.x_dot.copy())
        error.append(n4.x.copy())
        #r.print_all_state()
        #r.print_state()

    #print(q_list)


q_list = np.concatenate(q_list, axis=1)
q_dot_list = np.concatenate(q_dot_list, axis=1)
error= np.concatenate(error, axis=1)


#print(q_list)

fig = plt.figure()
ax = fig.add_subplot(111)
ax.plot(times, q_list[0, :], label="q1", marker="")
ax.plot(times, q_list[1, :], label="q2", marker="")
ax.plot(times, q_list[2, :], label="q3", marker="")
ax.plot(times, q_list[3, :], label="q4", marker="")
ax.legend()
ax.grid()
fig.savefig("test.png")



fig2 = plt.figure()
ax2 = fig2.add_subplot()
ax2.plot(error[0, :], error[1, :], label="ee")
ax2.scatter(g[0,0], g[1,0], label="goal", marker="*", color="red")
ax2.legend()
ax2.grid()
ax2.set_aspect('equal')
fig2.savefig("ee.png")