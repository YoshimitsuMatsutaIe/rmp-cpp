import numpy as np
import matplotlib.pyplot as plt


import rmp_tree
import rmp_leaf



TIME_INTERVAL = 0.01
q0 = np.zeros((4, 1))
q0_dot = np.zeros_like(q0)

root = rmp_tree.Root(TIME_INTERVAL, q0, q0_dot)



node1 = rmp_tree.Node("hoge", dim=3, parent=root, calc_mappings=None)
root.add_child(node1)