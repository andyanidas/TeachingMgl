#include<iostream>

using namespace std;


int main(){
	int number;
	/*cout<<"Ta too oruulnuu: ";
	cin>>number;
	cout<<"Tanii oruulsan too: "<<number;
	*/
	
	int a,b,c;
	cout<<"ta gurvaljnii 3 taliig oruulnuu: ";
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<"Tanii oruulsan gurvaljnii perimetre: "<<a+b+c<<endl;
	
	cout<<"3n taliin hamgiin urt tal n: ";
	if(a>b){ //a=20 b=10 c=99 // a=10, b=20, c=99
		if(a>c){
			cout<<a;
		}else{
			cout<<c;
		}
	}else{
		if(b>c){
			cout<<b;
		}else{
			cout<<c;
		}
	}
	
	
	return 0;
}
