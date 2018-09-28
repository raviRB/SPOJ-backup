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
	ll n=0;
	cin>>n;
	while(n!=-1)
	{	ll extra=0,candy=0;
		int arr[n];
		ll total=0;
		for(int i=0;i<n;i++)
			{
				cin>>arr[i];
				total+=arr[i];		
			}
		if(total%n!=0)
			cout<<"-1\n";
		else{
			candy = total/n;
			for(int i=0;i<n;i++)
			{
				if(arr[i]>candy)
						extra+=(arr[i]-candy);	
			}
			cout<<extra<<"\n";
		}	
		cin>>n;
	}
	return 0;
}

