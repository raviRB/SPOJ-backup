#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<math.h>
#define MAX 10
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[n],b[n],c[n],d[n];
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	map <int,int> m;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			m[c[i]+d[j]]++;
		}
	int count=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if(m.find(-(a[i]+b[j]))!=m.end())
				count+=m[-(a[i]+b[j])];
		}
	cout<<count<<"\n";
		
return 0;
}

