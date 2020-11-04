#*******************************************************************

import statistics as s
import inspect
data    =   [86,85,84,89,85,89,87,85,82,85]


print("Mean =   ",  s.mean(data),   "\n")
print("STD =    ",  s.stdev(data),2)

#****** Mean and Standard Deviation Code Ends here ******************


print(inspect.getsource(s.mean))
print(inspect.getsource(s.variance))

range_low   =   round(mean-std)

mean    =   s.mean(data)
std     =   s.stdev(data)
print("Range =  ", round(mean-std), round(mean+std))

range_low   =   round(mean-std)
range_up    =   round(mean+std)

n       =   len(data)
print(n,    "\n")
for i in range (1,n):
    if (data[i]  >   range_low) and (data[i]    <   range_up):
        print(data[i],  "\n")
        
