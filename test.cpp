#include<iostream>

using namespace std;

int main(){
	int s;
	//cin>>s;
	
	for(int j = 0; j<10 ; j++){
		for(int i = 0; i<10-j-1 ; i++){
			cout<<" ";
		}
		for(int i = 0; i<10 ; i++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}

/*
5
----*****
---*****
--*****
-*****
*****


*/
