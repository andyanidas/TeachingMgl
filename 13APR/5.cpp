#include<iostream>

using namespace std;
void printNum(int,int);

int main(){
	
	int num;
	cin>>num;//5
	printNum(1,num);
	
	
	return 0;
}
void printNum(int i,int max){
	if(i==max){
		cout<<i;
	}else{
		cout<<i<<", ";
		printNum(i+1,max);
	}
}


