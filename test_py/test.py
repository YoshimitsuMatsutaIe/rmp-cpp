import numpy as np
import matplotlib.pyplot as plt


import rmp_tree
import rmp_leaf
import mappings
import robot_model_sice

TIME_SPAN = 0.1
TIME_INTERVAL = 0.00005
q0 = np.zeros((4, 1))
q0_dot = np.zeros_like(q0)

r = rmp_tree.Root(
    dt = TIME_INTERVAL,
    x0 = q0,
    x0_dot = q0_dot
)


# x1 = robot_model_sice.X1()
# n1 = rmp_tree.LeafBase(name="x1", parent=r, dim=2, mappings=x1)
# r.add_child(n1)

# x2 = robot_model_sice.X2()
# n2 = rmp_tree.LeafBase(name="x2", parent=r, dim=2, mappings=x2)
# r.add_child(n2)

# x3 = robot_model_sice.X3()
# n3 = rmp_tree.LeafBase(name="x3", parent=r, dim=2, mappings=x3)3
# r.add_child(n3)

x4 = robot_model_sice.X4()
n4 = rmp_tree.Node(name="x4", parent=r, dim=2, mappings=x4)
r.add_child(n4)



g = np.array([[2, 1]]).T
g_dot = np.zeros_like(g)

attracter = rmp_leaf.GoalAttractor(
    name="ee-attractor", parent=n4, dim=2, calc_mappings=mappings.Translation(g, g_dot),
    max_speed = 6.,
    gain = 10.0,
    f_alpha = 0.15,
    sigma_alpha = 1.0,
    sigma_gamma = 1.0,
    wu = 10.0,
    wl = 0.1,
    alpha =0.15,
    epsilon = 1e-5,
)
n4.add_child(attracter)



T = np.arange(0, TIME_SPAN, TIME_INTERVAL)
for i, t in enumerate(T):
    print("i = ", i)
    if i == 0:
        q_list = [q0]
        q_dot_list = [q0_dot]
    else:
        print("t = ", t)
        r.pushforward()
        r.pullback()
        r.resolve()
        q_list.append(r.x.copy())
        q_dot_list.append(r.x_dot.copy())
        #r.print_all_state()
        r.print_state()

    #print(q_list)


q_list = np.concatenate(q_list, axis=1)
q_dot_list = np.concatenate(q_dot_list, axis=1)

#print(q_list)

fig = plt.figure()
ax = fig.add_subplot(111)
ax.plot(T, q_list[0, :], label="q1", marker="o")
# ax.plot(T, q_list[1, :], label="q2")
# ax.plot(T, q_list[2, :], label="q3")
# ax.plot(T, q_list[3, :], label="q4")
ax.legend()
ax.grid()
fig.savefig("test.png")