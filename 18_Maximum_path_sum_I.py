import os


t = int(raw_input())

while(t!=0):
	t=t-1
	n = int(raw_input())
	i=0
	j=0
	w = 500
	a = [0 for x in range(w)] 
	b = [0 for x in range(w)]
	lineInput = ""
	for i in range(0,n):
		lineInput = lineInput +raw_input()+" "
		#print lineInput
	lineInput = lineInput.split()
	for i in range(0,n*(n+1)/2):
		a[i+1]=int(lineInput[i])
	x=1
	k=1
	b[1]=a[1]
	while(x<=n):
		for i in range(1,x+1):
			if(b[k]+a[k+x]>b[k+x]):
				b[k+x] = b[k]+a[k+x]
			if(b[k]+a[k+x+1]>b[k+x+1]):
				b[k+x+1] = b[k]+a[k+x+1]
			k = k+1
		x=x+1
	mx = -1
	# print "B array: and n is "+str(n),
	# for i in range(0,20):
	# 	print str(b[i])+"",
	for i in range(0,(n*(n+1)/2)+1):
		if(mx<b[i]):
			mx=b[i]

	print mx 				
