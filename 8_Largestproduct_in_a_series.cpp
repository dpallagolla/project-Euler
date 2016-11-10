using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
   ll num,i=0,n,t,k,j,s,p=0;
    string str;
    cin>>t;
    while(t--)
        {
        s=1;
        p=0;
    cin>>n;
        cin>>k;
    cin>>str;
char ch;
        for(i=0;i<=n-k;i++)
            {
            s=1;
            for(j=i;j<i+k;j++)
                {
                ch=str[j];
                s=s*(ch-48);
                
                
            }
            p=max(p,s);
        }
      cout<<p<<"\n";
    }
 
  
    return 0;
}
