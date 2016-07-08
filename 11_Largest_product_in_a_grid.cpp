#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int a[20][20];

ll leftp(int i,int j)
{

	if(j<3)
		return 0;
	ll r = a[i][j]*a[i][j-1]*a[i][j-2]*a[i][j-3];
	return r;

}

ll rightp(int i,int j)
{
	if(j>16)
		return 0;
	ll r = a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
	return r;
}

ll upp(int i,int j)
{
 
 	if(i<3)
 		return 0;
 	ll r = a[i][j]*a[i-1][j]*a[i-2][j]*a[i-3][j];
 	return r;

}

ll downp(int i,int j)
{
	if(i>16)
		return 0;
	ll r = a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
	return r;
}

ll uld(int i,int j)
{

	if(i<3 || j<3)
		return 0;

	ll r = a[i][j]*a[i-1][j-1]*a[i-2][j-2]*a[i-3][j-3];

	return r;

}

ll urd(int i,int j)
{

	if(i<3 || j>16)
		return 0;

	ll r = a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];

	return r;

}

ll lld(int i,int j)
{

	if(i>16 || j<3)
		return 0;
	ll r = a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];

	return r;

}

ll lrd(int i,int j)
{

	if(i>16 || j>16)
		return 0;
	ll r = a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];

	return r;

}

long long int maxi(ll a,ll b,ll c,ll d,ll e)
{
	if(a>=b)
	{
		if(a>=c)
		{
			if(a>=d)
			{
				if(a>=e)
				{
					return a;
				}
			}
		}
	}

		if(b>=c)
		{
			if(b>=d)
			{
				if(b>=e)
				{
					return b;
				}
			}
		}

		if(c>=d)
		{
			if(c>=e)
			{
				return c;
			}
		}

		if(d>=e)
			return d;

		return e;

		

}

ll diagonalp(int i,int j)
{
	return maxi(uld(i,j),urd(i,j),lld(i,j),lrd(i,j),0);
}

int main() {

	int i,j;
	ll product=0;

	for(i=0;i<20;i++)
		for(j=0;j<20;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			ll lp = leftp(i,j);
			ll rp = rightp(i,j);
			ll up = upp(i,j);
			ll dp = downp(i,j);
			ll dip = diagonalp(i,j);
			ll mp = maxi(leftp(i,j),rightp(i,j),upp(i,j),downp(i,j),diagonalp(i,j));
			//printf("max product at %d:%d is %lld\n",i,j,mp);
			if(product<mp)
				product = mp;
		}
	}

	cout<<product<<endl;
    
    return 0;
}
