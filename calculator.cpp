#include<iostream>

using namespace std;

int main(){
	char op;
	double a,b;
	
	
	while(op != '$'){
		cout<<"Ehnii toog oruulnuu: ";
		cin>>a;
		cout<<"2 dahi toog oruulnuu: ";
		cin>>b;
		cout<<"Hiihiig huussen operatoroo oruulnuu (garhiig husvel $ temdegt oruulnuu): ";
		cin>>op;
		if(op == '+'){
		cout<<a<<" + "<<b<<" = "<<a+b<<endl;
		}else if(op == '-'){
			cout<<a<<" - "<<b<<" = "<<a-b<<endl;
		}else if(op == '*'){
			cout<<a<<" * "<<b<<" = "<<a*b<<endl;
		}else if(op == '/'){
			cout<<a<<" / "<<b<<" = "<<a/b<<endl;
		}else{
			cout<<"Tanii oruulsan operator buruu baina!"<<endl;
		}
	}
	
	
	return 0;
}
