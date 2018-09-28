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
int main(){
	int n;
	cin>>n;
	while(n!=0){
		long long int arr[n],small=INT_MAX,high=INT_MIN;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			small = min(small,arr[i]);
			high = max(high,arr[i]);
		}
		int tcount=0,th=0;
		for(int i=small;i<=high;i++){
			//cout<<"in\n";
			int count =0,tempc=0;
			for(int j=0;j<n;j++){
				if(arr[j]>=i)
					tempc++;
				else{
					count = max(count,tempc);
					tempc=0;
				}
			}
			count = max(count,tempc);
			if(tcount*th<count*i)
			{
				tcount = count;
				th = i;
				}	
		}
		cout<<tcount*th<<"\n";
		cin>>n;
	}
return 0;	
}

