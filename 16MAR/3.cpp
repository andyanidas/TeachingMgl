#include<iostream>

using namespace std;

bool sFunc(string*, string);

int main(){
	string words[5] = {"Blue","green","yellow","Black","White"};
	string sWord;
	cout<<"Enter word to search: ";
	cin>>sWord;
	if(sFunc(words,sWord)){
		cout<<"found";
	}else{
		cout<<"not found!";
	}
	
	
	return 0;
}

bool sFunc(string* words, string sWord){
	for(int i = 0; i<5; i++){
		if(words[i]==sWord){
			return true;
		}
	}
	return 0;
}




