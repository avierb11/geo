"""
This module deals with the hydrogeology aspects of modelling, including:
    - Groundwater flow
    - Groundwater discharge
    - Wells
    - Infiltration
"""
import ctypes
from ctypes import c_void_p as p
import numpy

lib = ctypes.cdll.LoadLibrary('C:\\libs\\hydro.dll')

def flow1D(heads, conductivity, timeDelta, scale, iters):
    queue = np.zeros(heads.size, dtype = np.single)
    lib.flow1D(p(heads.ctypes.data),p(queue.ctypes.data),p(conductivity.ctypes.data),timeDelta,scale,heads.size)

def flow2D():
    """
    Groundwater flow in 2D
    """
    pass

def flow3D():
    """
    Groundwater flow in 3D
    """
    pass
