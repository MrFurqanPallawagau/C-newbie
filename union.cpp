#include <iostream>
using namespace std;

// Mendefinisikan union dengan nama 'nama' yang memiliki dua anggota: int_value dan char_value
union nama {
  int int_value;       // Menyimpan nilai integer
  char char_value[4];  // Menyimpan array karakter berukuran 4
};

int main() {
  nama Otong;  // Mendeklarasikan variabel union 'Otong' dengan tipe 'nama'

  Otong.int_value = 12345642;  // Mengisi anggota int_value dengan nilai 12345642

  // Menampilkan nilai dari int_value dan char_value
  cout << "data int_value: " << Otong.int_value << endl;
  cout << "data char_value: " << Otong.char_value << endl;

  // Mengisi array char_value dengan karakter 'a', 'b', 'c', dan 'd'
  Otong.char_value[0] = 'a';
  Otong.char_value[1] = 'b';
  Otong.char_value[2] = 'c';
  Otong.char_value[3] = 'd';

  // Menampilkan nilai dari int_value dan char_value setelah perubahan pada char_value
  cout << "data int_value: " << Otong.int_value << endl;
  cout << "data char_value: " << Otong.char_value << endl;

  cin.get();  // Menunggu input sebelum menutup program (untuk memastikan output tetap terlihat pada terminal tertentu)
  return 0;   // Mengakhiri program
}
