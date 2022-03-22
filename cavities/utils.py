'''
Python file that contains utility functions used throughout the analysis.
'''

import numpy as np
import matplotlib.pyplot as plt



def dB_to_U(rho_dB, rho_dB_err):
    '''Converts dB to U = U- / U+'''
    rho_U = 20 ** (0.1*rho_dB)
    rho_U_err = np.log(20) * (rho_U / 20) * rho_dB_err
    return rho_U, rho_U_err

# def U_to_dB(rho_U):
#     '''Converts U to dB'''
#     return 10 * np.log10(rho_U)