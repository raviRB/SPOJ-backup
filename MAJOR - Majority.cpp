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
	long long int n,element,count=0; 
	scanf("%lld",&n);
	int pa[1001],na[1001];
	for(int i=0;i<1001;i++)
		{
			pa[i]=0;
			na[i]=0;
		}
		long long int temp;
	for(long long int i=0;i<n;i++)
		{
			scanf("%lld",&temp);
			if(temp>=0)
				pa[temp]++;
			else
				na[abs(temp)]++;
		}
		
		for(int i=0;i<1001;i++)
		{
			if(count<pa[i])
			{
				count=pa[i];
				element =i;
			}
			if(count<na[i])
			{
				count=na[i];
				element =-i;
			}
		}
		if(count>n/2)
			printf("YES %lld\n",element);
		else
			printf("NO \n");
	}
return 0;	
}

