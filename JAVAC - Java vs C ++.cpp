#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include<map>
using namespace std;
string arr;
void javatoC(){
	for(int i=0;i<arr.length();i++)
	{
		int num = arr[i];
		if(num>=65 && num<=90)
		{
			cout<<"_";
			cout<<char(tolower(arr[i]));
		}
		else
			cout<<arr[i];
	}
}
void Ctojava(){
	for(int i=0;i<arr.length();i++)
	{
		if(arr[i]=='_')
		{
			cout<<char(toupper(arr[i+1]));
			i++;
		}
		else
			cout<<arr[i];
	}
}
int main()
{
	int upper=0,under=0,mul=0;
	while(cin>>arr){
	for(int i=0;i<arr.length();i++)
	{
		if(arr[i]>=65 && arr[i]<=90)
			{
			
				upper++;
			}
		if(arr[i]=='_')
			{
		
				under++;
			}
		if(i<arr.length()-1 && arr[i]=='_' && arr[i+1]=='_')
		{
	
				mul++;
		}
	}
	if((upper!=0 && under!=0) || arr[arr.length()-1]=='_' || mul!=0 || (arr[0]>=65 && arr[0]<=90))
		cout<<"Error!";
	else if(upper!=0)
		javatoC();
	else
		Ctojava();
	upper=0;
	under=0;	
	mul=0;
	cout<<"\n";
	}
return 0;
}

//    || arr[arr.length()-1]=='_' || mul!=0 || (arr[0]<97 && arr[0]!='_')
