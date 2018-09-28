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
int dist[183][183],n,m;
int getdist(int i,int j){
	
	if(i>=1 && i<=n && j>=1 && j<=m){
		cout<<i<<" "<<j<<" "<<dist[i][j]<<"\n";
		if(dist[i][j]!=-1)
			return dist[i][j];
		else{
			dist[i][j]= min(1+min(getdist(i,j-1),min(getdist(i,j+1),min(getdist(i-1,j),getdist(i+1,j)))),100000);  
			return dist[i][j];
		}	
	}
	else
		return 10000;
	// ,2+min(getdist(i-1,j+1),min(getdist(i-1,j-1),min(getdist(i+1,j+1),getdist(i+1,j-1))))
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		char arr[n][m];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				{
				
					if(arr[i][j]=='1')
						dist[i+1][j+1]=0;
					else
						dist[i+1][j+1]=-1;
					cout<<dist[i+1][j+1]<<" ";
				}
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++)
				{
					cout<<"getting values  "<<i<<" "<<j<<"\n";
					cout<<getdist(i,j)<<" ";
					
				}
			cout<<"\n";
		}
	}
	return 0;
}

