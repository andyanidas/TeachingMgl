#include<iostream>

using namespace std;
void nDorvol(int);
void bDorvol(int);
int main(){
	int choice;// 12321
	
	cout<<"Menu";
	cout<<"Ta hevlehiig hussen dursiinhee omnoh dugaariig oruulnuu: ";
	cin>>choice;
	
	int Size;
	cout<<"Ta hemjeestee oruulnuu: ";
	cin>>Size;
	switch(choice){
		case 1:
			bDorvol(Size);
			break;
		case 2:
			nDorvol(Size);
			break;
	}
	
	return 0;
}

void bDorvol(int hemjee){
	for(int i = 0; i<hemjee; i++){
		for(int j = 0; j <hemjee; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void nDorvol(int){
	
}
