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
	int n;
	cin>>n;
	ll result ;
	while(n--){
		double m,result=1;
		cin>>m;
		for(double i=2;i<=m;i++)
			result*=i;
		cout<<result<<"\n";
	}
	return 0;
}

