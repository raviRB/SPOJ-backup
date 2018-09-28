#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define MAX 10
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int res=1,carry=0,num;
	long long int arr[500];
	arr[0]=1;
	for(int i=2;i<=n;i++){
		carry=0;
	for(int j=0;j<res;j++){
		num = arr[j]*i + carry;
		arr[j]=num%10;
		carry = num/10;
	}
	while(carry!=0)
	{
		arr[res]=carry%10;
		carry /=10;
		res++;
		}	
	}
	for(int i=res-1;i>=0;i--){
		cout<<arr[i];
	}
	cout<<"\n";
	}
	
	return 0;
}

