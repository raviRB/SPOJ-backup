#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int main(){
	int arr[10];
	for(int i=0;i<10;i++)
		cin>>arr[i];
	int sum=0,diff=100;
	for(int i=0;i<10;i++)
	{
		if(abs(sum+arr[i]-100)<=diff)
			sum+=arr[i];
		else
			break;
		diff = abs(sum-100);
		//cout<<diff<<" diff \n";
	}
	cout<<sum;
	return 0;
}
