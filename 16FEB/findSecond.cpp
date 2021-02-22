#include<iostream>

using namespace std;


int main(){
	int array[10]= {5,4,9,7,6,2,1586,1,6,50};
	int max = array[0];
	int max2 = array[0];
	
	if(array[1]>max){
		max = array[1];	//max = 5
	}else{
		max2 = array[1];//max2 = 4
	}
	
	for(int i = 2; i<10 ; i++){
		if(array[i]>max){
			max2 = max;	//max2 = 5
			max = array[i]; //max = 9
		}else{
			if(array[i]>max2){
				max2 = array[i];	//max2 = 7
			}
		}
	}
	cout<<max2;
	
	return 0;
}


