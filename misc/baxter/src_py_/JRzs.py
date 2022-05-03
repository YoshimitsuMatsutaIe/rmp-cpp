import numpy as np
from math import cos as c
from math import sin as s
from math import tan as ta
from math import sqrt as sq
def jrz_W0(q):
    return numpy.array([[0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0]])
def jrz_BR(q):
    return numpy.array([[0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0]])
def jrz_0(q):
    return numpy.array([[0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0]])
def jrz_1(q):
    return numpy.array([[-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]), 0, 0, 0, 0, 0, 0], [0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]), 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0]])
def jrz_2(q):
    return numpy.array([[(0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0]), -(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0]), 0, 0, 0, 0, 0], [(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0]), -(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0]), 0, 0, 0, 0, 0], [0, -numpy.cos(q[1, 0]), 0, 0, 0, 0, 0]])
def jrz_3(q):
    return numpy.array([[(-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]), (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0])*numpy.cos(q[1, 0]), (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]), 0, 0, 0, 0], [(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]), (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0])*numpy.cos(q[1, 0]), (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]), 0, 0, 0, 0], [0, -numpy.sin(q[1, 0])*numpy.sin(q[2, 0]), numpy.cos(q[1, 0])*numpy.cos(q[2, 0]), 0, 0, 0, 0]])
def jrz_4(q):
    return numpy.array([[((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]), (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[3, 0]), (-(-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[3, 0]), (-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]), 0, 0, 0], [((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]), -(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]), ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]), (-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]), 0, 0, 0], [0, numpy.sin(q[1, 0])*numpy.sin(q[3, 0])*numpy.cos(q[2, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[3, 0]), numpy.sin(q[2, 0])*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]), numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]), 0, 0, 0]])
