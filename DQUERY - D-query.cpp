#include <bits/stdc++.h>
#define MAX 10
#define mod 1000007
using namespace std;     ///                MO's    ALGO implementation
int block;
struct Query
{
    int L, R,index;
};
bool compare(Query x, Query y)
{
    // Different blocks, sort by block.
    if (x.L/block != y.L/block)
        return x.L/block < y.L/block;
 
    // Same block, sort by R value
    return x.R < y.R;
}
int main(){
	int n;
	Query curr;
	cin>>n;
	block = (int)sqrt(n);
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int q;
	cin>>q;
	vector<Query> qu;
	int a,b;
	for(int i=0;i<q;i++)
	{
	//	cout<<"enter value   ";
		cin>>a>>b;
		curr.L=a-1;
		curr.R=b-1;
		curr.index=i;
		qu.push_back(curr);
	}
	sort(qu.begin(),qu.end(),compare);
	
	int temp[1000001]={0},currL=0,currR=0,l,r,count=0,ans[q];
	for(vector<Query>::iterator it=qu.begin();it!=qu.end();it++){
		l = it->L;
		r = it->R;
		while(currL<l){
			temp[arr[currL]]--;
			if(temp[arr[currL]]==0)
				count--;
			currL++;
		}
		while(currR<=r){
			
			temp[arr[currR]]++;
			if(temp[arr[currR]]==1)
				count++;
			currR++;
		
		}
		while(currL>l){
			currL--;
			temp[arr[currL]]++;
			if(temp[arr[currL]]==1)
				count++;
		}
		while(currR>r+1){
			temp[arr[currR-1]]--;
			if(temp[arr[currR-1]]==0)
				count--;
			currR--;
		}
		ans[it->index]=count;
		
	}
	for(int i=0;i<q;i++)
		cout<<ans[i]<<"\n";
	
	
return 0;	
}
