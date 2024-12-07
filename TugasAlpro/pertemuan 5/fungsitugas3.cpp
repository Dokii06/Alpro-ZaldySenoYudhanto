#include <iostream>
using namespace std;

//fungsi untuk deret fibonaci
void fibonaci(int n){ //menyatakan bahwa fungsi kosong dan memiliki tipe data int n agar nanti bisa diinputkan oleh pengguna
    //membuat  sebua variabel
    int u1 = 1;
    int u2 = 0;
    int un;

    cout << "\nProgram Deret Fibonaci\n"; //memanggil pesan
    cout << u1 << " "; // memanggil u1 yang bernilai 1 dan memberi spasi

    //perulangan untuk deret fibonaci, dimana sebelum i mencapai batas i akan di incrementkan dan bilangan kedua akan ditambah bilangan sebelumnya. begitu seterusnya
    for (int i = 1; i < n; i++){
        un = u1 + u2;
        cout<< un << " ";
        u2 = u1;
        u1 = un;
    }
}
int main(){
    int batas;//membuat variabel

    //membuat inputan data batas bilangan
    cout << "Masukan Batas Bilangan: ";
    cin >> batas;

    fibonaci(batas);//memanggil fungsi deret fibonaci yang sudah kita buat
    cout << endl;
    return 0;
}
