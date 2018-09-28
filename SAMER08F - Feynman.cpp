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
	int n;
	scanf("%d",&n);
	while(n!=0)
		{
		cout<<(n*(n+1)*(2*n+1))/6<<"\n";
		cin>>n;
		}
return 0;	
}

