//http://codeforces.com/problemset/problem/349/A
#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int twentyFive=0;
	int fifty=0;
	int hundred=0;
	for(int i=0;i<n;i++){
		int note=array[i];
		if(note==25){
			twentyFive++;
		}
		if(note==50){
			fifty++;
			if(twentyFive==0){
				cout<<"NO"<<endl;
				return 0;
			}
			else {
				twentyFive--;
			}
		}
		if(note==100){
			int flag=0;
		
			
			if(fifty>0 and twentyFive>0){
				hundred++;
				twentyFive--;
				fifty--;
				flag++;
			}
			else if(twentyFive>=3 ){
				twentyFive=twentyFive-3;
				hundred++;
				flag++;
			}

			if(flag==0){
				cout<<"NO"<<endl;
				return 0;
			}




		}
	}
	cout<<"YES";


	return 0;
}