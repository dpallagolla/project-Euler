#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   long long t,i,j,k,n;
    cin>>t;
    for(i=0;i<t;i++)
        {
        cin>>n;
        long long s1=0,s2=0,d=0;
        for(j=1;j<=n;j++)
            {
            s1=s1+j*j;
            s2=s2+j;
        }
        d=s2*s2-s1;
        cout<<d<<endl;
        
        }
    return 0;
}
