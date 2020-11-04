from uncertainties import ufloat
from uncertainties.umath import *
M   =   ufloat(100,1)
m   =   ufloat(50,1)
g   =   9.8
a   =   (g*(M-m))/(M+m)
print(a)
