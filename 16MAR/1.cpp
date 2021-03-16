#include<iostream>

using namespace std;

double sqr(double);


int main(){
	double n;
	cin>>n;
	cout<<sqr(n);
	
	
	return 0;
}

double sqr(double x){
	return x*x;
}
