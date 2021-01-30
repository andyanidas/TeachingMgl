#include<iostream>

using namespace std;

int main(){
	int s;
	cin>>s;
	
	
	
	for(int i = 0; i<s ; i++){
		for(int j = 0; j<s; j++){
			if(i == j || i == s-j-1 || i == 0 || i == s-1 || j == 0 || j ==s-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
		
	}
	
	
	
	
	return 0;
}

/*

*     
 *
  *
   *
    *
     *

*/
