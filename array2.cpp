#include<iostream>

using namespace std;

//array
int main(){
	int Size;
	cout<<"How many words do you wanna enter :";
	cin>>Size;
	cin.ignore();
	
	string words[Size];
	for(int i = 0; i<Size ; i++){
		getline(cin,words[i]); // {"hi", "Hello world", "mongol"}
	}
	for(int i = 0; i<Size ; i++){
		cout<<words[i]<<" ";
	}
	//string oguulber[3] = {"asdhawlfkn hello za mongol", "wow owo", "2"};
	return 0;
}
