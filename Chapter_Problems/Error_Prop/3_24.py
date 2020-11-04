from uncertainties import ufloat
from uncertainties.umath import *
import math
N   =   72
mu_not  =   4.0*(math.pi)*(math.pow(10,-7))
#print(mu_not)
k       =   125/(32*(math.pow(mu_not,2))*(math.pow(N,2)))
print(k)
D = ufloat(661,2)
V   =   ufloat(45,0.2)
d   =   ufloat(91.4,0.5)
I   =   ufloat(2.48, 0.04)

r   =   k*(pow(D,2))*V/(pow(d,2)*pow(I,2))
print(r)


