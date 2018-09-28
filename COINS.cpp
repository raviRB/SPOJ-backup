//#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<math.h>
#define MAX 10
using namespace std;

long long int cal(long long int *arr,long long int i){
	if(i<100001)
		return arr[i];
	long long int t;
	t = cal(arr,i/2) + cal(arr,i/3) + cal(arr,i/4);
	if( t>i )
		{
			return t;
		}
	else
		{
			return i;
		}
}


int main(){
	long long int arr[100001];
	arr[0]=0;
	arr[1]=1;
	long long int i,j;
	for(i=2;i<100001;i++)
		if((arr[int(i/2)]+arr[int(i/3)]+arr[int(i/4)])>i)
			arr[i]=arr[int(i/2)]+arr[int(i/3)]+arr[int(i/4)];
		else
			arr[i]=i;
			
	while(scanf("%lld",&j)!=EOF){
		if(j<100001)
			cout<<arr[j]<<"\n";
		else
			cout<<cal(arr,j)<<"\n";
	}
	
	return 0;
}

