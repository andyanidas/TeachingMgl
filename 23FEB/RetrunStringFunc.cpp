#include<iostream>

using namespace std;

string checkOdd(int);
char letterGrade(double);
bool checkPrime(int);

int main(){
	int num;
	double grade;
	cout<<"Enter an integer: ";
	cin>>num;
	
	cout<<checkOdd(num)<<endl;
	
	cout<<"Enter your grade :"; //0-100 55
	cin>>grade;
	
	cout<<"Your letter grade is "; //Letter grade ->useg n dun 69
	cout<<letterGrade(grade)<<endl;
	
	
	cout<<"Enter an Integer :"; 
	cin>>num;
	if(checkPrime(num)){
		cout<<"Prime";
	}else{
		cout<<"not prime";
	}
	
	
	return 0;
}

/*
==
!=
>
<
>=
<=
WHILE(TRUE/FALSE)
FOR(INT ; TRUE/FALSE ; UPDATE)
IF(TRUE/FALSE)
bool check= true/false
*/

//64
string checkOdd(int number){
	if(number%2==0){
		return "Tegsh";
	}else{
		return "Sondgoi";
	}
}

char letterGrade(double grade){
	//char dun;
	if(grade>=90){
		//dun = 'A';
		return 'A';
	}else if(grade>=80){
		//dun = 'B';
		return 'B';
	}else if(grade>=70){
		//dun = 'C';
		return 'C';
	}else if(grade>=60){
		//dun = 'D';
		return 'D';
	}
	return 'F';
}

bool checkPrime(int num){
	for(int i = 2; i<num/2 ; i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

