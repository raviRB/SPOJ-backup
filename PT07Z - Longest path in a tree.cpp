#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<math.h>
#define MAX 10
#define ll long long int 
#define rep(i,j) for(int i=0;i<j;i++)
using namespace std;
vector <int>::iterator it;
queue< pair<int, int> > q;
void add_edge(int u,int z,vector <int> v[]){
	v[u].push_back(z);
	v[z].push_back(u);
}
pair<int,int> bfs(vector <int> v[],bool *arr){
	int maxnode,length=0;
	while(!q.empty()){
	pair<int,int> p;
	p = (q.front());
	q.pop();	
	int node = p.first;
	if(p.second>length){
		length = p.second;
		maxnode = p.first;
	}
	arr[node]=true;
	for(int j=0;j<v[node].size();j++){
		if(!arr[v[node][j]]){
			q.push(make_pair(v[node][j],p.second+1));
		}
	}	
	}
	return make_pair(maxnode,length);
}
int main(){
	
	int n,i,u,z;
	cin>>n;
	vector <int> v[n+9];
	bool arr[n+10],a[n+10];
	rep(i,n-1){
		cin>>u>>z;
		add_edge(u,z,v);
	}
	rep(i,n+1)
		{
			arr[i]=false;
			a[i]=false;
		}
	q.push(make_pair(1,0));
	pair <int,int> p ;
	p = bfs(v,arr);
//	cout<<p.first<<" "<<p.second<<"\n";
	q.push(make_pair(p.first,0));
	p=bfs(v,a);
	cout<<p.second<<"\n";
	return 0;
}

