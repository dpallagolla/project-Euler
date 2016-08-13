import os

mod = 1000000007
s = 100005

a = [0 for i in xrange(0,s)]

b = [1,2,5,10,20,50,100,200]

a[0]=1
for i in range(0,8):
	for j in range(1,s):
		if(j-b[i] >= 0 and a[j-b[i]]>0):
			a[j] = (a[j] + a[j-b[i]])%mod;


t = int(raw_input())

while(t!=0):
	t = t-1
	n = int(raw_input())
	print a[n]