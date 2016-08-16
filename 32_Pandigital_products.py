# for i in range(1,10100):
#      for j in range(1,1010):
#             s = ''.join(sorted(str(i*j)))
#             s += str(i)
#             s += str(j)
#             s = ''.join(sorted(s)) 
#             if(s == "123456789"):
#                     print str(i*j) + " " + str(i) + " " + str(j)



import os

sums = [0,0,0,0,12,52,162,0,13458,45228]

n = int(raw_input())

print sums[n]