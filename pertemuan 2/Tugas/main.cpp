#include<iostream>

using namespace std;
int main() {
    //Memberikan nama sebuah variabel
    int firstValue,secondValue,thirdValue;

    //Mengisi sebuah variabel
    firstValue = 10;
    secondValue = 8;

    //memanggil sebuah variabel sebelum ditukar
    cout<< "Ini adalah variabel 1 dan 2 sebelum ditukar :\n";
    cout<< "Variabel 1: " <<firstValue <<endl;
    cout<< "Variabel 2: " <<secondValue <<endl<<endl;

    //Ini digunakan untuk mengukar variabel dengan menggunakan variabel tambahan
    thirdValue = firstValue;
    firstValue = secondValue;
    secondValue = thirdValue;

    //Ini digunakan untuk memanggil variabel 1 dan variabel 2 yang sudah kita tukar
    cout<< "Menukar variabel menggunakan variabel tambahan\n";
    cout<< "Variabel 1: " <<firstValue <<endl;
    cout<< "Variabel 2: " <<secondValue <<endl<<endl;

    //Ini digunakan untuk mengembalikan variabel ke posisi semula agar kita bisa mengubah variabel tanpa variabel tambahan
    thirdValue = secondValue;
    secondValue = firstValue;
    firstValue = thirdValue;

    //Ini digunakan untuk menukar variabel tanpa mengubah variabel tambahan
    secondValue = firstValue + secondValue;
    firstValue = secondValue - firstValue;
    secondValue = secondValue - firstValue;

    //Ini digunkan untuk memanggil variabel 1 dan 2 yang sudah kita tukar
    cout<< "Menukar variabel tanpa menggunakan variabel tambahan\n";
    cout<< "Variabel 1: " <<firstValue <<endl;
    cout<< "Variabel 2: " <<secondValue <<endl;

    return 0;
}


