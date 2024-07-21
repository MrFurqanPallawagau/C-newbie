#include <iostream>
using namespace std; // Perbaiki kesalahan pengetikan di sini

int main()
{
  int n;

  cout << "masukkan panjang bola: ";
  cin >> n;

  cout << "Pola 1\n";

  for(int i = 1; i <= n; i++){ // Tambahkan spasi antara ; dan i
    for(int j = 1; j <= i; j++){ // Tambahkan spasi antara ; dan j
      cout << "*";
    }
    cout << endl;
  }

  cout << "Pola 2\n";

  for(int i = 1; i <= n; i++){ // Tambahkan spasi antara ; dan i
    for(int j = n; j >= i; j--){ // Tambahkan spasi antara ; dan j
      cout << "*";
    }
    cout << endl;
  }

  cout << "pola 3\n";

  for(int i = 1; i <= n; i++){
    for(int j = 1; j < i; j++){
      cout << " ";
    }
    for(int k = n; k >= i; k--){
      cout << "*";
    }
    cout << endl;
  }
  cout << "pola 4\n";

  for(int i = 1; i <= n; i++){
    for(int j = n; j > i; j--){
      cout << " ";
    }
    for(int k = 1; k <= i; k++){
      cout << "*";
    }
    cout << endl;
  }
  cout << "pola 5\n";

  for(int i = 1; i <= n; i++){
    for(int j = n; j > i; j--){
      cout << " ";
    }
    for(int k = 1; k <= (2*i - 1); k++){
      cout << "*";
    }
    cout << endl;
    }
     cout << "pola 6\n";

  for(int i = 1; i <= n; i++){
    for(int j = 1; j < i; j++){
      cout << " ";
    }
    for(int k = n; k >= (2*i - n); k--){
      cout << "*";
    }
    cout << endl;
  }
  cout << "Pola 7\n";

	for(int i = 1; i <= n; i++){
		for(int j = n; j > i; j--){
			cout << " ";
		}
		for(int k = 1; k <= (2*i - 1); k++){
			cout << "*";
		}
		cout << endl;
	}

	for(int i = 2; i <= n; i++){
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		for(int k = n; k >= (2*i - n); k--){
			cout << "*";
		}
		cout << endl;
	}


  cin.get();
  return 0;
}
