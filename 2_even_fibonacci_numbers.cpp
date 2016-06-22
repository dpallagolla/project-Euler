#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int t;

    scanf("%lld",&t);

    while(t--)
    {
    	long long int n,a=1,b=2,temp,sum=0;
    	scanf("%lld",&n);
    	for(;b<n;)
    	{
    		if(b%2==0)
    			sum+=b;
    		temp = b;
    		b=a+b;
    		a=temp;
    	}
    	printf("%lld\n",sum);
    }

    return 0;
}
