#include<iostream>

using namespace std;

int main(){
	int arr[7] = {999,805,2,1,0,-100,10000};
	int max = arr[0];
	
	for(int i = 0 ; i<7 ; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	cout<<"largest number is "<<max;
	
	
	return 0;
}
