#include <iostream>
#include <algorithm> 
#include <cmath> 
#include<vector>
#include<queue>
#include<map>
#include<set>
#define MAX 9

typedef long long ll;
const ll mod = 1e9+7;
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

ll n;
cin>>n;
ll arr[n],total=0;
for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%n!=0)
			total+=(arr[i]%n);
	}
if(total%n==0)
	cout<<"YES"<<"\n";
else
	cout<<"NO"<<"\n";
	}
	return 0;
}

