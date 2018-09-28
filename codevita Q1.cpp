#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<string.h>
#include<set>
#define MAX 201
using namespace std;
int main(){
	int n;
	cin>>n;
	float arr[n];
	float sum=0;
	for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
	if(n>2){
	//cout<<sum<<"\n";
	float s = sum/n;
	//cout<<s<<"\n";
	int count=0,count2=0;
	for(int i=0;i<n;i++)
		{
			if(arr[i]>s){
			count++;
		}
		if(arr[i]==s){
			count2++;
		}
		}
	if(count%2==0)
		cout<<n-count2<<"\n";
	else
		cout<<n-1-count2<<"\n";
	}
	else
		cout<<"0\n";
return 0;
}
