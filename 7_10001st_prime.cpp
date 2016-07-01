#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    

	//printf("Reached here\n");
    long long int n=109999,i,j;
    long long int a[n],b[n/2];


    for(i=2;i<n;i++)
    	a[i]=1;
    for(i=2;i<sqrt(n)+2;i++)
    {
    	int pj=i;
    	for(j=i+pj;j<n;j=j+pj)
    	{
    		a[j]=0;
    	}
    }

    //printf("Initialization done\n");

    // for(i=2;i<10;i++)
    // 	printf("%lld:",a[i]);
    for(i=2,j=0;i<n;i++)
    {
    	if(a[i]==1)
    	{
    		b[j]=i;
    		j++;
    	}
    }

    //printf("Sieve done\n");

    // printf("primes:%lld\n",j);

    // for(i=0;i<j;i++)
    // 	printf("%lld ",b[i]);

    int t;

    cin>>t;

    while(t--)
    {
    	int n;
    	cin>>n;

    	cout<<b[n-1]<<endl;
    }

    return 0;
}
