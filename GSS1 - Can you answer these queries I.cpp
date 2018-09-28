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
#define mod 1000007
using namespace std;  
struct node
{
   int sum,prefixsum;
   int suffixsum,maxsum;
};
node tree[4*50010];
int arr[50010];
void createtree(int start,int end,int pos){
	   if(start == end)
   {
      tree[pos].sum = arr[start];
      tree[pos].prefixsum = arr[start];
      tree[pos].suffixsum = arr[start];
      tree[pos].maxsum = arr[start];
   }
   else
   {
      int mid = (start+end)/2;
      createtree(start,mid,2*pos+1);
      createtree(mid+1,end,2*pos+2);
      
	      tree[pos].sum = 
         tree[2*pos+1].sum + tree[2*pos+2].sum;
      tree[pos].prefixsum = 
         max(tree[2*pos+1].prefixsum,
            tree[2*pos+1].sum + tree[2*pos+2].prefixsum);
      tree[pos].suffixsum = 
         max(tree[2*pos+2].suffixsum,
            tree[2*pos+2].sum + tree[2*pos+1].suffixsum);   
      tree[pos].maxsum = 
         max(tree[pos].prefixsum,
            max(tree[pos].suffixsum,
               max(tree[2*pos+1].maxsum,
                  max(tree[2*pos+2].maxsum,
                     tree[2*pos+1].suffixsum
                        +tree[2*pos+2].prefixsum
                     )
                  )
               )
            );
}
}

node query(int start, int end , int l , int r, int pos){
	   node result;
   result.sum=result.prefixsum=INT_MIN;
   result.suffixsum=result.maxsum=INT_MIN;
   
   if(r<start || end<l)
      return result;
   if(l<=start && end<=r)   
      return tree[pos];
   
   int mid = (start+end)/2;
   if (l > mid)
         return query( mid+1, end, l, r,2*pos+2);
   if (r <= mid)
         return query(start, mid, l, r,2*pos+1);
   
   node left = query(start, mid, l, r,2*pos+1);
   node right = query( mid+1, end, l, r,2*pos+2);
   
   result.sum = left.sum + right.sum;
   result.prefixsum = 
      max(left.prefixsum, left.sum + right.prefixsum);
   result.suffixsum = 
      max(right.suffixsum, right.sum + left.suffixsum);
   result.maxsum = 
      max(result.prefixsum, 
         max(result.suffixsum, 
            max(left.maxsum, 
               max(right.maxsum,
                  left.suffixsum + right.prefixsum))));
   return result;            
}


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	createtree(0,n-1,0);
	int m,xi,yi;
	cin>>m;
	node val;
	for(int i=0;i<m;i++){
		cin>>xi>>yi;
		val = query(0,n-1,xi-1,yi-1,0);
		cout<<val.maxsum<<"\n";
	}
	
return 0;	
}
