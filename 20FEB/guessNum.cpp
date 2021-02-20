#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<time.h>

using namespace std;

int num = 151.9;

int main(){
	int num,tooloh=0;
	srand(time(NULL));
	int number = rand()%100 + 1; 
	
	
	cout<<"Toog taa togloomond tavtai moril!"<<endl;
	cout<<"Ta 1-100 giin hoorond neg too baigaa teriig taagaarai!"<<endl;
	cin>>num;
	
	while(num != number){
		tooloh++;
		if(num>number){
			cout<<"tanii oruulsan too ihdeed baina!\n";
		}else{
			cout<<"tanii oruulsan too bagadaad baina!\n";
		}
		cin>>num;
	}
	cout<<"Bayar hurgey ta "<<number<<" gesen toog "<<tooloh<<" orlodlogoor amjilttai taalaa!";
	return 0;
}


