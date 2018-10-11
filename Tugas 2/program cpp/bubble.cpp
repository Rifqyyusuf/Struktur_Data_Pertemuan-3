#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
main(){
	int NumList[8]={5,34,32,25,75,42,22,2};
	int Swap;
	cout<<"Data sebelum diurutkan :\n";
	for (int ctr=0;ctr<8;ctr++){
		cout<<setw(3)<<NumList[ctr];
	}
	cout<<"\n";
	for(int i=0;i<7;i++){
		for(int p=0;p<7;p++){
			if(NumList[p]>NumList[p+1]){
				Swap=NumList[p];
				NumList[p]=NumList[p+1];
				NumList[p+1]=Swap;
			}
		}
	}
	cout<<"Data setelah diurutkan: \n";
	for(int a=0;a<8;a++)
		cout<<setw(3)<<NumList[a];
	cout<<endl<<endl;

}
