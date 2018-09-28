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
	long long int arr[1000001],n;
	arr[1]=2;
	for(int i=2;i<1000001;i++)
		arr[i]=(arr[i-1]%mod+(2*(i%mod))%mod+i-1)%mod;
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<arr[n]<<"\n";
	}
	
	
			//      OR 
	
	
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int result  =  (n*(n+1) + (n-1)*n/2 )%mod;
		cout<<result<<"\n";
	}
	
return 0;	
}

