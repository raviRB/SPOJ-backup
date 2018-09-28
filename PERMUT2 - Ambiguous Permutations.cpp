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
using namespace std;

int main(){
 int n;
 cin>>n;
 while(n!=0){
int arr[n+1],a[n+1],i;
for(i=1;i<=n;i++)
	cin>>arr[i];
for(i=1;i<=n;i++)
	a[arr[i]] = i;
for(i=1;i<=n;i++)
	if(arr[i]!=a[i])
		break;
	if(i==n+1)
		cout<<"ambiguous\n";
	else
		cout<<"not ambiguous\n";
	cin>>n;
 }
return 0;	
}

