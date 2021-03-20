#include<iostream>

using namespace std;

int main(){
	string word[3] = {"asetsgee","andy","bold"};
	
	for(int i=0; i<3;i++){
		for(int j = i+1; j<3; j++){
			if(word[i]>word[j]){
				string temp = word[i];
				word[i]=word[j];
				word[j]=temp;
			}
		}
	}
	for(int i = 0; i<3; i++){
		cout<<word[i]<<endl;
	}
	
	return 0;
}
