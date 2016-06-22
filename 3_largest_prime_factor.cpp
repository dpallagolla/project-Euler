#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

// this solution currently gives wrong answer for 5th testcase.
int main() {
    
    long long int n=1000009;
	bool primes[n+1];

	memset(primes,true,sizeof(primes));

	long long int i,j,k;

	for(i=2;i*i<=n;i++)
	{
		if(primes[i]==true)
		{
			for(j=i*2;j<=n;j+=i)
				primes[j]=false;
		}
	}


	vector<long long int> primeArray;
	// long long int primeArray[n+1];
	// j=0;
	for(i=2;i<=n;i++)
	{
		if(primes[i])
		{
			primeArray.push_back(i);			
		}
	}

	

	int t;
	long long int input;
	scanf("%d",&t);

	while(t--)
	{
		scanf("%lld",&input);
		
		for(vector<long long int>::reverse_iterator rit=primeArray.rbegin();rit!=primeArray.rend();rit++)
		{
			if(input%(*rit)==0)
			{
				printf("%lld\n",*rit);
				break;
			}
		}
	}

    return 0;
}