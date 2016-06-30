#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
	long long int a[10001],i,j,b[10001],t,n;

	a[0]=b[0]=0;

	for(i=1;i<=10000;i++)
	{
		j=j+i;
		a[i]=(j*j);
		b[i]=b[i-1]+(i*i);

	}

	for(i=0;i<=10;i++)
	{
		printf("a:%lld b:%lld\n",a[i],b[i]);
	}
	

	scanf("%lld",&t);

	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",a[n]-b[n]);
	}


    return 0;
}
