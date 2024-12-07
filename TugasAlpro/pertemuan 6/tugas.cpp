#include<iostream>
using namespace std;

int main(){
    int nilaiArray[8];
    int a = 0;

    //penginputan nilai array
    cout<< "Masukan Nilai Untuk Array dari 1-8 :\n";
    for(int i = 0; i < 8; i++){
        cout << "Masukan bilangan ke-" << a << " :";
        cin >> nilaiArray[i];
        a++;
        }
    system("cls");//agar setelah diinput layar terminal bersih dan rapih

    //untuk menunjukan isi dari array
    cout << "Menunjukan isi dari array: " << endl;
    for (int i = 0; i < 8; i++){
        cout << "nilaiArray[" << i << "] : " << nilaiArray[i] << endl;
    }

    int nilaiTertinggi = nilaiArray[0];//sebagai pembanding
    int indeks;
    //melakukan pengulangan untuk mendapatkan nilai paling tinggi
    for (int i = 1; i < 8; i++) {
        if (nilaiArray[i] > nilaiTertinggi) {
            nilaiTertinggi = nilaiArray[i];
            indeks = i;
        }
    }
    //pemanggilan nilai yang sudah kita proses
    cout << "\nNilai tertinggi dalam array adalah : " << nilaiTertinggi;
    cout << "\ndan berada di indeks ke-" << indeks << endl;

    return 0;
}


