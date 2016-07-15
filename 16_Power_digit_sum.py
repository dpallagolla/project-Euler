import os

t = int(raw_input())

while(t!=0):
	t=t-1
	n = int(raw_input())
	sum2 = str(sum(int(x) for x in str(2**n)))
	print sum2;