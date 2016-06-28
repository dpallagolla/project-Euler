// sourced from https://alikhuram.wordpress.com/2013/03/30/project-euler-problem-5-solution-in-c/

#include <iostream>

using namespace std;


void find_prime (int *numArray, int maxNum)
{
	maxNum++;
int factor = 2; 
numArray[1] = 0;

while ((factor * factor) < maxNum)
{
for (int i = 2; i < maxNum; i++)
{
if (numArray[i] != 0)
{

if (numArray[i] != factor && (numArray[i]% factor) == 0)
{
numArray[i] = 0;
}
}
}
++factor;
}
}

int main ()
{
int maxNum = 0;
int result = 1;
int num = 0;

int t;
cin>>t;

while(t--)
{

	int input;

	cin>>input;

	maxNum=input;
	result=1;
	num=0;
int *myArray = new int [maxNum+1];


for (int i = 0; i <=maxNum; i++)
{
myArray[i]= i;
}


find_prime(myArray, maxNum);

for (int i = 2; i <= maxNum; i++)
{
if ((myArray [i]) != 0)
{
num = myArray[i];
while ((num * (myArray[i])) <= maxNum)
{
num = num * (myArray[i]);
}
result = num * result;
}
}
cout << result<<endl;
delete []myArray;
}
return 0;
}