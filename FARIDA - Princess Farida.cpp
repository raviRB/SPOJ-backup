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
ll  col[10010];
ll arr[10010];
ll calculate(int index){
	if(index<0)
		return 0;
	if(col[index]!=-1)
		return col[index];
		
	col[index]= max(calculate(index-2)+arr[index],calculate(index-1));
return col[index];
}

int main(){
	int t;
	cin>>t;
	int h=1;
	while(h<=t){
		int  i,n;
		cin>>n;
		rep(i,n){
			cin>>arr[i];
			col[i]=-1;
		}
		ll res = calculate(n-1);
		cout<<"Case "<<h<<": "<<res<<"\n";
		h++;
	}
	return 0;
}

