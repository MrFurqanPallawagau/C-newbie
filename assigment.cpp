#include <iostream>

using namespace std;

int main()
{

  // assigment
  int a = 10;

  cout << "nilai awal dari a adalah" << a << endl;

  a += 3;
  cout << "ditambah 3 menjadi" << a << endl;

  a -= 3;
  cout << "dikurangi 3 menjadi" << a << endl;

  a /= 3;
  cout << "dibagi 3 menjadi" << a << endl;

  a *= 3;
  cout << "dikali 3 menjadi" << a << endl;

  a %= 3;
  cout << "dimodulus 3 menjadi" << a << endl;

  cin.get();
  return 0;
}