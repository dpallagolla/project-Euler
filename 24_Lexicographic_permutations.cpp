#include <iostream>
#include <stdio.h>
#include <string.h>
#define limit 14
#define ll long long int
using namespace std;

int main()
{

	bool u[limit];
	char a[limit];
	ll f[limit];

	f[0]=f[1]=1;

	int i;
	for(i=2;i<14;i++)
		f[i]=f[i-1]*i;

	a[13]='\0';


	int t,j;

	cin>>t;

	while(t--)
	{

		 memset(u,0,sizeof(u));

		ll n,c;
		cin>>n;

		for(i=12;i>=0;i--)
		{
			ll e = 1;
			c = f[i];

			while(c<n)
			{
				c = c/e;
				e++;
				c = c*e;
			}
			c=0;

			for(j=0;j<13;j++)
			{
				if(!u[j])
				{
					c++;
					if(c==e)
					{
						a[12-i]='a'+j;
						u[j]=1;
					}
				}
			}

			e--;
			n-=e*f[i];


		}

		puts(a);

	}

	return 0;

}