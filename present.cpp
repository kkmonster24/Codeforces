#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	pair<int,int> array[n];
	for(int i=0;i<n;i++){
		int data;
		cin>>data;
		array[i]=make_pair(data,i);
	}
	sort(array,array+n);
	for(int i=0;i<n;i++){
		cout<<array[i].second+1<<" ";
	}

}