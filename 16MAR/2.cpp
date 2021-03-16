#include<iostream>

using namespace std;

string takeName();


int main(){
	cout<<"Hello "<<takeName();
	return 0;
}

string takeName(){
	string name;
	cout<<"Enter your name: ";
	cin>>name;
	return name;
}
