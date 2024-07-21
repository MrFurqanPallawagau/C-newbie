#include <iostream>

using namespace std;

int main()
{
  int a;

  cout << "masukkan nilai =";
  cin >> a;

  switch(a) {
    case 1:
        cout << "a = 1" << endl;
        break; // Berhenti di sini jika a == 1
    case 2:
        cout << "a = 2" << endl;
        // Tidak ada break, jatuh ke case 3
    case 3:
        cout << "a = 3" << endl;
        // Tidak ada break, jatuh ke case 4
    case 4:
        cout << "a = 4" << endl;
        // Tidak ada break, jatuh ke case 5
    case 5:
        cout << "a = 5" << endl;
        // Tidak ada break, jatuh ke default
    default:
        cout << "default" << endl;
        // Tidak perlu break di sini karena ini adalah akhir dari switch
  }
  cout << "akhir dari program" << endl;

  return 0;
}
