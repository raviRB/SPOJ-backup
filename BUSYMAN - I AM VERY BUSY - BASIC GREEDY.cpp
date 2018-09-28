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
	while(n--)
	{
		int a,st,e;
		cin>>a;
		set < pair< int,int > > s; //  pair pf jobs sorted with end time 
		set < pair<int,int> >::iterator it;
		for(int i=0;i<a;i++)
		{
			cin>>st>>e;
			s.insert(make_pair(e,st));
		}
		int count=0,preend=-1,start,end;
		for(it=s.begin();it!=s.end();it++)
			{
				start= it->second;
				end = it->first;
				if(start>=preend)
				{
					count++;
					preend = end;
				}
			}
		cout<<count<<"\n";
		
}
return 0;	
}

