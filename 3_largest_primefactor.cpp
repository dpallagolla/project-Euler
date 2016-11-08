using namespace std;
#include <bits/stdc++.h>
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    ll t,i,n,k,p,f=0;
    cin>>t;
    while(t--)
        {
        cin>>n;
        f=0;
       while(n%2==0)
           n=n/2;
        if(n==1) // power of 2
        {
                f=1;
                 cout<<"2"<<"\n";
         }
        else
            {
            for(i=3;i*i<=n;i+=2) // as even factors already removed
                {
                while(n%i==0)
                    n=n/i;
                if(n==1)
                    {
                    f=1;
                    cout<<i<<"\n";
                    break;
                }
                    
            }
        }
        if(f==0)
            cout<<n<<"\n";
    }
        
    
return 0;
}
   
