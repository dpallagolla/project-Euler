#include <iostream>
#include <set>
#include <stdio.h>
#define ll long long int
#define s 100005
using namespace std;

set<int> m;
int a[20];
bool av[s];

int main()
{

	int sc;
	scanf("%d",&sc);
	int t,te,j,pow,i;
	ll sol = 0;
	pow=te=0;
	te++;
	while(te<=sc)
	{
		te=te*2;
		pow++;
	}
	pow--;

	for(i=1;i<=pow;i++)
	{
		j=2;
		while(j<=sc)
		{
			m.insert(j*i);
			j++;
		}
		a[i]=m.size();
	}

	for(i=2;i<=sc;i++)
	{
		if(!av[i])
		{
			pow = 1;
			for(ll j = (ll)i*i; j<=sc; j = j*(ll)i)
			{
				av[j]=1;
				pow++;
			}
			sol+=a[pow];
		}
	}

	printf("%lld",sol);



}