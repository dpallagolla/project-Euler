#include <cmath>
#include <cstdio>
#include <vector>
#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

long long int firstProd(char s[],int st,int n)
{
	long long int prod=1;
	int i;
	//printf("st:%d n:%d\n",st,n);
	for(i=st;i<n;i++)
	{
		prod*=(s[i]-48);

		//printf("mul:%d ",s[i]-48);
	}
	//printf("\n");
	return prod;
}

int length(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++);
		return i;
}
int main() {
    
	int t;

	cin>>t;

	while(t--)
	{
		int n,k,i;
		cin>>n>>k;
		char s[1001];
		scanf("%s",s);
		long long int prod=firstProd(s,0,k);
		//printf("firstProd:%lld\n",prod);
		int ln = length(s);
		for(i=1;s[i]!='\0' && i<ln-k+1;i++)
		{
			long long int t = firstProd(s,i,i+k);
			//printf("T:%lld i:%d i+k:%d\n",t,i,i+k);
			if(prod<t)
			{
				prod=t;
			}

		}
		cout<<prod<<endl;
	}

    return 0;
}
