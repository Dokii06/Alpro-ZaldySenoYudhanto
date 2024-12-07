#include<iostream>
using namespace std;

int main(){
    // Membuat sebuah variabel
    int n,un;
    // Menyatakan sebuah variabel u1=1 dan u2=0 agar saat ditambah bisa menjadi 1
    int u1 = 1;
    int u2 = 0;
    //memnaggil sebuah pernyataan
    cout << "Program Deret Fibonaci\n";
    //menginput sebuah batas bilangan untuk deret fibonaci
    cout << "Masukan Batas Bilangan Untuk Deret Fibonaci:";
    cin >> n;
    //memanggil suku pertama dari sebiah bilangan
    cout << u1 << " ";
    //pengulangan, dimana menginisialisasi bahwa i=1, lalu pengkondisian dimana jika i<n maka i akan di increment-kan
    for(int i = 1;i < n; i++){
        //pengoprasian untuk menambah u1 dengan u2
        un = u1+u2;
        //memanggil variabel un yang sudah di oprasikan
        cout << un << " ";
        //mendeklarasikan ulang agar bisa mendapat u berikutnya atau suku berikutnya agar terus bertambag
        u2 = u1;
        u1 = un;
    }
    return 0;
}
