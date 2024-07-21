#include <iostream>
#include <fstream>

using namespace std;

int main(){

  ofstream myfile;

  // ios::out = default, operasi output;
  // iost::app = menuliskan pada akhir baris;
  // iost::strunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus;

  myfile.open("data 3.txt", ios::app); //append
  myfile << "\nmenuliskan baris baru pada data3";
  myfile.close();

  int a = 123876;
  myfile.open("data1.txt", ios::out);
  myfile << "menuliskan baris baru pada data1\n";
  myfile << a ;
  myfile.close();

  myfile.open("data2.txt", ios::trunc);
  myfile << "\nmenuliskan baris baru pada data2";
  myfile.close();

  cin.get();
  return 0;
}