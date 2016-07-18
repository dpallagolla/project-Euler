import os
import math

t = int(raw_input())

while(t!=0):
	t = t-1
	n = int(raw_input())
	facto = str(math.factorial(n))
	ans = sum(int(x) for x in facto)
	print ans
