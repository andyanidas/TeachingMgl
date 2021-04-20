#include<iostream>

using namespace std;
/*
1 10
2+4+6+8+10 = 
*/

int tNiilber(int,int);
int main(){
	int sum,x,y;
	cin>>x>>y; //  1 5
	sum = tNiilber(x,y);
	cout<<sum;
	
	return 0;
}
//				 1     5			
int tNiilber(int a,int b){
	if(a>b){
		return 0;
	}
	if(a%2==0){
		return a + tNiilber(a+1, b);
	}else{
		return tNiilber(a+1, b);
	}
}
//				   2     5
/*int tNiilber(int a,int b){
	if(a>b){
		return 0;
	}
	if(a%2==0){				3	 5
		return a + 4; //a=2
	}else{
		return tNiilber(a+1, b);
	}
}
//				 3     5
int tNiilber(int a,int b){
	if(a>b){
		return 0;
	}
	if(a%2==0){
		return a + tNiilber(a+1, b); //a=2
	}else{				4    5
		return 4;
	}
}
				 4     5
int tNiilber(int a,int b){
	if(a>b){
		return 0;
	}
	if(a%2==0){				5    5
		return a + 0; //a=4
	}else{
		return tNiilber(a+1, b);
	}
}

//				 5     5
int tNiilber(int a,int b){
	if(a>b){
		return 0;
	}
	if(a%2==0){
		return a + tNiilber(a+1, b); //a=2
	}else{				6    5
		return 0;
	}
}
//				 6     5
int tNiilber(int a,int b){
	if(a>b){
		return 0;
	}
	if(a%2==0){
		return a + tNiilber(a+1, b); //a=2
	}else{
		return tNiilber(a+1, b);
	}
}



*/




