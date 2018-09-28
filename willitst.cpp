#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<math.h>
#define MAX 10
using namespace std;

int main(){
	long long int n,num=2;
	cin>>n;
	while(num<n)
	{
		num=num*2;
	}

	if(num==n)
		cout<<"TAK\n";
	else
		cout<<"NIE\n";
	
	return 0;
}

