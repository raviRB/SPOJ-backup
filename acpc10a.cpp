#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<math.h>
#define MAX 10
#define ll long long int
using namespace std;
int main(){
	ll a,b,c;
	cin>>a>>b>>c;
	while(a!=0 || b!=0 || c!=0){
		if(b-a==c-b)
			cout<<"AP "<<c+(c-b)<<"\n";
		else
			{
				if(a==0 || b==0 || c==0 )
					cout<<"GP "<<"0"<<"\n";
				else
					cout<<"GP "<<c*(c/b)<<"\n";
			}
		cin>>a>>b>>c;
	}
	return 0;
}

