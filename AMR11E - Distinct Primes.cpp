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
int calc(int num){
	int arr[100000]={0},div =2,count=0;
	while(num!=1){
		cout<<num<<"  "<<div<<" inloop\n";
		if(num%div==0)
		{
			num/=div;
			if(arr[div]==0){
				arr[div]++;
				count++;
				div=2;
			}
		
		}
		else
			div++;
	}
	if(count>=3)
		return 0;
	else
		return 1;
		
}
int main(){
	int t;
	cin>>t;
	int arr[1000],count=2,num=43;
	arr[0]=30;
	arr[1]=42;
	while(count<1000)
	{
		cout<<count<<"  count   "<<num<<"\n";
		if(calc(num)==0)
		{
			arr[count]=num;
			count++;
		}
		num++;
	}
	while(t--){
		int n;
		cin>>n;
		cout<<arr[n-1]<<"\n";
		
	}
return 0;
}

