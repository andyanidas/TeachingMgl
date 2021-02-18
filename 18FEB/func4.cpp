#include<iostream>

using namespace std;
void arms(int);
void anhdagch(int);

int main(){
	int x = 407;
	arms(x);
	anhdagch(108);
	return 0;
}	
void arms(int x){
	//-------------------------amrsiig olj bainaa---------------
	int last;
	int niilber = 0;
	int x1 = x;
	for(;x != 0;x = x/10){
		last = x%10;
		niilber = niilber + last*last*last;
	}
	if(niilber == x1){
		cout<<"armstrong";
	}else{
		cout<<"not armstrong";
	}
	cout<<"\n";
	//-------------------------ahndagchiig olj bainaa---------------
	anhdagch(x);
	
}

void anhdagch(int number){
	for(int i = 2; i<number;i++){
		if(number%i==0){
			cout<<"anhdagch bish"<<endl;
			return;
		}
	}
	cout<<"anhdagch mon"<<endl;
}
/*


fun(int x int y){
	for(int i = x; i<y; i++){
		anhdagch();
	}
}



*/
