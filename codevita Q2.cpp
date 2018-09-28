#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<string.h>

	for(int i=0;i<n;i++){
		gets(c);
		col=0;
		
		for(int j=0;j<strlen(c);j++)
		{
			if(c[j]>='A' && c[j]<='Z')
			{
				arr[i][col]=c[j];
				a[i][col]=0;
				col++;
				}	
		}

	}
	
	char current ='A',next;
	int i=0,j=0;
	if(arr[0][1]=='R' || arr[0][1]=='D')
		{
			current=arr[0][1];
			i=0;
			j=1;
		}
	else if(arr[1][0]=='R' || arr[1][0]=='D')
		{
			current=arr[1][0];
			i=1;
			j=0;
		}
	else if(arr[1][1]=='R' || arr[1][1]=='D')
		{
			current=arr[1][1];
			i=1;
			j=1;
		}
		a[0][0]=1;
	cout<<i<<" "<<j<<"\n";	
	string  s;
	string::iterator it;
	int flag =0;	
	while(current!='D'){
		flag++;
		a[i][j]=1;
		if(i-1>=0 && i-1<=n-1 && j-1>=0 && j-1<=n-1){
			if(arr[i-1][j-1]=='D' || arr[i-1][j-1]=='R')
					{
					if(a[i-1][j-1]!=1){
					next=arr[i-1][j-1];
					i=i-1;
					j=j-1;
					a[i-1][j-1]=1;
					}
					}
			else if(arr[i-1][j-1]=='S' || arr[i-1][j-1]=='L' || arr[i-1][j-1]=='W' || arr[i-1][j-1]=='T')
				s.push_back(arr[i-1][j-1]);
		}
		if(i-1>=0 && i-1<=n-1 && j>=0 && j<=n-1){
			if(arr[i-1][j]=='D' || arr[i-1][j]=='R')
					{
					if(a[i-1][j]!=1){
					next=arr[i-1][j];
					i=i-1;
					j=j;
					a[i-1][j]=1;
					}
					}
			else if(arr[i-1][j]=='S' || arr[i-1][j]=='L' || arr[i-1][j]=='W' || arr[i-1][j]=='T')
				s.push_back(arr[i-1][j]);
		}
		if(i-1>=0 && i-1<=n-1 && j+1>=0 && j+1<=n-1){
			if(arr[i-1][j+1]=='D' || arr[i-1][j+1]=='R')
					{
					if(a[i-1][j+1]!=1){
						next=arr[i-1][j+1];
					i=i-1;
					j=j+1;
					a[i-1][j+1]=1;
					}
					}
			else if(arr[i-1][j+1]=='S' || arr[i-1][j+1]=='L' || arr[i-1][j+1]=='W' || arr[i-1][j+1]=='T')
				s.push_back(arr[i-1][j+1]);
		}
		if(i>=0 && i<=n-1 && j-1>=0 && j-1<=n-1){
			if(arr[i][j-1]=='D' || arr[i][j-1]=='R')
					{
					if(a[i][j-1]!=1){
						next=arr[i][j-1];
					i=i;
					j=j-1;
					a[i][j-1]=1;
					}
					}
			else if(arr[i][j-1]=='S' || arr[i][j-1]=='L' || arr[i][j-1]=='W' || arr[i][j-1]=='T')
				s.push_back(arr[i][j-1]);
		}
		if(i>=0 && i<=n-1 && j+1>=0 && j+1<=n-1){
			if(arr[i][j+1]=='D' || arr[i][j+1]=='R')
					{
					if(a[i][j+1]!=1){
						next=arr[i][j+1];
					i=i;
					j=j+1;
					a[i][j+1]=1;
					}
					}
			else if(arr[i][j+1]=='S' || arr[i][j+1]=='L' || arr[i][j+1]=='W' || arr[i][j+1]=='T')
				s.push_back(arr[i][j+1]);
		}
		if(i+1>=0 && i+1<=n-1 && j-1>=0 && j-1<=n-1){
			if(arr[i+1][j-1]=='D' || arr[i+1][j-1]=='R')
					{
					if(a[i+1][j-1]!=1){
						next=arr[i+1][j-1];
					i=i+1;
					j=j-1;
					a[i+1][j-1]=1;
					}
					}
			else if(arr[i+1][j-1]=='S' || arr[i+1][j-1]=='L' || arr[i+1][j-1]=='W' || arr[i+1][j-1]=='T')
				s.push_back(arr[i+1][j-1]);
		}
		if(i+1>=0 && i+1<=n-1 && j>=0 && j<=n-1){
			if(arr[i+1][j]=='D' || arr[i+1][j]=='R')
					{
					if(a[i+1][j]!=1){
						next=arr[i+1][j];
					i=i+1;
					j=j;
					a[i+1][j]=1;
					}
					}
			else if(arr[i+1][j]=='S' || arr[i+1][j]=='L' || arr[i+1][j]=='W' || arr[i+1][j]=='T')
				s.push_back(arr[i+1][j]);
		}
		if(i+1>=0 && i+1<=n-1 && j+1>=0 && j+1<=n-1){
			if(arr[i+1][j+1]=='D' || arr[i+1][j+1]=='R')
					{
					if(a[i+1][j+1]!=1){
						next=arr[i+1][j+1];
					i=i+1;
					j=j+1;
					a[i+1][j+1]=1;
					}
					}
			else if(arr[i+1][j+1]=='S' || arr[i+1][j+1]=='L' || arr[i+1][j+1]=='W' || arr[i+1][j+1]=='T')
				s.push_back(arr[i+1][j+1]);
		}
		
	sort(s.begin(),s.end());
	for(it=s.begin();it!=s.end();it++)
		cout<<*it<<" ";
	s.clear();
	current=next;
	cout<<i<<" "<<j<<"\n";	
	cout<<"\n";	
	if(flag==5)
		break;
	}
	
	cout<<"DESTINATION\n";
	
return 0;
}
