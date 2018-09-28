#include <bits/stdc++.h>
#define MAX 10
#define mod 1000007
#define psize 10
using namespace std; 
int main(){
	string str,prefix,suffix,temp;
	int index,pindex=0;
	cout<<"Enter String \n";
	getline(cin,str);
	prefix="DLESTX";
	suffix="DLEETX";
	int i=0;
	while(pindex+10<=str.length()){
		cout<<prefix<<" ";
		temp =str.substr(pindex,10); 
		if(temp.find(suffix)!=string::npos){
		index = temp.find(suffix);
		for(int in=pindex;in<pindex+index+6;in++){
			cout<<str[in];
		}
		cout<<suffix;
		for(int in=pindex+index+6;in<pindex+10;in++){
			cout<<str[in];
		}
		cout<<" "<<suffix<<"\n";
		}
		else{
			cout<<temp<<" "<<suffix<<"\n";
		}
		pindex +=10;

	}
	temp =str.substr(pindex,pindex-str.size()); 
	cout<<prefix<<" ";
	if(temp.find(suffix)!=string::npos){
		index = str.find(suffix);
		for(int in=pindex;in<index+6;in++){
			cout<<str[in];
		}
		cout<<suffix;
		for(int in=index+6;in<str.size();in++){
			cout<<str[in];
		}
		cout<<" "<<suffix<<"\n";
		}
		else{
			cout<<temp<<" "<<suffix<<"\n";
		}

return 0;	
}

