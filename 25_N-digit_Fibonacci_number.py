import os

a = 1
b = 0
i=1
length = 5000
digs = [0 for x in range(0,5002)]
while len(str(a)) <= length:
    a, b = a+b, a
    i = i+1
    #print "length:"+str(len(str(a)))+"",
    if(digs[len(str(a))]==0):
    	digs[len(str(a))]=i
    	#print str(a)+"",

t = int(raw_input())

while(t!=0):
	t=t-1
	n = int(raw_input())
	print digs[n]