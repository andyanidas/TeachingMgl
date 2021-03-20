#include<iostream>

using namespace std;

int main(){
	string word = ",s9c11ane1123fa";
	string nums; //91
	int count = 0;
	for(int i =0 ;word[i] != '\0';i++){
		if(word[i]>='0' && word[i]<='9'){
			nums += word[i];//9111123
		}	
	}
	cout<<nums;
	
	return 0;
}
