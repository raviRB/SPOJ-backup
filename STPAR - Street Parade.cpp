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
 int n;
 cin>>n;
 while(n!=0){
 	stack <long long int> s;
 	long long int a[n],arr[n];
 	int number =1,ari=0,i;
 	for(int i=0;i<n;i++)
 		cin>>arr[i];
 	for(int i=0;i<n;i++)
 	{
 		if(arr[i]==number){
 			a[ari]=arr[i];
 			number++;
 			ari++;
		 }
 		else if(!s.empty()){
 			if(s.top()==number){
 				a[ari]=s.top();
 				s.pop();
 				ari++;
 				number++;
 				i--;
			 }
			 else
				s.push(arr[i]);
		 }
		 else
			s.push(arr[i]);
	 }
	 while(!s.empty()){
	 	a[ari]=s.top();
 		s.pop();
 		ari++;
	 }
	 for( i=0;i<n;i++)
 		{
 			//cout<<a[i]<<" ";
 			if(a[i]!=i+1)
 				break;
		 }
		 if(i==n)
		 	cout<<"yes\n";
		else
			cout<<"no\n";
 	cin>>n;
 }
return 0;	
}

