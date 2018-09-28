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
int mouse=INT_MAX,cat1=INT_MAX,cat2=INT_MAX;
int arr[101]101]={0},visited[101][101]={0};
queue< pair< int,int > > q;
void bfs(int *count){
	while(!q.empty()){
		pair <int,int> p;
		p = q.front();
		x = p.first;
		y = p.second;
		if(x==n || y==m || n==0 || m==0)
		{
			if()
		}
		q.pop();
		if(x-1>=1 && visited[x-1][y]==0){
			visited[x-1][y]=1;
			arr[x-1][y] = arr[x][y]+1;	
			q.push(make_pair(x-1,y));
		}
		if(y-1>=1 && visited[x][y-1]==0){
			visited[x][y-1]=1;
			arr[x][y-1] = arr[x][y]+1;	
			q.push(make_pair(x,y-1));
		}
		if(x+1<=n && visited[x+1][y]==0){
			visited[x+1][y]=1;
			arr[x+1][y] = arr[x][y]+1;	
			q.push(make_pair(x+1,y));
		}
		if(y+1<=m && visited[x][y+1]==0){
			visited[x][y+1]=1;
			arr[x][y+1] = arr[x][y]+1;	
			q.push(make_pair(x,y+1));
		}
			
	}
}
int main(){
	int n,m;
	int mx,my,c1x,c1y,c2x,c2y;
	q.push(make_pair(mx,my));
	bfs(&mouse);
	bfs(c1x,c1y,cat1);
	bfs(c2x,c2y,cat2);
	return 0;
}

