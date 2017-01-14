import os

def isPanDigital(j,k):
	checkString = "123456789"
	res = ""
	if(k==8):
		checkString = "12345678"

	# print "yolo!"

	for i in range(1,9):

		temp = i*j
		res = str(res) + str(temp)
		res = ''.join(sorted(res))
		# print "res"+ res + ": j:" +  str(j)
		if(res == checkString):
			return True

	return False
	
inp = raw_input()

n = int(inp.split()[0])

k = int(inp.split()[1])

#print "n:"+str(n)+"k:"+str(k)

for i in range(2,n):
	if(isPanDigital(i,k)):
		print i