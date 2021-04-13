#include<iostream>

using namespace std;
void abc(int);


int main(){
	int num =5;
	abc(3);
	return 0;
}

		//x=3
void abc(int x){
	if(x==0){
		return;
	}
	cout<<x<<endl; //print 3
	abc(x-1);
	cout<<"Hello"<<endl;
}
/*void abc(2){
	if(x==0){
		return;
	}
	cout<<x<<endl; //print 2
	abc(x-1);
	cout<<"Hello"<<endl;
}
void abc(1){
	if(x==0){
		return;
	}
	cout<<x<<endl; //print 1
	abc(x-1);
	cout<<"Hello"<<endl;
}
void abc(0){
	if(x==0){
		return;
	}
	cout<<x<<endl; //print 5
	abc(x-1);
	cout<<"Hello"<<endl;
}

*/



