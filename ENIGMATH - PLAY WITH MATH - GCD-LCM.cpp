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
	cin>>n;
	while(n--)
	{
		long long int a ,b,mid,x,y;
		cin>>a>>b;
		mid = (a*b)/__gcd(a,b);
		x =mid/a;
		y = mid/b;
		cout<<x<<" "<<y<<"\n";
}
return 0;	
}

