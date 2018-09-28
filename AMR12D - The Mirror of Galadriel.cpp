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
	scanf("%d",&t);
	while(t--){
		char arr[100];
		cin>>arr;
		int i=0,j=strlen(arr)-1,flag=0;
		while(j>i)
			{
				if(arr[i]!=arr[j]){
				flag=1;
				break;
			}
			i++;
			j--;
			}
		if(flag==1)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
return 0;	
}

