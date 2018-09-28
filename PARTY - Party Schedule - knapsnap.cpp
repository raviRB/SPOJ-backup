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
				//   knacpsack - DP
int main(){
	int budget,parties;
	cin>>budget>>parties;
	while(!(budget==0 && parties==0)){
		int cost[parties],fun[parties];
	for(int i=0;i<parties;i++)
		cin>>cost[i]>>fun[i];
	int dp[parties][budget+1];
	int tcost=-100,tfun=-100;
	for(int i=0;i<parties;i++)
	{
		for(int j=0;j<=budget;j++)
		{
			if(j==0)
				dp[i][j]=0;
			else if(i==0)
				if(cost[i]<=j)
					dp[i][j]=fun[i];
				else
					dp[i][j]=0;
			else{
					if(j<cost[i])
						dp[i][j]=dp[i-1][j];
					else
						dp[i][j]=max(fun[i]+dp[i-1][j-cost[i]],dp[i-1][j]);	
			}
		}
	}
	for(int i=0;i<=budget;i++)
	{
		if(dp[parties-1][i]>tfun)
		{
			tfun = dp[parties-1][i];
			tcost = i;
		}
	}
	cout<<tcost<<" "<<tfun<<"\n";
	cin>>budget>>parties;
	}
return 0;	
}

