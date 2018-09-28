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
		int num;
		int a[8];
		for(int i=0;i<8;i++)
			a[i]=0;
		cin>>num;
		char arr[50];
		cin>>arr;
		for(int i=0;i<strlen(arr)-2;i++)
		{
			if(arr[i]=='T'){
				if(arr[i+1]=='T'){
					if(arr[i+2]=='T'){
						a[0]++;
					}
					else{
						a[1]++;
					}
				}
				else{
					if(arr[i+2]=='T'){
						a[2]++;
					}
					else{
						a[3]++;
					}
				}
			}
			else{
				if(arr[i+1]=='H'){
					if(arr[i+2]=='H'){
						a[7]++;
					}
					else{
						a[6]++;
					}
				}
				else{
					if(arr[i+2]=='H'){
						a[5]++;
					}
					else{
						a[4]++;
					}
				}
			}
		}
		cout<<num<<" ";
		for(int i=0;i<8;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
return 0;	
}

