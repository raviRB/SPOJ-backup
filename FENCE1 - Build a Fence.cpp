#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<math.h>
#define MAX 10
#define ll long long int 
#define rep(i,j) for(int i=0;i<j;i++)
using namespace std;
int main(){
	float l;
	cin>>l;
	while(l!=0){
		float num ,r = l/2;
		num = 3.14159*r*r;
		num=num/2;
		cout<<num<<"\n";
		cin>>l;
	}
	return 0;
}

