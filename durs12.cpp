#include<iostream>

using namespace std;

int main(){
	int s;
	cin>>s;
	
	
	
	for(int i = 0; i<s ; i++){
		for(int k = i+1; k<s ; k++){
			cout<<"*";
		}
		
		for(int j = 0; j<i; j++){
			cout<<" ";
		}
		cout<<endl;
	}
	

	
	
	
	return 0;
}

