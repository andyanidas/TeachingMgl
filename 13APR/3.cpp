#include<iostream>

using namespace std;
void printNum(int);

int main(){
	
	int num;
	cin>>num;
	printNum(num);
	
	
	return 0;
}
void printNum(int a){
	if(a==1){
		cout<<a;
	}else{
		cout<<a<<", ";
		printNum(a-1);
	}
	
}


