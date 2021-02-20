#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<time.h>

using namespace std;

int num = 151.9;

int main(){
	int num=5,power=3;
	double y = -99.56, b = 95.99; // -99.56 - 95.99 = -189.99
	double x = 3.56;
	double newY = abs(y); //newY = 99.56
	cout<<"power = "<<pow(num,power)<<endl;
	cout<<"Absolute "<<abs(-99)<<endl;
	cout<<"Floor = "<<floor(x)<<endl;
	cout<<"ceil = "<<ceil(x)<<endl;
	cout<<"root = "<<sqrt(81)<<endl;
	cout<<"round = "<<round(2.99)<<endl;
	
	srand(time(NULL));
	int number = rand()%6 + 10; 
	cout<<number;
	
	
	return 0;
}


