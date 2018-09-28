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
	int a,d;
	cin>>a>>d;
	while(!(a==0 && d==0)){
		int ar[a],dr[d];
		for(int i=0;i<a;i++)
			cin>>ar[i];
		for(int i=0;i<d;i++)
			cin>>dr[i];
		sort(ar,ar+a);
		sort(dr,dr+d);
		if(ar[0]>=dr[0] && ar[0]>=dr[1])
			cout<<"N\n";
		else
			cout<<"Y\n";
		cin>>a>>d;
	}
return 0;	
}

