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
ll count_loc(ll *arr,ll mid,ll n){
	ll val =1,total=0,start=0;
	rep(i,n){
		total = arr[i]-arr[start];
		if(total>=mid){
			start = i;
			val++;
			total=0;
		}
	}
	return val;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,c,mid=0,low,high,loc=0,val=0;
		cin>>n>>c;
		ll arr[n];
		rep(i,n)
			cin>>arr[i];
		sort(arr,arr+n);
		low =0;
		high = 1000000000;
		while(high-low>1){
			mid = (high+low)/2;
			loc = count_loc(arr,mid,n);
			//cout<<high<<" "<<low<<" "<<mid<<" "<<loc<<"\n";
			if(loc>=c){
				low = mid;
				val  = loc;
			}
			else{
				high = mid;
			}
		}
		cout<<low<<"\n";
	}
	return 0;
}

