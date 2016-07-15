import os

def OneString(num):
	num = int(num)
	ones = ["One","Two","Three","Four","Five","Six","Seven","Eight","Nine"]
	print ones[num-1],

def TenString(num):
	num = int(num)
	tens = ["Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"]
	print tens[num-1],

def OneTenString(num):
	num = int(num)
	oneTens = ["Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen"]
	print oneTens[num],

def printDigits(num):
	num = int(num)	
	if(num!=0):
		num = str(num)
		num = num.zfill(3)
		#print "num[0:1] is "+num[0:1] + "num is: "+num
		if(int(num[0:1])!=0):
			OneString(num[0:1]) 
			print "Hundred",
		if(int(num[1:2])>=2):
			TenString(num[1:2])
			if(int(num[2:3])!=0):
				OneString(num[2:3])
		elif(int(num[1:2])==1):
			OneTenString(num[2:3])
		else:
			OneString(num[2:3])	
		
def billion(num):
	num = int(num)
	if(num!=0):
		printDigits(num)
		print "Billion",

def million(num):
	num = int(num)
	if(num!=0):
		printDigits(num)
		print "Million",
	pass

def thousand(num):
	num = int(num)
	if(num!=0):
		printDigits(num)
		print "Thousand",
	pass

def hundred(num):
	num = int(num)
	if(num!=0):
		printDigits(num)
	pass


t = int(raw_input())

while(t!=0):
	t=t-1
	n = str(raw_input())
	n = n.zfill(12)
	#print "after zfill:"+n
	billion(n[0:3])
	million(n[3:6])
	thousand(n[6:9])
	hundred(n[9:12])
	print ""
