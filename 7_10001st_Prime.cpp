#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i,n,j,k;
   
       int arr[10001];
        int f=0;
        j=2;
        while(f!=10000)
            {
            int p=0;
                for(k=2;k*k<=j;k++)
                    {
                    if(j%k==0)
                        {
                        p=1;
                        break;
                    }
                }
            if(p==0){
                f++;
                arr[f]=j;
            }
        j++;
        }
        
        cin>>t;
    while(t--)
        {
cin>>n;
    cout<<arr[n]<<"\n";}
    
    return 0;
}
