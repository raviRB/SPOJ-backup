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
	long long int t,j;
	cin>>t;
	for(j=1;j<=t;j++){
		long long int n,r,temp,temp1;
		cin>>n>>r;
		vector<int> ar[n+1];
		vector<int>::iterator it;
		while(r--){
			cin>>temp>>temp1;
			ar[temp].push_back(temp1);
			ar[temp1].push_back(temp);
		}
		long long int arr[n+1],flag=0;;   // 1- male / 2 - Female
		for(int i=1;i<n+1;i++)
			arr[i]=0;
		for(int i=1;i<n+1;i++)
		{
			if(arr[i]==0)
				arr[i]==1;
			for(it = ar[i].begin();it!=ar[i].end();it++)
			{
				if(arr[i]==1 && arr[*it]==1 || arr[i]==2 && arr[*it]==2)
				{
					flag=1;
					break;
				}
				else if(arr[*it]==0)
				{
					if(arr[i]==1)
						arr[*it]=2;
					else
						arr[*it]=1;
				}
			}
			if(flag==1)
				break;
		}
		cout<<"Scenario #"<<j<<":\n";
		if(flag==1)
			cout<<"Suspicious bugs found!\n";
		else
			cout<<"No suspicious bugs found!\n";
	
	}
	
return 0;	
}

