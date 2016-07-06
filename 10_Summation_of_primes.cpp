#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    	
    long long int n=1000002,i,j;
    long long a[n];


    for(i=0;i<=n;i++)
        a[i]=i;

    
    for(i=2;i<sqrt(n)+2;i++)
    {
    	int pj=i;
    	for(j=i+pj;j<n;j=j+pj)
    	{
    		a[j]=0;
    	}
    }

    a[0]=a[1]=0;
     for(i=1;i<=n;i++)
     {
        a[i]=a[i]+a[i-1];
        //printf("a[%lld]:%lld\n",i,a[i]);
     }
    int t;

    scanf("%d",&t);

    while(t--)
    {
    	long long int n;
    	scanf("%lld",&n);
        printf("%lld\n",a[n]);
            	
    }

    return 0;
}
