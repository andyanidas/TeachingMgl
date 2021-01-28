#include<iostream>

using namespace std;

int main(){
	int h,w;
	cout<<"Ondor: ";
	cin>>h;
	cout<<"Orgon: ";
	cin>>w;
	
	
	
	for(int i = 1; i<=h; i++){
		for(int j = 1; j<=w; j++){
			cout<<j<<i;
		}
		cout<<endl;
	}
	
	
	return 0;
}
