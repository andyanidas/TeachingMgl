#include<iostream>

using namespace std;

//function prototype
bool anhdagch(int);
bool arms(int);

//main function
int main(){
	int num;
	cout<<"Enter an integer: ";
	cin>>num;
	/*
	if(anhdagch(num)){
		cout<<"ogogdson too anhdagch bainaa!!";
	}else{
		cout<<"ogogdson too anhdagch bish bainaa!!";
	}
	cout<<endl;*/
	if(arms(num)){
		cout<<"ogogdson too armstrong bainaa!!";
	}else{
		cout<<"ogogdson too armstrong bish bainaa!!";
	}
	
	/*
	reference
	ugNem(arr[], nemehUg)
	*/
	
	return 0;
}



bool anhdagch(int number){
	for(int i = 2; i<number;i++){
		if(number%i==0){
			cout<<"huvaagdsan too: "<<i<<endl;
			return false;
		}
	}
	return true;
}

bool arms(int number){//153
	if(anhdagch(number)){
		cout<<"anhdagch\n";
	}else{
		cout<<"anhdagch bish\n";
	}
	int num = number,total = 0;
	for(;num>0 ; num = num/10){
		total = total +(num%10)*(num%10)*(num%10);
	}
	return total == number;
}

