#include<iostream>
using namespace std;

int main(){
    //membuat variabel
    int instruksi;

    cout<< "Halo, hari ini ingin menghitung luas apa?\n ";
    cout<< "1 untuk persegi\n 2 untuk persegi panjang\n 3 untuk segitiga\n\n";
    //menginput sebuah perintah dari instruksi yang sudah disediakan
    cout<< "Luas yang ingin dicari : ";
    cin>>instruksi;

    //pengkondisian dari instruksi yang akan dicabangkan sesuai yang diinput oleh pengguna
    switch(instruksi){
        //jika pengguna menginputkan 1 diawal maka akan diminta menginput panjang sisi sebuah persegi
        case 1:
            //memasukan variabel
            int s, lPersegi;

            //menginput nilai
            cout<< "\nMasukan Panjang Sisi Persegi : ";
            cin>>s;
            //pengoperasian sebuah variabel dan kemudian akan dipanggil
            lPersegi = s*s;
            cout<< "Maka Luas dari persegi adalah "<<lPersegi;
            //break digunakan agar pengkondisian berhenti di satu case
            break;

        //jika pengguna menginputkan 2 diawal maka akan diminta menginput panjang dan lebar dari sebuah persegi panjang
        case 2:
            //memasukan variabel
            int p,l,lPersegiPanjang;

            //menginput nilai
            cout<< "\nMasukan Panjang Persegi Panjang : ";
            cin>>p;
            cout<< "Masukan Lebar Persegi Panjang : ";
            cin>>l;
            //pengoperasian sebuah variabel dan kemudian akan dipanggil
            lPersegiPanjang = p*l;
            cout<< "Maka Luas Persegi Panjang adalah "<<lPersegiPanjang;
            //break digunakan agar pengkondisian berhenti di satu case
            break;

        //jika pengguna menginputkan 3 diawal maka akan diminta menginput alas dan tinggi dari sebuah segitiga
        case 3:
            //memasukan data
            int a,t,lSegitiga;

            //menginput nilai
            cout<< "\nMasukan Panjang Alas Segitiga : ";
            cin>>a;
            cout<< "Masukan Tinggi Segitiga : ";
            cin>>t;
            //pengoperasian sebuah variabel dan kemudian akan dipanggil
            lSegitiga = 0.5*a*t;
            cout<< "Maka Luas Segitiga Adalah "<<lSegitiga;
            //break digunakan agar pengkondisian berhenti di satu case
            break;

        //pengkondisian dimana jika input diawal saat bukan 1,2, atau 3 maka akan dipanggil sebuah tindakan lain atau bisa dibilang default adalah sebuah else dari switch case
        default:
            cout<< "Maaf anda salah menginput perintah. Coba input dengan insturksi yang sudah disediakan.\n";
    }

    return 0;
}
