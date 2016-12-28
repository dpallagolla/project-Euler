import os
import math

limit = 1000001

a = [1 for i in range(0,limit)]                          

a[0] = a[1] = 0

b = [0 for i in range(0,limit)]

c = [0 for i in range(0,limit)]

def sieve():
	for i in range (2,int(math.sqrt(limit))+1):		
		# print "i+"+str(i)		
		for j in range(i*2,limit,i):
			# print "j+"+str(j)			
			a[j] = 0			

def isCircular(prime):
	sp = str(prime)
	# print "sp "+sp
	for i in range(0,len(sp)):
		num = int(sp[i:]+sp[:i])
		# print str(num)+" "+str(a[num])
		if(num<=limit):
			if(a[num]!=1):			
				return False
	return True



def findCircularPrimes():
	i = 0
	for i in range(2,limit):		
		if(isCircular(i)):
			b[i]=1			


def sumCircularPrimes():
	i = 0
	c[0]=c[1]=0
	for i in range(2,limit):
		c[i]=c[i-1]
		if(b[i]!=0):
			c[i]=c[i-1]+i



sieve()

# print a

findCircularPrimes()

# print b

sumCircularPrimes()

n = int(raw_input())

print c[n]