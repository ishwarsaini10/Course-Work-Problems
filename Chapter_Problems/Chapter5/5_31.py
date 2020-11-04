import statistics as s
import math as m
import inspect 
import matplotlib.pyplot as plt

list1   =   [63,76,86,72]
list2   =   [58,62,72,79]
list3   =   [74,72,79,65]
list4   =   [78,88,77,66]
list5   =   [70,65,60,70]
list6   =   [74,81,70,74]
list7   =   [75,79,65,84]
list8   =   [82,77,69,76]
list9   =   [68,66,73,80]
list10  =   [69,76,77,69] 

list11  = list1+list2+list3+list4+list5+list6+list7+list8+list9+list10
#inspect.getsource(list11)
print(list11, "\n")
#print(round(s.stdev(list11),2), "\n")
print("Standard Devation of all data : ", round(s.stdev(list11),2), "\n")
#print(inspect.getsource(s.variance), "\n")


print("t", 1, "_bar = ", round(s.mean(list1),2), "\n")
print("t", 2, "_bar = ", round(s.mean(list2),2), "\n")
print("t", 3, "_bar = ", round(s.mean(list3),2), "\n")
print("t", 4, "_bar = ", round(s.mean(list4),2), "\n")
print("t", 5, "_bar = ", round(s.mean(list5),2), "\n")
print("t", 6, "_bar = ", round(s.mean(list6),2), "\n")
print("t", 7, "_bar = ", round(s.mean(list7),2), "\n")
print("t", 8, "_bar = ", round(s.mean(list8),2), "\n")
print("t", 9, "_bar = ", round(s.mean(list9),2), "\n")
print("t", 10, "_bar = ", round(s.mean(list10),2), "\n")

list12  = [round(s.mean(list1),2),round(s.mean(list2),2),round(s.mean(list3),2),round(s.mean(list4),2),round(s.mean(list5),2),round(s.mean(list6),2),round(s.mean(list7),2),round(s.mean(list8),2),round(s.mean(list9),2),round(s.mean(list10),2)]  
print(list12)
print(round(s.stdev(list12),2))

plt.hist(list11, 4)

plt.show()
