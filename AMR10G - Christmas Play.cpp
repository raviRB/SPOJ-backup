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
	int t;
	cin>>t;
	while(t--){
		long long int n,k;
		cin>>n>>k;
		long long int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		/*for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";*/
		long long int diff = 1000000001;
		for(int i=0;i<n;i++)
		{
			//cout<<diff<<"\n";
			if(i+k<=n)
			{
			//	cout<<i<<" "<<k<<"\n";
				if(arr[i+k-1]-arr[i]<diff)
					diff = arr[i+k-1]-arr[i];
			}
			else
				break;
		}
		cout<<diff<<"\n";
	}
return 0;	
}

