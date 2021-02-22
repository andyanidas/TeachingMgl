#include<iostream>

using namespace std;

//function prototype
int multi(int,int);

//main function
int main(){
	int x,y;
	cout<<"Enter 1st number: ";
	cin>>x;
	cout<<"Enter 2nd number: ";
	cin>>y;
	
	cout<<"x * y = "<<multi(x,y);
	
	return 0;
}


int multi(int a,int b){
	cout<<"multi function dotor baina!!"<<endl;
	return a*b;
}
