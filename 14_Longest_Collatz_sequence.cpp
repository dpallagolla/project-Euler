#include <cmath>
#include <cstdio>
#include <vector>
#include <string.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define limit 5000001
using namespace std;


int maxm[limit],len[limit];


int compute()
{
	ll i;
	for(i=1;i<limit;i++)
	{
		int count=1;
		ll num = i;
		while(num!=1)
		{
			if(num<limit && len[num]!=-1)
			{
				count+=len[num]-1;
				break;
			}
			if(num&1) num = num*3+1;
			else num>>=1;
			count++;
		}
		len[i]=count;
		maxm[i]=len[maxm[i-1]]>count? maxm[i-1]:i;
	}

}

int main() {
    
    
	memset(maxm,-1,sizeof(maxm));
	memset(len,-1,sizeof(len));
	
	compute();

	int t;

	cin>>t;

	while(t--)
	{
		ll n;
		cin>>n;
		cout<<maxm[n]<<endl;
	}
	
    return 0;
}
