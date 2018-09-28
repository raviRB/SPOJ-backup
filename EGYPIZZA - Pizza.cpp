#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include<map>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	float arr[n];
	int count =1;
	float val,a,b ;
	getline(cin,s);
	for(int i=0;i<n;i++){
		getline(cin,s);
		a = s[0]-48;
		b = s[2]-48;
		val = a/b;
		arr[i]=val;
	}
	int quater =0,half=0,thrfor =0;
	for(int i=0;i<n;i++){
		if(arr[i]==0.25)
			quater++;
		else if(arr[i]==0.50)
			half++;
		else
			thrfor++;
	}
	//cout<<quater<<" "<<half<<" "<<thrfor<<" ";
	int spare =0;
	spare+=thrfor;
	count+=thrfor;
	if(half%2==0)
	{
		count+=(half/2);
	}
	else{
		count+=(half/2);
		count++;
		spare+=2;
	}
	if(quater>spare){
		quater-=spare;
		if(quater%4==0)
			count+=(quater/4);
		else{
			count+=(quater/4);
			count++;
		}
	}
	cout<<count<<"\n";
//	for(it=m.begin();it!=m.end();it++)
//		cout<<it->first<<" "<<it->second<<"\n";
}


