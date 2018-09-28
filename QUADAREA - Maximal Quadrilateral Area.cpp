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
	cin>>t;
	while(t--){
	double a,b,c,d;
	double s,ar;
	cin>>a>>b>>c>>d;
	s = (a+b+c+d)/2;
	ar = sqrt((s-a)*(s-b)*(s-c)*(s-d));
	printf("%.2lf\n",ar);
	}
return 0;	
}

