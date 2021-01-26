#include<iostream>

using namespace std;

int main(){
	int suuri, zereg;
	cout<<"Suuriig oruul: ";
	cin>>suuri;
	cout<<"Zeregiig oruul: ";
	cin>>zereg;
	
	int hariu= 1;
	
	
	for(int i = 1; i<=zereg ; i = i+1){
		hariu = hariu*suuri;
	}
	
	cout<<hariu;
	
	return 0;
}

