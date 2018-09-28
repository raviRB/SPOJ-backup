#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<cmath>
#define MAX 10
using namespace std;

int main(){
 float t;
 cin>>t;
 while(t!=0.00){
 	//cout<<"inside 1st\n";
 	float sum=0.5,val;
 	long long int count =1;
 	float div = 2;
 	while(sum<=t){
 	//	cout<<"inside 1st\n";
 		div++;
 		val = 1/div;
 		sum = sum + val;
 		count++;
	 }
 	cout<<count<<" card(s)"<<"\n";	
 	cin>>t;
 }
return 0;	
}

