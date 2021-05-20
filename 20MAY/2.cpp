#include<iostream>

using namespace std;


int main(){
	string str = "abcdefghijklmnop";
	int count=0;
	
	
	for(int i=0; str[i]!='\0'; i++){
		count++;
	}
	string newStr="";
	for(int i=count-1; i>=0; i--){
		newStr += str[i];
	}
	
	cout<<newStr;
	
	
	return 0;
}

