#include <bits/stdc++.h>
#define MAX 10
#define mod 1000007
#define ll long long
using namespace std; 
struct node{
	ll a;
	ll b;
};
ll arr[100001];
node tree[4*100001];
void createtree(ll start,ll end,ll pos){
	node curr ;
	if(start==end){
		tree[pos].a=arr[start];
		tree[pos].b=-1;
		return;
	}
	ll mid = (start+end)/2;
	createtree(start,mid,2*pos+1); // left sub-tree
	createtree(mid+1,end,2*pos+2); // right sub-tree
	ll temp[4];
	temp[0]=tree[2*pos+1].a ;
	temp[1]=tree[2*pos+1].b ;
	temp[2]=tree[2*pos+2].a ;
	temp[3]=tree[2*pos+2].b ;
	sort(temp,temp+4);
	tree[pos].a=temp[3];
	tree[pos].b=temp[2];
}	
node getvalinrange(ll start,ll end,ll rstart,ll rend,ll pos){  // rstart = range start
	node ans;
	ans.a = INT_MIN;
	ans.b = INT_MIN;
	if(start>=rstart && end<=rend) // Total overlap
		{
			ans.a = tree[pos].a;
			ans.b = tree[pos].b;
			return ans;
		}
	if(end<rstart || start>rend)  // No overlap
		return ans;
	ll mid = (start+end)/2;
	node left =  getvalinrange(start,mid,rstart,rend,2*pos+1);
	node right = getvalinrange(mid+1,end,rstart,rend,2*pos+2); // partital overlap
	ll temp[4];
	temp[0]=left.a ;
	temp[1]=left.b ;
	temp[2]=right.a ;
	temp[3]=right.b ;
	sort(temp,temp+4);
	ans.a=temp[3];
	ans.b=temp[2];
	return ans;
	
}
void update (ll start,ll end,ll val,ll index,ll pos){
	if(index>end || index<start) // No overlap
		return;
	if(start==end){ //  Total overlap
		tree[pos].a=val;
		tree[pos].b=-1;
		return;
	}
	ll mid = (start+end)/2;
	update(start,mid,val,index,2*pos+1); // left sub-tree
	update(mid+1,end,val,index,2*pos+2); // right sub-tree
	ll temp[4];
	temp[0]=tree[2*pos+1].a ;
	temp[1]=tree[2*pos+1].b ;
	temp[2]=tree[2*pos+2].a ;
	temp[3]=tree[2*pos+2].b ;
	sort(temp,temp+4);
	tree[pos].a=temp[3];
	tree[pos].b=temp[2];
}
int main(){
ll N, Q, x, y, i, max1, max2;
char comm[4];
	scanf("%lld", &N);
	for(i = 0; i < N; i++)
		scanf("%lld", &arr[i]);
	createtree(0,N-1,0);
	scanf("%lld", &Q);
	for(i = 0; i < Q; i++)
	{
		scanf("%s %lld %lld", comm, &x, &y);
		if(comm[0]=='U')
			update(0,N-1,y,x-1,0);
		else
		{
			node ans = getvalinrange(0,N-1,x-1,y-1,0);
			printf("%lld\n", ans.a + ans.b);
		}
	}
	return 0;	
}
