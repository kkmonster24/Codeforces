//http://codeforces.com/problemset/problem/388/A
#include<iostream>
#include<algorithm>
using namespace std;

bool isPossibe(int *strength,int n,int k){
	int flag=0;
	for(int i=0;i<k;i++){
		int index=i;
		int minimum=strength[index];
		index+=k;
		while(index<n and  minimum>0){
			int box=strength[index];
			minimum--;
			minimum=min(minimum,box);
			index+=k;
		}
		if(index<n){
			return false;
		}
	}
	return true;

}

int main(){
	int n;
	cin>>n;
	int strength[n];
	for(int i=0;i<n;i++){
		cin>>strength[i];
	}
	sort(strength,strength+n,greater<int>());
	

	for(int i=1;i<=n;i++){
		if(isPossibe(strength,n,i)){
			cout<<i<<endl;
			return 0;
		}
	}

	return 0;
}