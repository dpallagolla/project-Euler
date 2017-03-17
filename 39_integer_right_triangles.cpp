#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main(){
	
	int t,n;	
	
	int a[]={12,60,120,240,420,720,840,1680,2520,4620,5040,9240,18480,27720,55440,110880,120120,166320,180180,240240,360360,
	720720,1081080,1441440,2042040,2162160,2882880,3603600,4084080};
	
	scanf("%d",&t);

	while(t--){
		cin>>n;
		printf("%d\n",(a[upper_bound(a,a + sizeof(a)/sizeof(int),n) - a -1] ));
	}

	return 0;
		
}