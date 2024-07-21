#include <iostream>
#include <string>

using namespace std;

// Mendefinisikan struktur untuk aktor
struct aktor{
  string nama;       // Nama aktor
  int tahun_akhir;   // Tahun akhir aktor
};

// Mendefinisikan struktur untuk film yang mencakup dua aktor
struct film{
  string judul;      // Judul film
  string genre;      // Genre film
  int tahun;         // Tahun rilis film
  // Menyertakan dua variabel aktor dalam struktur film
  aktor pemeran_1;   
  aktor pemeran_2;   
};

int main(){

  aktor aktor1, aktor2;   // Mendeklarasikan dua variabel aktor
  film film1, film2;      // Mendeklarasikan dua variabel film

  // Menginisialisasi aktor pertama
  aktor1.nama = "Michael Otong";
  aktor1.tahun_akhir = 1992;

  // Menginisialisasi aktor kedua
  aktor2.nama = "Sandra Bulog";
  aktor2.tahun_akhir = 1995;

  // Menginisialisasi film pertama dengan judul, genre, tahun, dan aktor
  film1.judul = "Pengabdi Wakanda";
  film1.genre = "Documenter";
  film1.tahun = 2018;
  film1.pemeran_1 = aktor1;
  film1.pemeran_2 = aktor2;

  // Menginisialisasi film kedua dengan judul, genre, dan tahun
  // dan hanya satu aktor
  film2.judul = "Dilan 2000";
  film2.genre = "action";
  film2.tahun = 2040;
  film2.pemeran_1 = aktor1;
  // Belum menginisialisasi pemeran_2 untuk film2

  // Menampilkan informasi film pertama
  cout << film1.judul << endl;              // Menampilkan judul film pertama
  cout << film1.pemeran_1.nama << endl;     // Menampilkan nama pemeran pertama dari film pertama
  cout << film1.pemeran_2.nama << endl;     // Menampilkan nama pemeran kedua dari film pertama

  // Menampilkan informasi film kedua
  cout << film2.judul << endl;              // Menampilkan judul film kedua
  cout << film2.pemeran_1.nama << endl;     // Menampilkan nama pemeran pertama dari film kedua
  // Mencoba menampilkan pemeran_2 yang tidak diinisialisasi
  // Jika pemeran_2 tidak diinisialisasi, ini bisa menyebabkan kesalahan
  cout << film2.pemeran_2.nama << endl;     // Menampilkan nama pemeran kedua dari film kedua (tidak diinisialisasi)

  cin.get();  // Menunggu input sebelum menutup program (untuk memastikan output tetap terlihat pada terminal tertentu)
  return 0;   // Mengakhiri program
}

