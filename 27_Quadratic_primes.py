import os
import math
import itertools


def is_prime(n):
	n = abs(n)
	if n % 2 == 0 and n > 2: 
	    return False
	return all(n % i for i in range(3, int(math.sqrt(n)) + 1, 2))


n = int(raw_input())
A=B=0
result = 0
maxp=0
for b in range (2,n+1):
	if(is_prime(b)==True):
		for a in range(-n,n+1):
			x = 0
			for x in itertools.count():
				result = int(x*x + a*x + b)	
				#print str(result)+":"			
				if(is_prime(result)==False):
					if(x>=maxp):
						A=a
						B=b
						maxp=x
					break

print str(A)+" "+str(B)