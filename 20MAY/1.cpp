#include<iostream>

using namespace std;


int main(){
	string a = "al1235111%%%Ljaek#@@jrgn;aerl";
	int i,useg =0, too=0, temd=0;
	
	
	for(i=0; a[i]!='\0'; i++){
		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
			useg++;
		}else if(a[i]>='0' && a[i]<='9'){
			too++;
		}else{
			temd++;
		}
	}
	cout<<"Useg: "<<useg<<endl<<"Too: "<<too<<endl<<"Temdegt: "<<temd;
	
	return 0;
}

