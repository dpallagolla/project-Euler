#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

bool palin(ll n)
    {
    ll p=n;
    ll s=0;
    while(p>0)
        {
        s=s*10+p%10;
        p=p/10;
    }
    if(s==n) // is a palindrome
        return true;
    return false;
}
int main() {
  
    ll i,j,k=0,p,n,t;
    cin>>t;
    while(t--)
    {
        k=0;
        
        cin>>n;
        int f=0;
        for(i=999;i>=100;i--)
            {
            for(j=999;j>=100;j--)
                {
                if(i*j<=k)
                    break;
                if(i*j<n)
                    {
                    if(palin(i*j)) // i*j is a palindrome
                        {
                        k=max(k,(i*j));
                       
                        break;
                    }
                }
                
            }
        }
    cout<<k<<"\n";    
        
    }
    
    return 0;
}
