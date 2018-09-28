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
	int t;
	cin>>t;
	while(t--){
		int e,f,n;
		cin>>e>>f;
		cin>>n;
		int amount[n],weight[n];
		for(int i=0;i<n;i++)
			cin>>amount[i]>>weight[i];
		int wei = f-e;
		int dp[wei+1];  // minimum amount for each value of weight in given range 
		dp[0]=0;
		for(int i=1;i<=wei;i++)
		{
			// for each i i.e range of weight we calculate the minimum amount of coin when all given weights of coin are available
			dp[i]=-1;   // initialising 
			for(int j=0;j<n;j++)
			{                          		
				if(i>=weight[j] && dp[i-weight[j]]!=-1 && (dp[i]==-1 || amount[j]+dp[i-weight[j]]<=dp[i]))
					dp[i] = amount[j]+dp[i-weight[j]];
			}
		//	cout<<dp[i]<<"\n";
		}
		if(dp[wei]!=-1)
			cout<<"The minimum amount of money in the piggy-bank is "<<dp[wei]<<".\n";
		else
			cout<<"This is impossible.\n";
		
	}
return 0;	
}

