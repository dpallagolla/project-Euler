import os


sm = [0 for x in range(20)]

sm[1] = 9

temp = 9

for i in range(2,18):
	temp*=10
	sm[i]=sm[i-1]+ i*temp



def findNum(n):
	d = 1
	n = int(n)
	#print "n:"+str(n)
	while(int(sm[d])<int(n)):
		d = d+1
		#print "sm[d]:"+str(sm[d])+"d:"+str(d)
	n = n-int(sm[d-1]);

	number = 10**(d-1)
	counter = (n-1)/d
	extract = n%d
	if(extract==0):
		extract = d
	number = number + counter
	while(d!=extract):
		number = number/10
		d = d-1
	return number%10


t = int(raw_input())

while(t!=0):
	t-=1
	ans = 1
	nums = raw_input().split()
	for n in nums:
		#print "calling:"+n
		ans=ans*findNum(n)

	print ans
