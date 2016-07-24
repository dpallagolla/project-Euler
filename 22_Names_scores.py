import os

t = int(raw_input())

names = []

while(t!=0):
	t = t-1
	name = str(raw_input())
	names.append(name)

names.sort()

scores = []

i = 1

for name in names:
	score = 0
	for letter in name:
		score = score + ord(letter)-64
	score = score * i
	scores.append(score)
	i = i+1

t = int(raw_input())

while(t!=0):
	t = t-1
	name = str(raw_input())
	#print "index:"+str(i)
	#print scores
	i = names.index(name)
	print scores[i]
