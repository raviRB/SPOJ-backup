#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
#include<stack>
#define MAX 10
#define ll long long 
using namespace std;
		
int main(){
	int t;
	cin>>t;
	while(t--){
	ll total=0,num,num1;
	char ch;
	cin>>total;
	cin>>ch;
	while(ch!='='){
		cin>>num;
		switch(ch){
			case '+':
				total = total + num;
				break;
			case '-':
				total = total - num;
				break;
			case '*':
				total = total * num;
				break;
			case '/':
				total = total / num;
				break;
		}
	cin>>ch;
	}
	cout<<total<<"\n";
	
	
	
	}
return 0;	
}

