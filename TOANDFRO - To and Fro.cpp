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
	int col;
	cin>>col;
	while(col!=0){
		char arr[1000];
		cin>>arr;
		float length = strlen(arr);
		int row = ceil(length/col);
		char ar[row][col];
		int flag=0,r=0,i=0;
		while(i<length){
			if(flag==0){
				for(int j=0;j<col;j++)
				{
					ar[r][j]=arr[i];
					i++;
				}
				flag=1;
				r++;
			}
			if(flag==1){
				for(int j=col-1;j>=0;j--)
				{
					ar[r][j]=arr[i];
					i++;
				}
				flag=0;
				r++;
			}
		}
		for(int i=0;i<col;i++)
			for(int j=0;j<row;j++)
				cout<<ar[j][i];
		
		cout<<"\n";
		cin>>col;
		
	}
return 0;	
}

