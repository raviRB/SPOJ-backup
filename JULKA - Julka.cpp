#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<cmath>
#include<stack>
#define MAX 10
#define mod 1000007
using namespace std;    

int main(){
	int i=10;
	while(i--){
		char total[110],k[110];
		cin>>total>>k;
		int carry=0,val,j = strlen(total)-1;
		for(int i=strlen(k)-1;i>=0;i--)
		{
			if(total[j]<k[i])
			{
				val = 10+total[j];
				total[j]=val - k[i];
				total[j-1]--;
			}
			else{
				total[j]=total[j] - k[i];
			}
			j--;
		}
		for(int i=0;i<strlen(total);i++)
			cout<<total[i];
		cout<<"\n";
		/*for(int i=0;i<strlen(total);i++)
		{
			carry = carry*10 + total[i];
			val = carry/2;
			carry -=val*2;
			total[i]=val;
		}
		for(int i=0;i<strlen(total);i++)
			cout<<total[i];
		cout<<"\n";*/
		
	}
return 0;	
}

