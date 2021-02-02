#include<iostream>

using namespace std;

int main(){
	
	for(int i = 0; i<10 ; i++){
		cout<<i<<" ";
		if(i == 7){
			break;
		}
	}
	cout<<endl<<"---------------------------"<<endl;
	for(int i = 0; i<10 ; i++){
		
		if(i%2==0){
			continue;
		}
		cout<<i<<" ";
		
	}
	
	
	return 0;
}

