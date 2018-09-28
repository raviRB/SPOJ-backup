#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<cmath>
#include<stack>
#define MAX 10
#define mod 1000007
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,n,count=0;
		scanf("%d%d",&a,&b);
		n = __gcd(a,b);
		
		for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                count+=1;
 
            else // Otherwise print both
                count+=2;
        }
    }
		printf("%lld\n",count);
	}
return 0;	
}
