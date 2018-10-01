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
int main(){
	int t;
	cin>>t;
	while(t--){
	ll  p,n,m,a,b,c;
	cin>>p>>n>>m;
	map < ll,pair<ll,ll> > mp;
	map < ll,pair<ll,ll> >::iterator it ;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		mp[c]=make_pair(a,b);
	}
	ll arr[1000]={0},edges=n-1,cost=0;
	for(it = mp.begin();it!=mp.end();it++){
		cout<<(it->second).first<<" "<<(it->second).second<<" "<<it->first<<"\n";
		if(arr[(it->second).first]!=1 || arr[(it->second).second]!=1)
		{
			arr[(it->second).first]=1;
			arr[(it->second).second]=1;
			cost+=it->first*p;
			edges--;
		}
		if(edges==0)
			break;
	}
	cout<<cost<<"\n";
	}
return 0;
}
