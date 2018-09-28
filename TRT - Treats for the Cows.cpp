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
#define ll long long 
using namespace std;   
int temp[2001],n;
ll arr[2001][2001]={0};
 ll cal(int s ,int l){
 	if(s==l)
 		return temp[s]*(n-(l-s));
 	if(arr[s][l]!=0)
 		return arr[s][l];
 	arr[s][l] = max(temp[s]*(n-(l-s))+cal(s+1,l),  temp[l]*(n-(l-s))+cal(s,l-1) );
 	return arr[s][l];
 	
 }
 int main(){
 	cin>>n;
 	for(int i=1;i<=n;i++)
 		cin>>temp[i];
 	ll result = cal(1,n);
 	cout<<result<<"\n";
return 0;	
}

