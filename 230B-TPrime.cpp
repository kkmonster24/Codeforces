//http://codeforces.com/problemset/problem/230/B

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int sieve[1000000]={0};
	sieve[0]=1;
	sieve[1]=1;
	for(int i=2;i*i<1000000;i++){
		if(sieve[i]==0){
			for(int j=i*i;j<1000000;j+=i){
				sieve[j]=1;
			}
		}	
	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long temp;
		cin>>temp;
		long long number=sqrt(temp);
		if(temp==number*number){
			if(sieve[number]==0){
				cout<<"YES"<<endl;
			}
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;

	}


	return 0;
}