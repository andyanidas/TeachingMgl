#include<iostream>

using namespace std;


int main(){
	string str = "abcdefghijklmnop";
	int count=0;
	
	
	for(int i=0; str[i]!='\0'; i++){
		count++;
	}
	string newStr="";
	for(int i=1; str[i]!='\0'; i++){
		newStr += str[i-1];
	}
	
	cout<<newStr;
	
	
	return 0;
}

