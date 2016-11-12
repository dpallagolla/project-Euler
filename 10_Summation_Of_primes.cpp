using namespace std;
#include <bits/stdc++.h>
typedef long long ll;

void sieve(ll arr[])
    {
   ll n=1000001;
   ll i,j;
    
    for(i=0;i<n;i++)
        arr[i]=1;
    arr[1]=0;
    arr[0]=0;
    for(i=2;i*i<=n;i++)
        {
        if(arr[i]==1)
            {
        for(j=i*i;j<n;j=j+i)
            {
                arr[j]=0;
        }
    }
}
    
}
int main() {
    ios_base::sync_with_stdio(false);
   
 ll t,n,i,j,k;
    n=1000001;
    ll arr[n];
    sieve(arr);
    cin>>t;
    ll sum[1000001];
  sum[0]=0;
     for(i=1;i<=n;i++)
         {
         if(arr[i]==1)
         sum[i]=i+sum[i-1];
         else
             sum[i]=sum[i-1];
            }
       
    while(t--)
        {
            cin>>n;
       
        
     cout<<sum[n]<<"\n";   
    }
  
    return 0;
}
