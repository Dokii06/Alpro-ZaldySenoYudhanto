#include <iostream>
using namespace std;

//sebagai variabel agar fungsi bisa dipanggil dari bawah
void ganjil(int n);
void genap (int n);
void prima (int n);
void pembatas();

int main(){
    int batas;//membuat variabel

    //menginput data
    cout << "Masukan Batas Bilangan : ";
    cin >> batas;

    //pemanggilan fungsi
    pembatas();
    ganjil(batas);
    genap(batas);
    prima(batas);
}

//fungsi untuk memanggil bilangan ganjil, jumlah semua bilangan ganjil dan faktor dari jumlah semua bilangan ganjil
void ganjil(int n){
    int sum = 0;
    cout << "\nBilangan ganjil : ";
    for(int i = 1; i <= n; i++){
        if(i%2 != 0){
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nJumlah semua bilangan ganjil : " << sum << " ";
    cout << "\nFaktor dari jumlah semua bilangan ganjil : ";
    for(int j = 1; j <= sum; j++){
        if(sum%j == 0){
            cout << j << " ";
        }
    }
    cout << endl;
    pembatas();
}

//fungsi untuk memanggil bilangan genap, jumlah semua bilangan genap dan faktor dari jumlah semua bilangan genap
void genap(int n){
    int sum = 0;
    cout << "\nBilangan genap : ";
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nJumlah semua bilangan genap : " << sum << " ";
    cout << "\nFaktor dari jumlah semua bilangan genap : ";
    for(int j = 1; j <= sum; j++){
        if(sum%j == 0){
            cout << j << " ";
        }
    }
    cout << endl;
    pembatas();
}

//fungsi untuk memanggil bilangan prima, jumlah semua bilangan prima dan faktor dari jumlah semua bilangan prima
void prima(int n){
    int sum = 0;
    cout << "\nBilangan Prima : ";
    for(int i = 1; i <= n; i++){
        int mod = 0;
        for(int j = i; j > 0; j--){
            int sisaBagi = i%j;
            if( sisaBagi == 0){
                mod++;
            }
        }
        if( mod == 2 ){
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nJumlah semua bilangan prima : " << sum << " ";
    cout << "\nFaktor dari jumlah semua bilangan prima : ";
    for(int k = 1; k <= sum; k++){
        if(sum%k == 0){
            cout << k << " ";
        }
    }
    cout << endl;
    pembatas();
}

//sebagai funsgi penghias agar rapih
void pembatas(){
    for(int i = 1; i <= 100; i++){
        cout << "-";
    }
}
