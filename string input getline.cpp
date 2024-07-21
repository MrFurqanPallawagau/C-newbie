#include <iostream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat_input;

    // Meminta pengguna untuk memasukkan sebuah kalimat
    cout << "masukkan kalimat: ";
    // Menggunakan getline untuk membaca seluruh baris input dan menyimpannya ke variabel kalimat_input
    getline(cin, kalimat_input);

    // Menampilkan input yang diberikan oleh pengguna
    cout << "input anda: " << kalimat_input << endl;

    // Inisialisasi variabel untuk menemukan posisi spasi dalam kalimat
    int posisi = 0;
    // Inisialisasi variabel untuk menghitung jumlah kata
    int jumlah = 0;

    // Loop untuk mencari spasi dalam kalimat
    while (true) {
        // Mencari posisi spasi berikutnya setelah posisi saat ini
        posisi = kalimat_input.find(" ", posisi + 1);
        // Menambah jumlah kata
        jumlah++;
        // Jika posisi yang ditemukan kurang dari 0, artinya tidak ada lagi spasi
        if (posisi < 0) {
            break;
        }
    }

    // Menampilkan jumlah kata yang ditemukan dalam kalimat
    cout << "jumlah kata: " << jumlah << endl;

    cin.get(); // Menunggu input sebelum menutup program (untuk memastikan output tetap terlihat pada terminal tertentu)
    return 0; // Mengakhiri program
}
