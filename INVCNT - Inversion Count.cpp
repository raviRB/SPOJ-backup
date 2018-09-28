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
long long int  c=0;
using namespace std;
void mergesort(int *arr,int start,int end){
	if(end-start>1){
		
		int mid =  end/2;
		int left = mid , right = end - mid;
		int l[left],r[right];
		int i=0,j=0,k=0;
		//cout<<"\nleft\n";
		for(i=start;i<mid;i++){
			l[j]=arr[i];
		//	cout<<l[j]<<" ";
			j++;
		}
		//cout<<"\nright\n";
		for(i=mid;i<end;i++){
			r[k]=arr[i];
		//	cout<<r[k]<<" ";
			k++;
		}
		//cout<<"\n";
		mergesort(l,start,left);
		
		mergesort(r,start,right);
		
		i=0,j=0,k=0;
		
		//cout<<"\nmerging\n";
		while(i<left && j<right)
		{
			if(l[i]>r[j]){
				c += (left-i);
				arr[k]=r[j];
				j++;
			}
			else{
				arr[k]=l[i];
				i++;
			}
			k++;
			
		}
		while(i<left){
			arr[k]=l[i];
				i++;
				k++;
		}
		while(j<right){
			arr[k]=r[j];
				j++;
				k++;
		}
		
	}	

}
int main(){
 // cout<<"Enter the number of elements in the array\n";
  int n,t;
  cin>>t;
  while(t--)
  {
  cin>>n;
  int arr[n];
  	for(int i=0;i<n;i++)
  		cin>>arr[i];
  mergesort(arr,0,n);
cout<<c<<"\n";
c=0;
}
return 0;	
}

