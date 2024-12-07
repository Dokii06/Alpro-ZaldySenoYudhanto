#include <iostream>
using namespace std;

int main(){
    //pendeklarasian array dengan deklarasi
    int angka[5];
    angka[0] = 10;
    angka[1] = 20;
    angka[2] = 30;
    angka[3] = 40;
    angka[4] = 50;

    cout << "Nilai dalam array adalah : ";

    for (int i = 0;i < 5;i++){
        cout << angka[i] << " ";
    }
    //pendeklarasian array secara langsung
    int angka2[5]={10,20,30,40,50};

    cout << "\n\nNilai dalam array yang ke 2 adalah : ";

    for (int i = 0;i < 5; i++){
        cout << angka2[i] << " ";
    }
    //memasukan nilai dalam array
    int nilai[5];
    cout << "\n\nMasukan 5 nilai mahasiswa : " << endl;
    for(int i = 0; i < 5; i++){
        cout << "Nilai ke-" << i << ":";
        cin >> nilai[i];
    }
    cout << "Nilai mahasiswa UNSIKA: " << endl;
    for(int n = 0; n < 5; n++){
        cout << "Nilai ke-" << n << ":";
        cout << nilai[n] << endl;
    }
    return 0;
}
