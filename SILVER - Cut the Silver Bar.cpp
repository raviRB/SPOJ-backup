#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0){
		int num =2,count=1;
		while(num<n)
			{
				num*=2;
				count++;
			}
		if(num==n)
			cout<<count<<"\n";
		else
			cout<<count-1<<"\n";
		cin>>n;
	}
	return 0;
}
