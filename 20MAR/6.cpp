#include<iostream>

using namespace std;

int main(){
	string name = "anDy-erdEne";
	
	for(int i =0; name[i] != '\0';i++){
		if(name[i]>='A' && name[i]<='Z'){
			name[i] += 32;
		}
	}
	
	cout<<name;
	void printHello(){
		cout<<"Hello";
	}
	printHello()
	return 0;
}
