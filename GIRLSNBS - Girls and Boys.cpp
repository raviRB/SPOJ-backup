#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<cmath>
#define MAX 10
using namespace std;
//DP
int main(){
 float a,b;
 cin>>a>>b;
 while (!(a==-1 && b==-1)){
 	if(a>b)
 		cout<<ceil(a/(b+1))<<"\n";
 	else
 		cout<<ceil(b/(a+1))<<"\n";
 	cin>>a>>b;
 }
return 0;	
}

