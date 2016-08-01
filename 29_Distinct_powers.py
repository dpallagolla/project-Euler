import os


n = int(raw_input())
nums = set()
for a in range(2,n+1):
	for b in range(2,n+1):
		res = a**b
		nums.add(res)
print len(nums)