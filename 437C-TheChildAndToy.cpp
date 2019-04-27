//http://codeforces.com/contest/437/problem/C

#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector< pair<int,int> > v(n);
	vector<int> weight;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		weight.push_back(temp);
		v[i]=make_pair(temp,i+1);
	}

	sort(v.rbegin(),v.rend());

	map<int,list<int> > adjList;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adjList[x].push_back(y);
		adjList[y].push_back(x);
	}
	int cost=0;
	for(int i=0;i<n;i++){
		int node=v[i].second;
		int curCost=0;
		for(auto neighbour:adjList[node]){
			curCost+=weight[neighbour-1];
		}
		cost+=curCost;
		weight[node-1]=0;
	}
	cout<<cost;








	return 0;
}