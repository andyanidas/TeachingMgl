#include<iostream>

using namespace std;

int main(){
	int year;
	int month = 0;
	cin >> year;
    cout << year <<"on"<< endl;
	
	while(month<12){
		month++;
		if(month==2){
			if(year%4==0){
				cout<<29;
				continue;
			}
			cout<<29;
			continue;
		}
		if(month<8){
			if(month%2==1){
				cout<<31;
			}else{
				cout<<30;
			}
		}else{
			if(month%2==1){
				cout<<30;
			}else{
				cout<<31;
			}
		}
		
	}
	
	
	return 0;
}

