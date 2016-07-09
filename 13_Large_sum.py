import os

n = int(raw_input())
sum = 0
while(n!=0):
    n = n-1
    number = int(raw_input())
    sum = sum+number

strsum = str(sum)
print strsum[0:10]