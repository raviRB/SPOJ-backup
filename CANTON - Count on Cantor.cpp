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
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		int count =1,i=1,j=1,flag=1,flag1=1;
		
		while(count<num){
			if(i==1 && flag1==1){
				j++;
				count++;
				flag1=0;
				flag=1;
			}
			else if(flag==1 && j!=1){
				i++;
				j--;
				count++;
			}
			else if(j==1 && flag==1){
				flag=0;
				i++;
				flag1=1;
				count++;
			}
			else if(flag1==1 && i!=1){
				i--;
				j++;
				count++;
			}
			//cout<<"TERM "<<num<<" is "<<i<<"/"<<j<<"\n";
		}
		cout<<"TERM "<<num<<" IS "<<i<<"/"<<j<<"\n";
	}
	return 0;
}

