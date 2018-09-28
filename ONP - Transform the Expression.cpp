#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<cmath>
#include <boost/multiprecision/cpp_int.hpp>
#include<stack>
#define MAX 10
#define mod 1000007
using namespace std;
using boost::multiprecision::cpp_int;

int main(){
	int t;
	cin>>t;
	while(t--){
		stack <char> s;
		char arr[500];
		cin>>arr;
		for(int i=0;i<strlen(arr);i++){
			if(arr[i]>='a' && arr[i]<='z')
				cout<<arr[i];
			else{
				if(s.empty())
					s.push(arr[i]);
				else{
					if(arr[i]=='(')
						s.push(arr[i]);
					else if(arr[i]==')'){
						while(s.top()!='('){
							cout<<s.top();
							s.pop();
						}
						s.pop();
					}
					else if(arr[i]=='^'){
						s.push(arr[i]);
					}
					else if(arr[i]=='/'){
						while(!s.empty() && !(s.top()=='^') && !(s.top()=='(')){
							cout<<s.top();
							s.pop();
						}
						s.push(arr[i]);
					}
					else if(arr[i]=='*'){
						while(!s.empty() && !(s.top()=='^')&& !(s.top()=='/') && !(s.top()=='(')){
							cout<<s.top();
							s.pop();
						}
						s.push(arr[i]);
					}
					else if(arr[i]=='-'){
						while(!s.empty() && !(s.top()=='^')&& !(s.top()=='/')&& !(s.top()=='*') && !(s.top()=='(')){
							cout<<s.top();
							s.pop();
						}
						s.push(arr[i]);
					}
					else{
						while(!s.empty() && !(s.top()=='(')){
							cout<<s.top();
							s.pop();
						}
						s.push(arr[i]);
					}
				}
			}
		}
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	cout<<"\n";	
	}
	
return 0;	
}

