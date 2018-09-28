#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<cmath>
#define MAX 10
using namespace std;
//DP
int main(){
 int t;
 cin>>t;
 while(t--){
 	long long int  a,b,c;
 cin>>a>>b>>c;
 long long int  n = (c*2)/(a+b);
 cout<<n<<"\n";
 long long int  diff = (b-a)/(n-5);
 long long int  begin = a-2*diff;  // a of A.P
 for(long long int i=0;i<n;i++)
 	{
 		cout<<begin<<" ";
 		begin+=diff;
	 }
	 cout<<"\n";
 }
return 0;	
}

