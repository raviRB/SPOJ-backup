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
#define ll  long long 
#define mod 1000007
using namespace std;   
ll st[450000],lazy[450000];                                          //     Segment tree for minimum in arange of indicies
void createtree(ll *arr,ll *st,ll start,ll end,ll pos){
	if(start==end){
		st[pos]=arr[start];
		return  ;
	}
	ll mid = (start+end)/2;
	createtree(arr,st,start,mid,2*pos+1); // left sub-tree
	createtree(arr,st,mid+1,end,2*pos+2); // right sub-tree
	st[pos] = st[2*pos+1]+st[2*pos+2]; // current node value
}
ll  getvalinrange(ll start,ll end,ll rstart,ll rend,ll pos){  // rstart = range start
	if(end<rstart || start>rend)  // No overlap
		return 0;
	 if(lazy[pos] != 0)
    {
        // This pos needs to be updated
        st[pos] += (end - start + 1) * lazy[pos];            // Update it
        if(start != end)
        {
            lazy[pos*2+2] += lazy[pos];         // Mark child as lazy
            lazy[pos*2+1] += lazy[pos];    // Mark child as lazy
        }
        lazy[pos] = 0;                 // Reset it
    }
	if(start>=rstart && end<=rend) // Total overlap
		return st[pos];
	ll mid = (start+end)/2;
	return getvalinrange(start,mid,rstart,rend,2*pos+1)+getvalinrange(mid+1,end,rstart,rend,2*pos+2); // partital overlap
	
}
void update(ll start,ll end,ll l,ll r,ll val,ll pos){
	
	if(lazy[pos] != 0)
    { 
        // This pos needs to be updated
        st[pos] += (end - start + 1) * lazy[pos];    // Update it
        if(start != end)
        {
            lazy[pos*2+1] += lazy[pos];                  // Mark child as lazy
            lazy[pos*2+2] += lazy[pos];                // Mark child as lazy
        }
        lazy[pos] = 0;                                  // Reset it
    }
    // out of range
    if (l>end || r<start)
        return ;

    // Current pos is a leaf pos
    if(start >= l and end <= r)
    {
        // Segment is fully within range
        st[pos] += (end - start + 1) * val;
        if(start != end)
        {
            // Not leaf pos
            lazy[pos*2+2] += val;
            lazy[pos*2+1] += val;
        }
        return;
    }

    // If not a leaf pos, recur for children.
    ll mid = (start + end) / 2;
    update( start, mid, l, r, val, pos*2+1);
    update( mid + 1, end, l, r, val, pos*2 + 2);

    // Use the result of children calls to update this pos
    st[pos] = st[pos*2+1] + st[pos*2+2];
}
int main(){
	
	ll t;
	cin>>t;
	while(t--){
		for(ll i=0;i<450000;i++)
		{
			lazy[i]=0;
			st[i]=0;
}
		ll n,c,key,p,q,v;
		cin>>n>>c;
		for(ll i=0;i<c;i++){
			cin>>key;
			if(key==0){
				cin>>p>>q>>v;
				update(0,n-1,p-1,q-1,v,0);
			}
			else{
				cin>>p>>q;
				cout<<getvalinrange(0,n-1,p-1,q-1,0)<<"\n";
			}
		}
	}
return 0;	
}
