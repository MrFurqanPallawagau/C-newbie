#include <iostream>
using namespace std;

void swap(int A, int B){
    int temp = A;
    A = B;
    B = temp;
}


int main(){
    int N, T, baris1[1001], baris2[1001];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> baris1[i];
    }
    for(int i = 0; i < N; i++){
        cin >> baris2[i];
    }
    cin >> T;
    for(int i = 0; i < T; i++){
        char P, Q;
        int x = 0, y = 0;
        cin >> P >> x >> Q >> y;
         if(P == 'A' && Q == 'B'){
             swap(baris1[x-1], baris2[y-1]);
         }
         else if(P == 'A'){
             swap(baris1[x-1], baris2[x-1]);
         }
         else if(P == 'B' && Q == 'A'){
             swap(baris2[x-1], baris1[y-1]);
         }
         else{
             swap(baris2[x-1], baris1[y-1]);
         }
    }
    for(int i = 0; i < N; i++){
        cout << baris1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < N; i++){
        cout << baris2[i] << " ";
    }

}