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
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
 	int ng,nm;
 	cin>>ng>>nm;
 	int g[ng],m[nm];
 	for(int i=0;i<ng;i++)
 		cin>>g[i];
 	for(int i=0;i<nm;i++)
 		cin>>m[i];
 	sort(g,g+ng);
 	sort(m,m+nm);
 	int ngcount=0,nmcount=0;
 	while(ngcount!=ng && nmcount!=nm){
 		if(g[ngcount]==m[nmcount] || g[ngcount]>m[nmcount])
 			nmcount++;
 		else
 			ngcount++;
	 }
	if(ngcount==ng)
	 	cout<<"MechaGodzilla\n";
	else
		cout<<"Godzilla\n";
 }
return 0;	
}

