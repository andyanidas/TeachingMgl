#include<iostream>

using namespace std;

int main(){
	string str = "hello this is a sentence";
	string str1;
	str1 = str;
	
	str[0] = '$';
	
	cout<<str1;
	
	return 0;
}
