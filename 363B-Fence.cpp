//http://codeforces.com/problemset/problem/363/B

#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int height[n+1];
	height[0]=0;
	for(int i=1;i<=n;i++){
		int data;
		cin>>data;
		height[i]=height[i-1]+data;
	}
	

	int dp[n];
	int sum=height[n]-height[n-k];
	dp[n-k+1]=sum;
	for(int i=n-k;i>0;i--){
		int temp=height[i+k-1]-height[i-1];
		dp[i]=min(dp[i+1],temp);
	}
	int ans=dp[1];
	int index=1;
	while(dp[index]==ans and index<=n-k+1){
		index++;
	}
	cout<<index-1;

	

	return 0;
}