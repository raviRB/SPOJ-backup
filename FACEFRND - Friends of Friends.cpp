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
	int fid[10000];
	for(int i=0;i<10000;i++)
		fid[i]=-1;
	int n,f,m,temp,count=0;
	cin>>n;
	set <int> fof;
	set <int>::iterator it;
	while(n--){
		cin>>f;
		fid[f]=0;
		cin>>m;
		for(int i=0;i<m;i++)
			{
				cin>>temp;
				fof.insert(temp);
			}
	}
	for(it = fof.begin();it!=fof.end();it++)
		if(fid[*it]!=0)
			count++;
	cout<<count<<"\n";
return 0;	
}

