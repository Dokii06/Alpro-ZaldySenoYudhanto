#include<iostream>

using namespace std;
int main() {
    int keliling,panjang,lebar;
    string namaDepan,namaBelakang,namaLengkap;

    cout<<"Masukan panjang:";
    cin >> panjang;

    cout<<"Masukan lebar:";
    cin>> lebar;

    keliling = 2*(panjang+lebar);
    cout<<"Keliling persegi panjang = "<<keliling<<endl;

    cout<<"Masukan nama depan:";
    cin>>namaDepan;

    cout<<"Masukan nama belakang:";
    cin>>namaBelakang;

    namaLengkap = namaDepan + " " + namaBelakang;
    cout<<"Nama lengkap anda: " << namaLengkap;

    return 0;
}
