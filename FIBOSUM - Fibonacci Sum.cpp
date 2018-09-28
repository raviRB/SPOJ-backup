#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include<cmath>
#include<vector>
#include<map>
#define ll long long
#define mod 1000000007
using namespace std;
void multiply(ll F[2][2], ll M[2][2]){
	ll a,b,c,d;
	a = (((F[0][0]%mod)*(M[0][0]%mod))%mod+((F[0][1]%mod)*(M[1][0]%mod)%mod)%mod)%mod;
	b = (((F[0][0]%mod)*(M[0][1]%mod))%mod+((F[0][1]%mod)*(M[1][1]%mod)%mod)%mod)%mod;
	c = (((F[1][0]%mod)*(M[0][0]%mod))%mod+((F[1][1]%mod)*(M[1][0]%mod)%mod)%mod)%mod;
	d = (((F[1][0]%mod)*(M[0][1]%mod))%mod+((F[1][1]%mod)*(M[1][1]%mod)%mod)%mod)%mod;
	
	
	F[0][0]=a;
	F[0][1]=b;
	F[1][0]=c;
	F[1][1]=d;
}
void power(long long F[2][2], long long n){
	if(n==0 || n==1)
		return ;
	long long M[2][2]={{1,1},{1,0}};
	power(F,n/2);
	multiply(F,F);
	if(n%2!=0)
		multiply(F,M);
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long  n,m;
		cin>>n>>m;
	long long F[2][2]={{1,1},{1,0}},f[2][2]={{1,1},{1,0}};
	power(F,n-1+1);
	long long result = F[0][0]-1;
	power(f,m-1+2);
	long long result1 = f[0][0]-1;
	if(n==0)
		result=0;
	if(m==0)
		result1=0;	
	
	if(result1>=result)
		cout<<(result1-result)%mod<<"\n";
	else
		cout<<(result1-result+mod)%mod<<"\n";
	}
return 0;
}

