#include <stdio.h>
#include <iostream>
#define ll long long int
#define limit 28124
using namespace std;


bool ab[limit];

int main()
{

	int t,n,i,j;
	cin>>t;


	ll c = 0;
	
	for(i=1;i<limit;i++)
	{
		c = 1;
		j = 2;
		for(j = 2; j*j < i; j++)
			if(i % j == 0) c+= (ll)j + (ll)i/(ll)j;
		
		if(j*j == i) c += (ll)j;
		
		if(c > i) ab[i] = 1;
	}

	while(t--)
	{
		cin>>n;

		if(n>28123)
			cout<<"YES\n";
		else
		{
			int f=0;

			for(i=1;i<(n/2)+2;i++)
			{
				if(ab[i] && ab[n-i])
				{
					f=1;
					break;
				}
			}

			if(f)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}

	return 0;
}