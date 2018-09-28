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
	while(cin>>t){
	string  pattern;
	cin>>pattern;
	int i=0,j=1,arr[pattern.size()];
	arr[0]=0;
	while(j<pattern.size()){
		if(pattern[j]==pattern[i])
			{
				arr[j]=i+1;
				j++;
				i++;
			}
		else{
			if(i==0)
			{
				arr[j]=0;
				j++;
			}
			else{
				i = arr[i-1];
			}
		}		
	}
	string  givstr;
	cin>>givstr;
	j=0,i=0;
	while(i<givstr.size()){
		
		if(pattern[j]==givstr[i])
			{
				i++;
				j++;
			}
		else{
			if(j==0)
				i++;
			else{
				j = arr[j-1];
				
			}
		}
		if(j==pattern.length())
		{
			cout<<i-pattern.length()<<"\n";
			j=arr[j-1];
		}
			
	}
	cout<<"\n";	
	}
	return 0;
}

