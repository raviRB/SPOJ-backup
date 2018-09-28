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
using namespace std;    // DP - lcs
int ar[6110][6110];
int main(){
	int t;
	cin>>t;
	while(t--){
		char arr[6110],a[6110];
		int j=0;
		cin>>arr;
		int l = strlen(arr);
		for(int i = l-1;i>=0;i--,j++)
			a[j]=arr[i];
		for(int i =0;i<=l;i++){
			ar[l][i]=0;
			ar[i][l]=0;
		}
		for(int i = l-1;i>=0;i--){
			for(int j = l-1;j>=0;j--){
				if(arr[i]==a[j])
					ar[j][i]=1+ar[j+1][i+1];
				else
					ar[j][i]=max(max(ar[j+1][i],ar[j][i+1]),ar[j+1][i+1]);
			}
		}
		if(ar[0][0]==1)
			cout<<l-1<<"\n";
		else
			cout<<l-ar[0][0]<<"\n";

	}
return 0;	
}

