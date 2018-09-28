#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<cmath>
#define MAX 10
using namespace std;

int main(){
 float t;
 cin>>t;
 for(int j=1;j<=t;j++){
 	long long int total , f;
 	cin>>total>>f;
 	long long int arr[f],totalf=0;
 	for(int i=0;i<f;i++)
 	{
 		cin>>arr[i];
 		totalf+=arr[i];
	 }
	cout<<"Scenario #"<<j<<":\n";
	if(totalf<total)
		cout<<"impossible"<<"\n\n";
	else{
		totalf=0;
		sort(arr,arr+f,greater<long long int>());
		long long int count =0;
		while(totalf<total){
			totalf+=arr[count];
			count++;
		}
		cout<<count<<"\n\n";
	}
 }
return 0;	
}

