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
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<int> ab,abc,fe,dfe;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			ab.push_back(arr[i]*arr[j]);
	for(int i=0;i<ab.size();i++)
		for(int j=0;j<n;j++)
			abc.push_back(ab[i]+arr[j]);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			fe.push_back(arr[i]+arr[j]);
	for(int i=0;i<fe.size();i++)
		for(int j=0;j<n;j++)
			{
				if(arr[j]==0)
					continue;
				dfe.push_back(fe[i]*arr[j]);		
			}
	map< int,int > abcm,dfem;
	for(int i=0;i<dfe.size();i++)
		dfem[dfe[i]]++;
	for(int i=0;i<abc.size();i++)
		abcm[abc[i]]++;
	long long count=0;
	map< int,int >::iterator it;
	for(it = abcm.begin();it!=abcm.end();it++)
	{
		count += (it->second*dfem[it->first]);
	}
	cout<<count<<"\n";
	
return 0;	
}
