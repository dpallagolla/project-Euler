import os

off = [0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4];

def dayOfWeek(year,month,day):
    if(month<3):
        year = year -1;
    return (year + year/4 - year/100 + year/400 + off[month-1] + day) % 7;


ti = int(raw_input())

while(ti!=0):
    ti = ti - 1
    #print "t:"+str(ti)
    ans = 0
    y1 = raw_input().split()
    year1 = int(y1[0])
    month1 = int(y1[1])
    day1 = int(y1[2])
    y2 = raw_input().split()
    year2 = int(y2[0])
    month2 = int(y2[1])
    day2 = int(y2[2])

    if(day1!=1):
        month1 = month1+1
    if(year1<year2):
        for month in range(month1,13):
            t = dayOfWeek(year1,month,1)
            if(t==0):
                ans = ans+1
        year1 = year1 + 1
        for year in range(year1,year2):
            for month in range(1,13):
                t = dayOfWeek(year,month,1)
                if(t==0):
                    ans = ans+1
        for month in range(1,month2+1):
            t = dayOfWeek(year2,month,1)
            if(t==0):
                ans = ans+1
    else:
        for month in range(month1,month2+1):
            t = dayOfWeek(year1,month,1)
            if(t==0):
                ans = ans+1
    print ans