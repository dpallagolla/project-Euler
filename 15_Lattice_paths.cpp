#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define mod 1000000007
using namespace std;


int main() {
    
 	long long int lattice[501][501];
 	int i,j;

 	for(i=1;i<501;i++) lattice[i][0]=lattice[0][i]=1;

 	for(i=1;i<501;i++)
 		for(j=1;j<501;j++)
 		{
 			lattice[i][j]=(lattice[i-1][j]+lattice[i][j-1])%mod;
 		}

 	int t,m,n;
 	
 	cin>>t;

 	while(t--)
 	{
 		cin>>m>>n;
 		cout<<lattice[m][n]<<endl;
 	}	

    return 0;
}
