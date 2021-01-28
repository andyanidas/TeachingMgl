#include<iostream>

using namespace std;

int main(){
	int day;
	cout<<"Enter a number (1-7) :";
	cin>>day;
	
	switch(day){
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"TU";
			break;
		case 3:
			cout<<"WE";
			break;
		case 4:
			cout<<"TH";
			break;
		case 5:
			cout<<"FR";
			break;
		case 6:
			cout<<"Sa";
			break;
		case 7:
			cout<<"Sun";
			break;
		default:
			cout<<"Buruu too oruulsan bain!";
			break;
	}
	
	
	return 0;
}
