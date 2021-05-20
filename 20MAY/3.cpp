#include<iostream>

using namespace std;


int main(){
	string str = "abc1defghijklm1nop";
	int count=0;
	
	
	for(int i=0; str[i]!='\0'; i++){
		count++;
	}
	int index = -1;
	for(int i=count-1; i>=0; i--){
		if(str[i]=='1'){
			index=i;
			break;
		}
	}
	
	if(index ==-1){
		cout<<"temdegt oldsongui!";
	}else{
		cout<<"ogogdson temdegtiin suulchiin oldotsiin index :"<<index;
	}
	
	
	
	return 0;
}

