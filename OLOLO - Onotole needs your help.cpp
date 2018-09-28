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
	long long int n;
	scanf("%lld",&n);
	long long int num,arr[n];
	for(long long int i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	num = arr[0];
	for(int i=1;i<n;i++)
		num = num ^ arr[i];
	printf("%lld",num);
	
return 0;	
}

