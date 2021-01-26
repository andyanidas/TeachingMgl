#include<iostream>

using namespace std;

int main(){
	double r,dia,pre,area;
	cout<<"Enter a radius: ";
	cin>>r;
	
	dia = r*2;
	pre = r*3.14*2;
	area = 3.14*r*r;
	
	
	cout<<"Dia = "<<dia<<endl<<"PRe = "<<pre<<endl<<"Area = "<<area;
	
	return 0;
}
