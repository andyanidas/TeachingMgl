#include<iostream>

using namespace std;


int main(){
	string str = "nnooassdasdggaaappp%$$";
	string chars = "";
	int j,i;
	bool found = false;
	for(i=0; str[i]!='\0';i++){
		for(j = 0; chars[j]!='\0'; j++){
			if(str[i]==chars[j]){
				found = true;
				break;
			}
		}
		if(!found){
			chars += str[i];
		}
		found = false;
	}
	
	for(j = 0; chars[j]!='\0'; j++){}
	
	int arr[j],cnt=0;
	
	for(i=0; chars[i]!='\0'; i++){
		for(i=0; str[i]!='\0';i++){
			if(str[i]==chars[i]){
				cnt++;
			}
		}
		arr[i]=cnt;
		cout<<cnt;
		cnt=0;
	}
	
	for(int i = 0; i<j; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}

