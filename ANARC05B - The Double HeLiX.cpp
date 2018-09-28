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
	int n;
	cin>>n;
	while(n!=0)
	{
		int f[n],m,dupf[n];
		for(int i=0;i<n;i++)
			{
				cin>>f[i];
				dupf[i]=0;
			}
			
		cin>>m;
		int s[m],dups[m];
		for(int i=0;i<m;i++)
			{
				cin>>s[i];
				dups[i]=0;
			}
		
		int j=0,i=0;
		for( i=0;i<n;i++){
			while(j<m && f[i]>s[j]){
				j++;
			}	
			if(j<m && f[i]==s[j]){
				dupf[i]=1;
				dups[j]=1;
				j++;
			}
		}
		i=0,j=0;
		int pre=0,pre1=0;
		long long int sum=0;
		while(i<n || j<m){
			pre=0,pre1=0;
			while(i<n && dupf[i]!=1)
				{
					pre+=f[i];
					i++;
				}
			while(j<m && dups[j]!=1)
				{
					pre1+=s[j];
					j++;
				}
			if(dupf[i]==1 && dups[j]==1)
				{
					pre+=f[i];
					pre1+=s[j];
				}
			sum+=max(pre,pre1);
			i++,j++;
			//cout<<sum<<"\n";
		}
		cout<<sum<<"\n";
		cin>>n;
		
	}
return 0;	
}

