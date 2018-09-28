#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<stack>
#define MAX 10
#define ll long long 
using namespace std;
		
int main(){
	int t;
	cin>>t;
	while(t--){
	ll b,temp =0,flag=0;;
	char a[1100];
	cin>>a;
	cin>>b;
	int arr[4];
	
	int a1 = a[strlen(a)-1]-48;
	
	for(int i=0;i<4;i++){
		arr[i] = pow(a1,i+1);
		arr[i]=arr[i]%10;
	}
	
	temp = b%4;
	
	if(b==0)
		cout<<"1\n";
	else if(a1==0)
		cout<<"0\n";
	else{
		if(temp==0)
			cout<<arr[3]<<"\n";
		else
			cout<<arr[temp-1]<<"\n";
	}	
	}
return 0;	
}

