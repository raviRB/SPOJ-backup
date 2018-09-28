#include <bits/stdc++.h>
#define MAX 10
#define mod 1000007
using namespace std;  
int main(){
	int n,temp;
	cin>>n;
	vector <int> arr;
	for(int i=0;i<n;i++)
		{
			cin>>temp;
			arr.push_back(temp);
		}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<lower_bound(arr.begin(),arr.end(),3)-arr.begin()<<"\n";
	cout<<upper_bound(arr.begin(),arr.end(),3)-arr.begin()<<"\n";
return 0;	
}
