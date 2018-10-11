#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct mov_t{
	char judul [50];
	char tahun [50];
};
mov_t jdl,th;
void printmov(mov_t mov);
int main(){
	top:
	int n,a,no,pilih;
	cout<<"=============="<<endl;
	cout<<"MOVIE PROGRAM"<<endl;
	cout<<"=============="<<endl;
	cout<<"1. Masukan data"<<endl;
	cout<<"2. Tampil data"<<endl;
	cout<<"3. Keluar"<<endl;
	cout<<" "<<endl;
	cout<<"pilih : ";cin>>pilih;
	switch(pilih){
	case 1:
	cout<<endl;
	cout<<"MASUKAN BANYAKNYA DATA = ";cin>>a;
	for(int i=1;i<=a;i++){
		cout<<endl;
		cout<<"DATA KE - "<<i<<endl;
		cout<<"------------"<<endl;
		cout<<"MASUKAN JUDUL FILM = ";
	fflush(stdin);	gets(jdl.judul);
		cout<<"MASUKAN TAHUN = ";
	fflush(stdin);	gets(th.tahun);
	
	}
	getch();
	goto top;
	case 2:
		for(int i=1;i<=a;i++){
		cout<<"Data ke -"<<i<<endl;
		cout<<"Judul film = "<<jdl.judul<<endl;
		cout<<"Tahun = "<<jdl.tahun<<endl;
	}
	getch();
	goto top;
	case 3:
		cout<<"Log Out!"<<endl;
		
		break;

}	
}
