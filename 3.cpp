#include<iostream>

using namespace std;

//operators

int main(){
	int x = 18;
	int y = 2;
	int check = x%y; //remainder
	cout<<check;
	
	x = x + y; 	//x = 20
	x += y; 	//x = 22
	x -= y; 	// x = 20; //x = x-y
	
	cout<<&x;
	
	int n = 5;
	int k = 2;
	n%=k; // n = ?
	
	return 0;
}
