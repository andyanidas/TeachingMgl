#include<iostream>

using namespace std;

int main(){
	string str = "hello world";
	string newStr;
	int count=0;
	//null
	for(int i =0; str[i]!='\0';i++){
		count++;
	}
	for(int i =count-1; i>=0; i--){
		newStr += str[i];
	}
	cout<<newStr;
	
	return 0;
}
