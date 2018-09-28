#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<string.h>
#include <bits/stdc++.h>
#include<cmath>
#define MAX 10
using namespace std;

int main(){
	int n,k;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	cin>>k;
	for(int i=0;i<=n-k;i++)
		printf("%d ",*max_element(arr+i,arr+i+k));
return 0;	
}

