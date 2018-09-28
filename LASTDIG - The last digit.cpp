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
		long long int a,b;
		cin>>a>>b;
		if(a==0 && b==0)
			cout<<"1\n";
		else if(b==0)
			cout<<"1\n";
		else if(a==0)
			cout<<"0\n";
		else{
			int arr[4];
		arr[0]=a%10;
		arr[1]=(a*a)%10;
		arr[2]=(a*a*a)%10;
		arr[3]=(a*a*a*a)%10;
		int rem = b%4;
		if(rem==0)
			rem=4;
		cout<<arr[rem-1]<<"\n";
		}
	
	}
return 0;	
}

