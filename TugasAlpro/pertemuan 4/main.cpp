#include <iostream>
using namespace std;

int main(){
    //membuat variabel
    int batas;
    //mendeklarasikan variabel
    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    //menginput batas bilangan positif
    cout << "Masukan batas bilangan positif : ";
    cin >> batas;
    //pengulan "-" agar rapih
    for(int i=1; i <= 100; i++){
        cout << "-";
    }
    //memanggil bilangan ganjil
    cout << "\nBilangan Ganjil \t\t: ";
    //pengulangan untuk mendapatkan sebuah bilangan ganjil
    for(int ganjil = 1; ganjil <= batas; ganjil++)
        if(ganjil%2 != 0){
            //memanggil bilangan ganjil
            cout << ganjil << " ";
            //mengoprasikan semua bilangan ganjil
            jumlahGanjil += ganjil;
    }
    //memanggil jumlah semua bilangan ganjil
    cout << "\nJumlah Semua Bilangan Ganjil \t: " << jumlahGanjil << endl;
    //memanggil faktor dari jumlah semua bilangan ganjil
    cout << "Faktor dari " << jumlahGanjil << " \t\t\t: ";
    //pengulangan untuk memfaktorkan jumlah bilangan
    for(int faktor = 1; faktor <= jumlahGanjil; faktor++){
        if(jumlahGanjil%faktor == 0){
            //memanggil faktor yang sudah dioperasikan
            cout << faktor << " ";
        }
    }
    cout << endl;
    //pengulangan garis
    for(int j=1; j <= 100; j++){
        cout << "-";
    }
    //memanggil bilangan genap
    cout << "\nBilangan Genap \t\t\t: ";
    //pengulangan untuk mendapatkan bilangan genap
    for(int genap = 1; genap <= batas; genap++)
        if(genap%2 == 0){
            //memanggil bilanan genap yang sudah dicari
            cout << genap << " ";
            //pengoprasian untuk mendapatkan semua jumlah bilangan bulat yang sudah didapatkan
            jumlahGenap += genap;
    }
    //memanggil jumlah semua bilangan genap
    cout << "\nJumlah Semua Bilangan Genap \t: " << jumlahGenap << endl;
    //memanggil faktor dari semua jumlah bilangan genap
    cout << "Faktor dari " << jumlahGenap << " \t\t\t: ";
    //pengulangan untuk memfaktorkan jumlah bilangan
    for(int faktor = 1; faktor <= jumlahGenap; faktor++){
        if(jumlahGenap%faktor == 0){
            //memanggil faktor dari bilangan genap yang sudah kita oprasikan
            cout << faktor << " ";
        }
    }
    //pengulangan garis
    for(int j=1; j <= 100; j++){
        cout << "-";
    }
    cout << endl;
    //memanggil pernyataan
    cout << "\nBilangan Prima \t\t\t: ";
    //pengulangan untuk mendapatkan bilangan prima
    for(int prima = 1; prima <= batas; prima++){
        int mod = 0;
        for(int a = prima; a > 0; a--){
            int sisaBagi=prima%a;
            if(sisaBagi == 0 ){
                mod++;
            }
        }
        //pengecekan agar bilangan bisa dikatakan prima
        if (mod == 2){
            //memanggil bilangan prima yang sudah kita cari
            cout << prima << " ";
            //pengoprasian untuk menjumlahkan semua bilangan prima
            jumlahPrima += prima;
        }
    }
    //memanggil jumlah semua bilangan prima
    cout << "\nJumlah Semua Bilangan Prima \t: " << jumlahPrima << endl;
    //memanggul faktor dari jumlah bilangan prima
    cout << "Faktor dari " << jumlahPrima << " \t\t\t: ";
    //pengulangan agar memfaktorkan jumlah bilangan prima
    for(int faktor = 1; faktor <= jumlahPrima; faktor++){
        if(jumlahPrima%faktor == 0){
            //memanggil faktor yang sudah dioprasikan
            cout << faktor << " ";
        }
    }
    cout << endl;
    //pengulangan garis
    for(int j=1; j <= 100; j++){
        cout << "-";
    }


return 0;
}
