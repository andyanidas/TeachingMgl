#include<iostream>

using namespace std;
int findPower(int,int);


int main(){
	int num,power,result;
	cin>>num>>power;
	
	result = findPower(num,power);
	cout<<result;

	return 0;
}
				//5      3
int findPower(int x, int y){
	if(y==1){
		return x;
	}
	return x*findPower(x,y-1); // 5*findPower(5,2)
}
/*			 		int findPower(x = 5,y=2){
						if(y==1){
							return x;
						}
						return 5*5;
					}				
								
								int findPower(x = 5,y=1){
									if(y==1){
										return 5;
									}
									return 5*findPower(5,1);
								}	
											


*/


