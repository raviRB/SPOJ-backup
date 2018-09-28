#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<math.h>
#define MAX 10
using namespace std;
//DP
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	
	int r,c;
	cin>>r>>c;
	int arr[r+1][c+1];
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=r-1;i>=1;i--){
		for(int j=1;j<=c;j++){
			if(j==1)
			{
				arr[i][j] += max(arr[i+1][j],arr[i+1][j+1]);
			}
			else if (j==c){
				arr[i][j] += max(arr[i+1][j],arr[i+1][j-1]);
			}
			else{
				arr[i][j] += max(max(arr[i+1][j],arr[i+1][j-1]),arr[i+1][j+1]);
			}
		}
	}
	int mx=0;
/*	cout<<"\n\n";
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}*/
	for(int i=1;i<=c;i++)
		mx = max(mx,arr[1][i]);
	
	cout<<mx<<"\n";
}
return 0;	
}

