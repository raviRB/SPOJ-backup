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
	int n;
	cin>>n;
	ll result ;
	while(n--){
		int x,y;
		cin>>x>>y;
		if(x==y){
			if(x%2==0)
				cout<<x+y<<"\n";
			else
				cout<<x+y-1<<"\n";
		}
		else if(x-y==2){
		if(x%2==0 && y%2==0)
			cout<<x+y<<"\n";
		else if(x%2!=0 && y%2!=0)
			cout<<x+y-1<<"\n";
		else
			cout<<"No Number"<<"\n";
		}
		else{
			cout<<"No Number"<<"\n";
		}
	}
	return 0;
}

