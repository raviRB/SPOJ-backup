#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include <bits/stdc++.h>
#include<math.h>
#define MAX 10
using namespace std;
int shortest_dist(int source,int desti ,vector <pair <int,int> > v[],int noOfCities ){
	set <pair <int,int> > s;
	s.insert(make_pair(0,source));
	int dist[noOfCities+1],visited[noOfCities+1];
	for(int i=0;i<=noOfCities;i++){
		dist[i]=INT_MAX;
		visited[i]=0;
	}
	pair <int,int> p;
	while(!s.empty()){
		p = *(s.begin()); 
		s.erase(s.begin());
		int index = p.second;
		if(index==desti)
			break;
		visited[index]=1;
		int weight = p.first;
		for(vector <pair <int,int> >::iterator it = v[index].begin();it!=v[index].end();it++){
			if(visited[it->first]==0){
				if(dist[index]+it->second < dist[it->first]){
					
					if (dist[it->first] != INT_MAX)
                    	s.erase(s.find(make_pair(dist[it->first],it->first)));
 
 
					dist[it->first]=weight+it->second;
					s.insert(make_pair(dist[it->first],it->first));
				}
			}
		}
	}
	return dist[desti];
}
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int noOfCities,neighbour,index,cost,path;
		string source,desti;
		cin>>noOfCities;
		map <string,int> city;
		string cname;
		vector <pair <int,int> > v[noOfCities+1];  // index,weight 
		for(int i=1;i<=noOfCities;i++){
			cin>>cname;
			int p =i;
			city.insert(pair<string, int>(cname,i));
			cin>>neighbour;
			for(int j=0;j<neighbour;j++){
				cin>>index>>cost;
				v[i].push_back(make_pair(index,cost));
			}
		}
		cin>>path;
			for(int j=0;j<path;j++){
				cin>>source>>desti;
				//cout<<city.lower_bound(source)->second<<" "<<city.lower_bound(desti)->second<<"\n";
			
				cout<<shortest_dist(city.lower_bound(source)->second,city.lower_bound(desti)->second,v,noOfCities)<<"\n";
			}
	}
	
return 0;
}

