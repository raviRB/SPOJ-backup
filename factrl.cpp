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
		ll b,result=0,i=1,num;
		cin>>b;
		do{
		num=pow(5,i);
		result+=b/num;
		i++;
		}while(num<=b);
		
		cout<<result<<"\n";
	}
	return 0;
}

