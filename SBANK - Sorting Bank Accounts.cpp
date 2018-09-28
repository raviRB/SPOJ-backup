#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;
string a[100002];
int main()
{
	int t,n,k,i,j,b,c;
	cin>>t;
	for(k=1;k<=t;++k)
	{
		cin>>n;
		for(i=0;i<=n;++i)
			getline(cin,a[i]);
		sort(a+1,a+n+1);
		b=1;
		for(i=1;i<=n;i++)
			if(a[i]==a[i+1])
				++b;
			else
			{
				cout<<a[i]<<" "<<b<<endl;
				b=1;
			}
	}
}


