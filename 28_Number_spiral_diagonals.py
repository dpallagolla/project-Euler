import os


mod = 1000000007
t = long(raw_input())

while(t!=0):
	n = int(raw_input())
	a = (4*n*n*n + 3*n*n + 8*n - 9) / 6
	print(a%mod)
	t -= 1