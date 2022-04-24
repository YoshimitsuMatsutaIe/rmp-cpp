import pandas as pd

import sys
sys.path.append('.')
import test_py.visualization as visualization


df = pd.read_csv("test/result/configration.csv")


# q_data, joint_data, ee_data, cpoint_data = visualization.make_data(
#     q_s = [df['x0'], df['x0'], df['x0'], df['x0'],],
#     joint_phi_s=
# )