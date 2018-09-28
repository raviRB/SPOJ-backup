#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include<cmath>
#include<vector>
#include<map>
using namespace std;

int main()
{
	vector<long long > v;
	long long i=1;
	v.push_back(0);
	v.push_back(0);
	v.push_back(i);
	v.push_back(i);
	
	i++;
	while(i*1<=sqrt(1000000000000)){
		v.push_back(i*i);
		v.push_back(i*i);
		i++;
	}
	
	int c;
	cin>>c;
	while(c--){
		long long num;
		cin>>num;
		long long left=0 ,right=v.size()-1;
		int flag=0;
		while(right>left){
		//cout<<right<<" "<<left<<v[left]+v[right]<<"\n";
		if((v[left]+v[right])==num)
		{
			flag=1;
			break;
		}
		if((v[left]+v[right])>num)
			right--;
		else
			left++;
		}
		if(flag==0)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
}

