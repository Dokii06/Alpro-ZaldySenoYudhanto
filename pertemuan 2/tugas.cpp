#include<iostream>

using namespace std;
int main() {
    //Memberikan nama sebuah variabel
    int firstValue,secondValue,thirdValue;
    int bebek,teman,hasilBebek,sisaBebek;

    //Mengisi sebuah variabel
    firstValue = 10;
    secondValue = 8;
    bebek = 79;
    teman = 6;

    //Pembatas
    cout<<"Tugas 1\n";
    for (int i = 0; i<100; i++){
        cout << "-";
    }

    //memanggil sebuah variabel sebelum ditukar
    cout<< "\nIni adalah variabel 1 dan 2 sebelum ditukar :\n";
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
    cout<< "Variabel 2: " <<secondValue <<endl<<endl<<endl;

    //pembatas
    for (int i = 0; i<100; i++){
        cout << "-";
    }
    cout<< "\nTugas 2\n";
        for (int i = 0; i<100; i++){
        cout << "-";
    }


    //Memberi tahu jumlah bebek dan teman yang pak tatang miliki
    cout<< "\nJumlah bebek yang dimiliki oleh Pak Tatang saat ini adalah "<<bebek<<endl;
    cout<< "Jumlah teman yang akan dibagikan seekor bebek oleh Pak Tatang berjumlah "<<teman<<endl<<endl;

    //Mengoprasikan pembagian bebek dengan jumlah teman
    hasilBebek = bebek/teman;
    cout<< "Karna Pak Tatang sedang berulang tahun, maka Pak Tatang berencana membagikan bebek bebeknya kepada teman - temanya.\n";
    cout<< "Bebek yang bisa dibagikan Pak Tatang kepada teman temanya adalah sebanyak "<< hasilBebek <<endl;

    //Mengoprasikan sisa bebek yang pak tatang miliki setelah dibagikan kepada teman-temanya
    sisaBebek = bebek%teman;
    cout<< "Sisa bebek yang masih dimiliki Pak tatang sekarang adalah "<< sisaBebek<<endl<<endl<<endl;

    //pembatas
    for (int i = 0; i<100; i++){
        cout << "-";
    }

    return 0;
}


