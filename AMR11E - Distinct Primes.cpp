#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<math.h>
#define MAX 10
using namespace std;

int main(){
	int n=50000;
	int arr[n+1];
	int index,num;
	for(int i=0;i<=n;i++)
		arr[i]=0;
	for(int i=2;i<=n/2;i++){
		num =i;
		index =2;
		while(num*index<=n){
			arr[num*index]=1;
			index++;
		}
	}
	vector <int> prime;
	
	for(int i=2;i<=n;i++)
		if(arr[i]==0)
			prime.push_back(i);
			
	vector <int> v;
	int value,j;
	for(int i=0;i<prime.size()-2;i++){
		j=i+1;
		for(int z=j+1;z<prime.size();z++)
			v.push_back(prime[i]*prime[j]*prime[z]);
	}
	sort(v.begin(),v.end());
	cout<<v.size()<<"\n";
	int t;
	cin>>t;
	while(t--){
		int pos;
		cin>>pos;
		cout<<v[pos-1]<<"\n";
	}
	
	
	
	
	
return 0;
}

