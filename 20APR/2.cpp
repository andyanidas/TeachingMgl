#include<iostream>

using namespace std;
/*
1 10
2+4+6+8+10 = 
*/

int tsNiilber(int);
int main(){
	int sum,num;
	cin>>num; //  1234
	sum = tsNiilber(num);
	cout<<sum;
	return 0;
}
//				 1234			
int tsNiilber(int n){
	if(n==0){
		return 0;
	}
		//   4 + 6;
	return n%10 + tsNiilber(n/10);
}
//				  
/*				123
int tsNiilber(int n){
	if(n==0){
		return 0;
	}
		//   3 + tsNiilber(12);
	return 3 + 3;
	
}				  12
int tsNiilber(int n){
	if(n==0){
		return 0;
	}
		//   2 + tsNiilber(1);
	return 2 + 1;
	
}				  1
int tsNiilber(int n){
	if(n==0){
		return 0;
	}
		//   1 +  tsNiilber(0);
	return 1 + 0;
	
}				  0
int tsNiilber(int n){
	if(n==0){
		return 0;
	}
		//   1 +  tsNiilber(0);
	return n%10 + tsNiilber(n/10);
	
}
*/




