import os
import math

n = int(raw_input())

sm = 0

limit = n+1

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

def isTruncatablePrime(prime):
	sp = str(prime)
	if(len(sp)==1):
		return False
	else:
		if(a[prime]!=1):
			return False
		else:
			#print "checking:"+ sp+":",
			for i in range(1,len(sp)):
				#print str(a[int(sp[i:])]) + ":" + str(a[int(sp[:-i])])
				if(a[int(sp[i:])]!=1):			
					return False
				if(a[int(sp[:-i])]!=1):			
					return False

			#print "yes"
			return True

def FindTruncatablePrimes():
	i = 0	
	global sm
	for i in range(2,limit):		
		if(isTruncatablePrime(i)):
			sm += i	

def sumTruncatablePrimes():
	i = 0
	c[0]=c[1]=0
	for i in range(2,limit):
		c[i]=c[i-1]
		if(b[i]!=0):
			c[i]=c[i-1]+i


sieve()

FindTruncatablePrimes()

# sumTruncatablePrimes()

print sm

