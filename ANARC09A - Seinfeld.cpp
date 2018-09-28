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
	char arr[20001];
	cin>>arr;
	int j=1;
	while(arr[0]!='-'){
		int o=0,c=0,count=0;
		stack <char> s;
	for(int i=0;i<strlen(arr);i++)
	{
		if(arr[i]=='{')
			s.push('{');
		else
			{
				if(s.empty())	
					count++;
				else
					s.pop();
			}
			
	}
	int result =0;
	if(s.size()%2!=0){
		result = s.size()/2 + count/2 + 2;
	}
	else
		result = s.size()/2 + count/2 ;

	cout<<j<<". "<<result<<"\n";
	cin>>arr;
	j++;
	}
	
return 0;	
}

