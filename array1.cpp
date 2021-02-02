#include<iostream>

using namespace std;

//array
int main(){
	int arr[5] = {1,2};		//toonii tsugluulga {1,2,3,4,5}
	cout<<arr[2]<<endl;
	// '\0' -> null element buyu hooson
	
	char ug[5] = {'H','e','l','o'};
	cout<<ug[0];
	cout<<ug[1];
	ug[2] = 'm';	//{'H','e','m','o'};
	cout<<ug[2];
	cout<<ug[2];
	cout<<ug[3]<<endl;
	
	int arr1[10];
	for(int i = 0 ; i<10 ; i++){
		arr1[i] = i*10;
	}
	
	cout<<"arr1[] = ";
	for(int i = 0; i<10; i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	
	//----------------------------------------
	string words[5];
	cout<<"Enter some words :";
	for(int i = 0 ; i<5 ; i++){
		cin>>words[i];
	}
	cout<<"4 dugeer ug n: "<<words[3]<<endl;
	for(int i = 0 ; i<5 ; i++){
		cout<<words[i]<<" ";
	}
	
	
	return 0;
}
