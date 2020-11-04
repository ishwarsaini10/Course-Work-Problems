
from uncertainties import ufloat
from uncertainties.umath import *

def q(x):
    f1      =   1-pow(x,2)
    f2      =   cos((x+2)/(pow(x,3))) 
    return(f1*f2)

x   =   ufloat(1.70,0.02)
print(q(x))
