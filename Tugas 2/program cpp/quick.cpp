#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
void quickSort(int arr[], int left, int right);
int main(){
  int Ar[8]={5,34,32,25,75,42,22,2};
  cout<<"Data sebelum diurutkan: \n";
  for (int d=0; d<8; d++){
  cout<<setw(3)<<Ar[d];
  }
  cout<<endl<<endl;
  quickSort(Ar,0,8);
  cout<<"Data yang telah diurutkan: "<<endl;
  for(int i=0; i<8;i++){
    cout<<setw(3)<<Ar[i];
  }
  cout<<endl;
}
void quickSort(int arr[], int left, int right){
  int i = left, p = right;
  int tmp;
  int pivot = arr[(left + right) / 2];
  while (i <= p) {
    while (arr[i] < pivot)
      i++;
      while (arr[p] > pivot)
      p--;
        if (i <= p) {
          tmp = arr[i];
          arr[i] = arr[p];
          arr[p] = tmp;
          i++;
          p--;
        }
    };
  if (left < p){
    quickSort(arr, left, p);
  }
  if (i < right){
    quickSort(arr, i, right);
  }
}
