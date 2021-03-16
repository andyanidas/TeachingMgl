#include<iostream>

using namespace std;

string changeFun(string);

int main(){
	string test;
	getline(cin,test); //"hello this"
	test = changeFun(test);
	cout<<test;
	
	return 0;
}

string changeFun(string str){//"hello this"
	string newStr ="";
	for(int i=0 ; str[i]!='\0' ; i++){
		newStr = newStr + " " + str[i]; // h e l l o
	}
	return newStr;
}
/*
1.
String hereglegch oruulna
Reverse hiih function zohion
Jishee n: 
input: hello wolrd
outPut:drlow olleh
2.
String hereglegch oruulna
ug stringiig heden ugnees burdesniig toolno
if(str[i]==" ") count++;
3.
2 string ogogdono
2 stringee functiond yavuulaad hemjees n ijil esvel ondoo bolhiig 
todorhoilno

*/







