import os


facts = [1,1,2,6,24,120,720,5040,40320,362880]

def isDivides(i):
	sd = 0
	si = str(i)
	for digit in si:
		sd += facts[int(digit)]
	# print "sd:"+str(sd)+"",
	# print "i:" + str(i)
	if(sd%i==0):		
		return 1
	else:
		return 0


n = int(raw_input())

s = 0

for i in range(10,n):
	f = isDivides(i)
	if(f==1):
		s += i

print s


