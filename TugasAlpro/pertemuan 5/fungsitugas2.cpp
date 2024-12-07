#include <iostream>
using namespace std;

//fungsi untuk membuat segitiga sama sisi
void segitiga (int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
}

int main() {
    int tinggi;//membuat variabel

    //menginput data
    cout << "Masukkan tinggi segitiga sama sisi: ";
    cin >> tinggi;

    segitiga(tinggi);//memanggil fungsi yang sudah dibuat

    return 0;
}
