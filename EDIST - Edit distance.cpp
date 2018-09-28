#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<string.h>
#include <bits/stdc++.h>
#include<cmath>
#define MAX 10
using namespace std;
//DP                               Standard algo for Edit Distance -  Dynamic Programming 
 int arr[2100][2100];
int main(){
 int t;
 cin>>t;
 while (t--){
 char a[2100],b[2100]; 
 cin>>a;
 cin>>b;
 for(int i=strlen(a)+1;i>=0;i--)
 		arr[strlen(b)+1][i] = strlen(a)-i+1;
for(int i=strlen(b)+1;i>=0;i--)
 		arr[i][strlen(a)+1] = strlen(b)-i+1;
 for(int i=strlen(a);i>=0;i--){
 	for(int j=strlen(b);j>=0;j--){
 		if(a[i]==b[j])
		 	arr[j][i]=arr[j+1][i+1];
		else
			arr[j][i]=1+ min(min(arr[j+1][i],arr[j][i+1]),arr[j+1][i+1]);	
	 }
 }
 /*cout<<"\n\n";	
 for(int i=0;i<=strlen(a);i++){
 	for(int j=0;j<=strlen(b);j++){
 		cout<<arr[i][j]<<" ";
	 }
	 cout<<"\n";
 }	*/
 cout<<arr[0][0]<<"\n";
 }
 
return 0;	
}

