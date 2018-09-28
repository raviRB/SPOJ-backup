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
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int sum =0,temp=0,begin=0;
	for(int i=0;i<n;i++){
		if((temp+arr[i])<=m)
			temp+=arr[i];
		else
			{
				temp-=arr[begin];
				begin++;
				i--;
			}
		if(temp>sum)
			sum=temp;
	}
	cout<<sum;
return 0;	
}

