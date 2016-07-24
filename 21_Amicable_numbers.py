import os


# def sumOfDivisors(n):
# 	return sum([x for x in xrange(1,(n/2)+1) if(n%x) == 0])

# def amicable(n):
# 	sd = sumOfDivisors(n)
# 	#print "sum of divisors of " + str(n) + " is " + str(sd)
# 	sda = sumOfDivisors(sd)
# 	#print "sum of divisors of " + str(sd) + " is" + str(sda)
# 	if(n==sda and sd!=n):
# 		return 1
# 	else:
# 		return 0



# limit = 100001


# for i in range(2,limit):
# 	if(amicable(i)==1):
# 		print str(i)+",",

# print str(sumOfDivisors(25))
# print str(sumOfDivisors(28))
# print str(sumOfDivisors(2))

a = [220, 284, 1184, 1210, 2620, 2924, 5020, 5564, 6232, 6368, 10744, 10856, 12285, 14595, 17296, 18416, 63020, 66928, 66992, 67095, 69615, 71145, 76084, 79750, 87633, 88730,
]

t = int(raw_input())

while(t!=0):
	t = t-1
	n = int(raw_input())
	suma = 0
	i = 0
	while(a[i]<n):
		suma = suma + a[i]
		i = i + 1
		if(i==26):
			break
	print suma	
