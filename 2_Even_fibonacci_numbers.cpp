using namespace std;
#include <bits/stdc++.h>
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    ll t,i,n,j,k,p,sum=0;
    cin>>t;
    while(t--)
        {
        sum=0;
        cin>>n;
         ll arr[10000];
  i=1;
         arr[1]=2;
       arr[2]=8;
        while(0==0)
            {
       
     
       if(i<=2){
           if(arr[i]<=n)
               sum=sum+arr[i];}
       else
         {
           arr[i]=4*arr[i-1]+arr[i-2];
           if(arr[i]<=n )
             {
             sum=sum+arr[i];
         }
           else
               {
               cout<<sum<<"\n";
           break;
               }
        }
            i++;
        
    }
    }
    
return 0;
}
