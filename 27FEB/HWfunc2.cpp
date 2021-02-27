#include<iostream>

using namespace std;

int main(){
	string oguulber = "my name is andy";
	string newOguulber= "";
	/*cout<<"Oguulber oruulnuu: ";
	getline(cin,oguulber);
	
	cout<<"tanii oruulsan oguulber: "<<oguulber<<endl;
	cout<<"ehnii useg: "<<oguulber[0]<<endl;
	cout<<"2 dahi useg: "<<oguulber[1]<<endl;
	*/
	
	for(int i = 2; i<oguulber.size(); i++){
		//cout<<oguulber[i]<<endl;
		newOguulber += oguulber[i];
		//cout<<"New Oguulber: "<<newOguulber<<endl;
	}
	cout<<"New Oguulber: "<<newOguulber;
	
	
	return 0;
}
