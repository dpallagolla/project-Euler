import os

def base10toN(num, base):
    """Change ``num'' to given base
    Upto base 36 is supported."""

    converted_string, modstring = "", ""
    currentnum = num
    if not 1 < base < 37:
        raise ValueError("base must be between 2 and 36")
    if not num:
        return '0'
    while currentnum:
        mod = currentnum % base
        currentnum = currentnum // base
        converted_string = chr(48 + mod + 7*(mod > 10)) + converted_string
    return converted_string



a = raw_input()

n = int(a.split()[0])

k = int(a.split()[1])

sm = 0
for i in range(1,n):
	si = str(i)
	if(si==si[::-1]):
		ki = base10toN(i,k)
		if(ki==ki[::-1]):
			sm+=i


print sm


