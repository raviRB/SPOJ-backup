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
	long long int num;
	cin>>num;
	while(num!=-1){
		long long int pre = 1 , index =1,current=1;
		while(current<num){
			current = pre + index*6;
			pre = current;
			index++;
			//cout<<current<<"\n";
		}
		if(current==num)
			cout<<"Y\n";
		else
			cout<<"N\n";
		cin>>num;
	}
	return 0;
}

