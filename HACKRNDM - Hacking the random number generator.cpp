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
int binary_se(int* arr,int i,int low,int high){
	if(high>=low){
		int mid = (low+high)/2;
		if(arr[mid]==i)
			return 1;
		else if(arr[mid]>i)
			return binary_se(arr,i,low,mid-1);
		else
			return binary_se(arr,i,mid+1,high);
	}
	else
		return 0;
	
}
int main(){
	 // sorting + binary search
	 int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	int count=0;
	for(int i=0;i<n;i++){
		if(abs(k-arr[i])==arr[i])
			continue;
		if(binary_se(arr,abs(k-arr[i]),0,n-1)==1)
			count++;
	}
	cout<<count;
	
	return 0;
}


/*
	Sorting + o(n^2) - Worst case
int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	int count=0,j;
	for(int i=0;i<n-1;i++){
		j=i+1;
		while(j<n && abs(arr[j]-arr[i])<k)
			j++;
		if(abs(arr[j]-arr[i])==k)
			count++;

	}
	cout<<count<<"\n";
	
	*/
