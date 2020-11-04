
import statistics as s
import math as m
n     = 5
list   = [71,72,72,73,71]
list2 = []
for i in range (0,n):
  list2.append(list[i]-s.mean(list))
  print(i+1,  "\t", list[i],  "\t",  round(list2[i],2), "\t" , round(m.pow(list2[i],2),2), "\n")  

print("Mean =  ",round(s.mean(list),2))
print("Standard Deviation = ",  round(s.stdev(list),2))
