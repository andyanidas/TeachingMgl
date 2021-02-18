#include<iostream>

using namespace std;
void arms(int);

int main(){
	int x = 407;
	arms(x);
	return 0;
}	
	
	/*
	//x = 153
	last = x%10; //3
	niilber = niilber + last*last*last; //27
	x = x/10; //15
	last = x%10; //5
	niilber = niilber + last*last*last;//152
	x = x/10; 	//x = 1
	last = x%10;
	niilber = niilber + last*last*last // 153
	x = x/10; 	//x = 0
	*/
	
	
	

void arms(int x){
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
}

