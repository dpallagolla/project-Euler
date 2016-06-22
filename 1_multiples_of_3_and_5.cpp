#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// refer http://www.mathblog.dk/project-euler-problem-1/ for explanation of the solution

 long long int SumDivisbleBy(long long int n, long long int p){
    return n*(p/n)*((p/n)+1)/2;
}

int main() {
    
    long long int t,n;
    
    scanf("%lld",&t);
    
    while(t--)
        {
        
        scanf("%lld",&n);
        
        long long int sum=0,i;
        
        sum = SumDivisbleBy(3,n-1) + SumDivisbleBy(5,n-1) - SumDivisbleBy(15,n-1);
        
        printf("%lld\n",sum);
        
        }
    
    return 0;
}
