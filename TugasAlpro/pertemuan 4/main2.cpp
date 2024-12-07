#include <iostream>
using namespace std;

int main(){
    //membuat sebuah variabel
    int n;
    //menginput tinggi sebuah segitiga sama sisi
    cout << "Masukkan tinggi segitiga sama sisi: ";
    cin >> n;
    //pengulangan,  menginisialisasi bahwa i=1, lalu pengkondisian jika i<=n maka i akan di increment-kan dan masuk pengulangan berikutnya
    for (int i = 1; i <= n; i++){
        //menginisialisasi dimana j=n, lalu pengkondisian jika j>i maka j akan di decrement-kan, lalu mengeprint sebuah blankspace
        for(int j = n; j > i; j--){
            cout<< " ";
        }
        //pengulangan, menginisialisasi bahwa k=1, lalu pengkondisian jika k<=i maka k akan di increment-kan, kemudian mengeprint * dan blankspace agar berjarak
        for(int k = 1; k <= i; k++){
            cout << "*" << " ";
        }
        //mengakhiri garis agar kebawah
        cout << "\n";
    }
    return 0;
}
