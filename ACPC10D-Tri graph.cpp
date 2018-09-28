#include <bits/stdc++.h>
#define MAX 10
using namespace std;

int main(){
 int rows,count=1;
 cin>>rows;
 while(rows!=0){
 	long long  arr[rows+1][3];
	long long dp[rows+1][3];
 	for(int i=1;i<=rows;i++)
 		for(int j=0;j<3;j++)
 			cin>>arr[i][j];
 	arr[2][0]=arr[2][0]+arr[1][1];
	arr[2][1]=arr[2][1]+min(arr[1][1],min(arr[2][0]+arr[1][1],arr[2][1]+arr[1][2]));
	arr[2][2]=arr[2][2]+min(arr[1][1],min(arr[2][1]+arr[1][3],arr[2][1]+arr[1][1]));
 	for(int i=3;i<=rows;i++)
 	{
 		arr[i][0]=arr[i][0]+min(arr[i-1][0],min(arr[i-1][1],arr[i-1][0]+arr[i-1][1]));
		 arr[i][1]=arr[i][1]+min(arr[i-1][0],min(arr[i-1][1],min(arr[i-1][2],min(arr[i][0]+arr[i-1][0],min(arr[i-1][0]+arr[i-1][1],arr[i-1][1]+arr[i][1])))));
		 arr[i][2]=arr[i][2]+min(arr[i-1][2],min(arr[i-1][1],min(arr[i-1][1]+arr[i-1][2],arr[i-1][1]+arr[i][1])));
	}
	cout<<count<<". "<<arr[rows][1]<<"\n";
	count++;
 	cin>>rows;
 }
return 0;	
}