def jrz_5(q):
    return numpy.array([[(-((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[4, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]))*numpy.cos(q[4, 0]), ((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[4, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0])*numpy.cos(q[1, 0])*numpy.cos(q[4, 0]), -(-(-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0])*numpy.cos(q[3, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[4, 0]), ((-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[4, 0]), (-(-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) - ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0]), 0, 0], [(-((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[4, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.cos(q[4, 0]), ((0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[4, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0])*numpy.cos(q[1, 0])*numpy.cos(q[4, 0]), -((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]))*numpy.sin(q[4, 0])*numpy.cos(q[3, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[4, 0]), ((-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[4, 0]), (-(-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) - ((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0]), 0, 0], [0, (-numpy.sin(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]) - numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[4, 0]) - numpy.sin(q[1, 0])*numpy.sin(q[2, 0])*numpy.cos(q[4, 0]), -numpy.sin(q[2, 0])*numpy.sin(q[4, 0])*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]) + numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[4, 0]), (-numpy.sin(q[1, 0])*numpy.cos(q[3, 0]) - numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0]), (-numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) + numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[4, 0]) - numpy.sin(q[2, 0])*numpy.sin(q[4, 0])*numpy.cos(q[1, 0]), 0, 0]])
def jrz_6(q):
    return numpy.array([[((((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]) + (((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]), ((-(-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[4, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0])*numpy.sin(q[4, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[5, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]), ((-(-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.cos(q[3, 0])*numpy.cos(q[4, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]) + (-(-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[5, 0]), (-(-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[5, 0])*numpy.cos(q[4, 0]) + ((-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[5, 0]), (-((-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[4, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.cos(q[4, 0]))*numpy.sin(q[5, 0]), (((-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.cos(q[5, 0]) - ((-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[5, 0]), 0], [((((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]) + (((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]), ((-(0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[4, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0])*numpy.sin(q[4, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[5, 0]) + (-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]))*numpy.cos(q[5, 0]), ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[5, 0]) + (((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0])*numpy.cos(q[4, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]), (-(-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[5, 0])*numpy.cos(q[4, 0]) + ((-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[5, 0]), (-((-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[4, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.cos(q[4, 0]))*numpy.sin(q[5, 0]), (((-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.cos(q[5, 0]) - ((-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[5, 0]), 0], [0, ((numpy.sin(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]) + numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) - numpy.sin(q[1, 0])*numpy.sin(q[2, 0])*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]) + (numpy.sin(q[1, 0])*numpy.sin(q[3, 0])*numpy.cos(q[2, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]), (numpy.sin(q[2, 0])*numpy.cos(q[1, 0])*numpy.cos(q[3, 0])*numpy.cos(q[4, 0]) + numpy.sin(q[4, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]))*numpy.sin(q[5, 0]) + numpy.sin(q[2, 0])*numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[5, 0]), (numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]) + (numpy.sin(q[1, 0])*numpy.cos(q[3, 0]) + numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]))*numpy.sin(q[5, 0])*numpy.cos(q[4, 0]), (-(numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[4, 0]) + numpy.sin(q[2, 0])*numpy.cos(q[1, 0])*numpy.cos(q[4, 0]))*numpy.sin(q[5, 0]), ((numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[4, 0]) + numpy.sin(q[2, 0])*numpy.sin(q[4, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[5, 0]) - (-numpy.sin(q[1, 0])*numpy.cos(q[3, 0]) - numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]))*numpy.sin(q[5, 0]), 0]])
def jrz_ee(q):
    return numpy.array([[((((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]) + (((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]), ((-(-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[4, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0])*numpy.sin(q[4, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[5, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]), ((-(-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.cos(q[3, 0])*numpy.cos(q[4, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]) + (-(-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[5, 0]), (-(-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[5, 0])*numpy.cos(q[4, 0]) + ((-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[5, 0]), (-((-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[4, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.cos(q[4, 0]))*numpy.sin(q[5, 0]), (((-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.cos(q[5, 0]) - ((-(0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[5, 0]), 0], [((((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) + ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]) + (((-0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]), ((-(0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[4, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0])*numpy.sin(q[4, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[5, 0]) + (-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]))*numpy.cos(q[5, 0]), ((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[5, 0]) + (((0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0])*numpy.cos(q[4, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) - (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]), (-(-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) + 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[5, 0])*numpy.cos(q[4, 0]) + ((-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[5, 0]), (-((-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.sin(q[4, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.cos(q[4, 0]))*numpy.sin(q[5, 0]), (((-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.cos(q[3, 0]) - (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) + ((-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.sin(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[2, 0]))*numpy.sin(q[4, 0]))*numpy.cos(q[5, 0]) - ((-(-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[1, 0])*numpy.cos(q[2, 0]) + (0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.sin(q[2, 0]))*numpy.sin(q[3, 0]) + (-0.707106781186548*numpy.sin(q[0, 0]) - 0.707106781186548*numpy.cos(q[0, 0]))*numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[5, 0]), 0], [0, ((numpy.sin(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]) + numpy.sin(q[3, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[4, 0]) - numpy.sin(q[1, 0])*numpy.sin(q[2, 0])*numpy.sin(q[4, 0]))*numpy.sin(q[5, 0]) + (numpy.sin(q[1, 0])*numpy.sin(q[3, 0])*numpy.cos(q[2, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]), (numpy.sin(q[2, 0])*numpy.cos(q[1, 0])*numpy.cos(q[3, 0])*numpy.cos(q[4, 0]) + numpy.sin(q[4, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]))*numpy.sin(q[5, 0]) + numpy.sin(q[2, 0])*numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[5, 0]), (numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[5, 0]) + (numpy.sin(q[1, 0])*numpy.cos(q[3, 0]) + numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]))*numpy.sin(q[5, 0])*numpy.cos(q[4, 0]), (-(numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.sin(q[4, 0]) + numpy.sin(q[2, 0])*numpy.cos(q[1, 0])*numpy.cos(q[4, 0]))*numpy.sin(q[5, 0]), ((numpy.sin(q[1, 0])*numpy.sin(q[3, 0]) - numpy.cos(q[1, 0])*numpy.cos(q[2, 0])*numpy.cos(q[3, 0]))*numpy.cos(q[4, 0]) + numpy.sin(q[2, 0])*numpy.sin(q[4, 0])*numpy.cos(q[1, 0]))*numpy.cos(q[5, 0]) - (-numpy.sin(q[1, 0])*numpy.cos(q[3, 0]) - numpy.sin(q[3, 0])*numpy.cos(q[1, 0])*numpy.cos(q[2, 0]))*numpy.sin(q[5, 0]), 0]])