// sourced from http://www.mathblog.dk/pythagorean-triplets/
#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

void calculate(int limit)
{

    long long int a = 0, b = 0, c = 0;
    int s = limit;
    bool found = false;
    long long int maxMul = 0;
    
    for (a = 1; a < s / 3; a++) {
        for (b = a; b < s / 2; b++) {
            c = s - a - b;
     
            if (a * a + b * b == c * c) {
                if(a+b+c == s && (a*b*c)>maxMul)
                {
                    maxMul = (a*b*c);
                }
            }
        }
     
        
    }

    if(maxMul>0)
        printf("%lld\n",maxMul);
    else
    printf("-1\n");
    return;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        calculate(n);
    }

    return 0;
}