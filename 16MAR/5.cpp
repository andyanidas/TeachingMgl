#include<iostream>

using namespace std;

int findSize(string);

int main(){
	string test;
	getline(cin,test); //"hello this is a test" test[3]
	int size;
	size = findSize(test);//
	cout<<size;
	
	return 0;
}

int findSize(string str){
	int count=0;
	for(int i=0 ;str[i] != '\0';i++){
		count++;
	}
	return count;
}
