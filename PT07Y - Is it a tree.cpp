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
int visited[10001];
void add_edge(vector <int> v[],int n1,int n2){
	v[n1].push_back(n2);
	v[n2].push_back(n1);
}
int dfs_s(vector <int> v[],int i,int parent){
		visited[i]=1;
	for(vector<int>::iterator it = v[i].begin();it!=v[i].end();it++){
		if(visited[*it]==0)
		{
		//	cout<<"Calling\n";
			if(dfs_s(v,*it,i)==1)
				return 1;
		}
		else if(*it!=parent)
			return 1;
	}
	return 0;
}
int main(){
	int n,m,temp1,temp2;
	cin>>n>>m;
	vector <int> v[10001];
	for(int i=0;i<10001;i++)
		{
			visited[i]=1;
		}
	for(int i=0;i<m;i++)
		{
			cin>>temp1>>temp2;
			visited[temp1]=0;
			visited[temp2]=0;
			add_edge(v,temp1,temp2);
		}
	
	int flag =0,j;
	for(int i=0;i<10001;i++){
		if(visited[i]==0)
			{
				flag = dfs_s(v,i,-1);
			}
		if(flag==1)
			break;
	}
	if(flag==1)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}

