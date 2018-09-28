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
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
	for(int i=n-2;i>=0;i--)
		for(int j=0;j<m;j++)
		{
			if(j==0)
			{
				arr[i][j]+=min(arr[i+1][j],arr[i+1][j+1]);
				
			}
			else if(j==m-1)
			{
				arr[i][j]+=min(arr[i+1][j],arr[i+1][j-1]);
				
			}
			else{
				arr[i][j]+=min(min(arr[i+1][j],arr[i+1][j-1]),arr[i+1][j+1]);
			}
		}
	int minfare=INT_MAX;
	for(int j=0;j<m;j++)
		minfare = min(minfare,arr[0][j]);
	cout<<minfare<<"\n";
	return 0;	
}
