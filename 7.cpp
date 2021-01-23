#include<iostream>

using namespace std;


int main(){
	double num1,num2;
	char oper;
	
	
	cout<<"Ta ehnii toog oruulnuu: ";
	cin>>num1;
	cout<<"Ta 2 dahi toog oruulnuu: ";
	cin>>num2;
	cout<<"ta yamar uildel hiimeer bain? : ";
	cin>>oper;
	
	if(oper == '+'){
		cout<<"tanii oruulsan 2 toonii niilber: "<<num1+num2;
	}else if(oper == '-'){
		cout<<"tanii oruulsan 2 toonii yalgavar: "<<num1-num2;
	}else if(oper == '*'){
		cout<<"tanii oruulsan 2 toonii urjver: "<<num1*num2;
	}else if(oper == '/'){
		cout<<"tanii oruulsan 2 toonii noogdvor: "<<num1/num2;
	}else{
		cout<<"tanii oruulsan uildeliin temdegt buruu bain!";
	}
	
	return 0;

}
