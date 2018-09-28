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
int arr[1000001];
int main(){
	int t;
	cin>>t;
	int numbers=1;
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=1000000;i++)
	{
		numbers=1;
		for(int j=2;j<=i;j++)
		{
			if(__gcd(j,i)==1)
				numbers++;
		
		}
		arr[i]=numbers;
	}
	while(t--){
		int n;
		cin>>n;
		cout<<arr[n]<<"\n";
	}
return 0;	
}

