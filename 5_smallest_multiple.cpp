#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n,i,j,k,f=0;
    cin>>t;
    for(i=0;i<t;i++)
        {
        cin>>n;
        for(j=1; ;j++)
            {
            f=0;
            for(k=1;k<=n;k++)
                {
                if(j%k!=0)
                    {
                    
                f=1;
                    break;
            }
            }
                if(f==0)
                    {
                    cout<<j<<endl;;
                    break;
                }
        }
            
    }
    return 0;
}
