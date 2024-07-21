#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program kalkulator \n\n";

    // Memasukkan input dari user
    cout << "Masukkan nilai pertama: "; // Menambahkan ":" untuk konsistensi
    cin >> a;
    cout << "Pilih operator +, -, /, *: "; // Menambahkan spasi setelah tanda ":" untuk keterbacaan
    cin >> aritmatika;
    cout << "Masukkan nilai kedua: "; // Menambahkan ":" untuk konsistensi
    cin >> b;

    cout << "\nHasil perhitungan: "; // Menambahkan spasi setelah ":" untuk keterbacaan
    cout << a << " " << aritmatika << " " << b << " = "; 

    switch(aritmatika) {
    case '+':
        hasil = a + b;
        break; // Berhenti di sini jika a == 1
    case '-':
        hasil = a - b;
        break;
        // Tidak ada break, jatuh ke case 3
    case '/':
        hasil = a / b;
        break;
        // Tidak ada break, jatuh ke case 4
    case '*':
        hasil = a * b;
        break;
        // Tidak ada break, jatuh ke case 5
    default:
        cout << "default" << endl;
        break;
        // Tidak perlu break di sini karena ini adalah akhir dari switch
  }
   

    cout << hasil << endl; 

    
    return 0;
}
