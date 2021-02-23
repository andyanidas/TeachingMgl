#include<iostream>

using namespace std;

void func(int *);
void negJil(int);


int main(){
	int x = 15;
	cout<<&x<<endl;
	
	func(&x);
	cout<<x<<endl;
	
	int age= 15;
	negJil(age);
	cout<<age;
	return 0;
}

void func(int *abs){
	*abs = *abs + *abs + *abs;
}

void negJil(int asd){
	asd = asd +1;
}

