#include<iostream>

using namespace std;

/*
int tsug[1000] = {1,2,3,15,5,4,84,8,48,48,4,84,8,1,51,8,48,8541}; "\0"
tsug[3] = 15;
string temdegtuud[10] = {"one hero","two","neg"}
int x
int y
int z
temdegtuud[4] -> "\0"

int x[10][5] = {{1,4,3,99,100},{12,3,4,51,6},{}{}}
x[0][3] = 99;
cout<<"ta too oruulnuu:";
cin>>x[0][4];	//100
*/
					//0  1  2  3  4  -->>INDEX
int tsugluulga[5] =  {100,99,15,48,100};
tsugluulga[0] = 100;
string tsugluulga[20][5] =  {{"asd","asldjnqw q","ASODas","5456","asd"},{"asd","asldjnqw q","ASODas","5456","asd"}};
tsugluulga[0] = "asd";



int main(){
	string words[1000][2] = {{"Yello","shar"},{"blue","tsenher"},{"green","nogoon"}};
	string Eng;
	string Mon;
	int choice;
	int count=0;
	
	//Heden ugiin san baigaagaa toolj baina.0
	while(words[count][0] != "\0"){ //'\0'
		count++;
	}
	
	
	//minii program hereglegch 3 gesen too buyu garhiig hustel ajillanaa
	while(1){
		cout<<"1.Ugiin sang nem\n2.Ug hasah\n3.Ugiin sang hevleh\n4.Programaas garah\nTa songoltiin omnoh dugaaraa oruulnuu: ";
		cin>>choice;
		if(choice == 4){
			break;
		}else if(choice == 3){ //ugiin sang hevlnee
			cout<<"English\t\tMongolian"<<endl;
			cout<<"-----------------------------------"<<endl;
			for(int i = 0; i<count;i++){
				cout<<i+1<<"."<<words[i][0]<<"\t\t"<<words[i][1]<<endl;
			}
			cout<<endl;
		}else if(choice == 2){
			int del;
			cout<<"Hashiig huussen ugiin omnoh dugaariig oruulnuu:";
			cin>>del;	//2
			
			//string words[1000][2] = {{"40","41"},{"asd","41"},{"asd","dsa"}};
			for(int i = del -1; i<count;i++){
				words[i][0] = words[i+1][0];
				words[i][1] = words[i+1][1];
				/*
				for(int j = 0; j<2;j++){
					arr[i][j] = arr[i+1][j];
				}*/
			}
			words[count-1][0] = "\0";
			words[count-1][1] = "\0";
			count--;
		
		}else if(choice == 1){
			cout<<"English: ";
			cin>>Eng;
			cout<<"Mongolian: ";
			cin>>Mon;
			words[count][0] = Eng;
			words[count][1] = Mon;
			count++;
	
		}else{
			cout<<"Ta buruu songolt hiilee dahin oroldnuu!"<<endl;
		}
	}
	cout<<"Manai toli bichigiin programmiig ashigalsand bayarallaa!\nBayartai!";
	
	return 0;
}

