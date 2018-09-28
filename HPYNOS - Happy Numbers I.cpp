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
	long long int n;
	cin>>n;
	set <long long int> s;
	int flag =0;
	while(n!=1){
		long long int number =0,rem;
		while(n!=0){
			rem = n%10;
			n=n/10;
			number +=(rem*rem); 
			//cout<<number<<"\n";
		}
		n=number;
		if(!s.empty()){
			//cout<<"s is not empty\n";
			if(s.find(number)==s.end())
			s.insert(number);
		else{
			n=1;
			cout<<"-1\n";
			flag=1;
		}
		}
		else
			s.insert(number);
	}
	if(flag!=1){
		cout<<s.size()<<"\n";
	}
return 0;	
}

