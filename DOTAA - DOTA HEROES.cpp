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
		int n,m,d,temp,towerhandle=0,temp1;
		cin>>n>>m>>d;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			temp1 = temp/d;
			if(temp1*d<temp)
				towerhandle+=temp1;
			else 
				towerhandle+=(temp1-1);
		}
		//cout<<towerhandle<<"\n";
		if(towerhandle>=m)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
return 0;	
}

