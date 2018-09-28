#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<math.h>
#define MAX 10
#define ll long long int 
#define rep(i,j) for(int i=2;i<j;i++)
using namespace std;
int main(){
	int t,i;
	cin>>t;
	long long int arr[1000001],pre=1;
	arr[1]=1;
	rep(i,1000001){
		pre +=2;
		arr[i]=arr[i-1]+pre;
	}
	while(t--){
		int num;
		cin>>num;
		cout<<arr[num]<<"\n";
	}
	return 0;
}

