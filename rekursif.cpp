#include <iostream>
using namespace std;

// fungsi rekursif terbatas
int pangkatiterasi(int a, int b){
  int hasil = a;
  for(int i = 1; i < b; i++){
    hasil = hasil * a;
  }
  return hasil;
}

int pangkatRekursif(int a,int b){
  if (b <= 1){
    cout << "akhir dari rekursif\n";
    return a;
  }else{
    cout << "rekursif\n";
    return a * pangkatRekursif(a,(b - 1));
  }
}

int main(){
  int a;
  int b;
  cout << "angka: ";
  cin >> a;
  cout << "pangkat: ";
  cin >> b;
  cout << "hasil iterasi = " << pangkatiterasi(a,b) << endl;
  cout << "hasil rekursif = " << pangkatRekursif(a,b) << endl;

  cin.get();
  return 0;
}