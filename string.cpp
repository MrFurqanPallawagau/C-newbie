#include <iostream>
#include <string>
using namespace std;

int main(){

  // char kata[5] = {'m','o','b','i','l'};
  // array char tidak bisa kita tambah, fiks karena array

  string kata("cat");
  cout << kata << endl;

  string data;
  cout << "masukkan kata" << endl;
  cin >> data ;
  cout << "data yang dimasukkan adalah: " << endl;
  cout << data << endl;

  cin.get();
  return 0;
}