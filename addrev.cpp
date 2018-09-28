#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define MAX 10
#define ll long long int
using namespace std;
ll reversenum(ll num){
	ll val=0;
	while(num%10==0)
		num/=10;
	while(num!=0)
	{
		val=val*10+num%10;
		num/=10;
	}
	return val;
}
int main(){
	int n;
	cin>>n;
	ll result ;
	while(n--){
		ll b,c;
		cin>>b>>c;
		b=reversenum(b);
		c = reversenum(c);
		result = b+c;
		result = reversenum(result);
		cout<<result<<"\n";
	}
	return 0;
}

