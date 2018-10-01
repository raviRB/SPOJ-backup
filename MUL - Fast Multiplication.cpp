#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define ll long long 
#define MAX 8

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll arr[10000]={0},index=0,rem;
		if(a==0 || b==0){
			cout<<"0\n";
			continue;
		}
		while(b!=0)
		{
			rem = b%10;
			arr[index] =rem;
			b /=10; 
			index++;
		}
		rem =0;
		for(int i=0;i<index;i++){
			rem = rem + arr[i]*a;
			arr[i] = rem%10;
			rem/=10;
		}
		while(rem!=0){
			arr[index] = rem%10;
			rem/=10;
			index++;
		}
		for(int i=index-1;i>=0;i--){
			cout<<arr[i];
		}
		cout<<"\n";
	}
return 0;
}

