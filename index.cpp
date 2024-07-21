#include <iostream>
#include <limits> // Menambahkan header <limits> untuk menggunakan numeric_limits

using namespace std;

int main() {
    unsigned int a = 5;
    long b = 6;
    short c = 7;

    float d = 1.0;
    double e = 2.5;

    char f = 'a';

    bool g = true;

    cout << a << endl; // Mencetak nilai a
    cout << sizeof(a) << " byte" << endl; // Mencetak ukuran a dalam byte

    // Mencetak nilai maksimum dan minimum untuk tipe unsigned int
    cout << numeric_limits<unsigned int>::max() << endl; // Menambahkan endl
    cout << numeric_limits<unsigned int>::min() << endl; // Menambahkan endl

    cin.get(); // Menunggu input sebelum program selesai
    return 0;
}


