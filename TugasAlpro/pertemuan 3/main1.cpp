#include<iostream>
using namespace std;

int main(){
    //membuat variabel
    int nilai;
    //menginput sebuah nilau yang kemudian akan disimpan di variabel yang sudah kita buat
    cout<< "Masukan Nilai:";
    cin>>nilai;
    //pengkondisian dimana nilai sama dengan 90 atau lebih makan akan masuk ke kondisi if ini dan melakukan sebuah tindakan jika kondisi nilai lebih dari sama dengan 90 terpenuhi
    if(nilai>=90){
        cout<< "Selamat! Anda mendapatkan nilai A"<<endl;
    }
    //pengkondisian dimana nilai yang tidak masuk di kondisi awal, maka jika terpenuhi di kondisi ini maka akan memanggil sebuah tindakan dan melakukan sebuah tindakan saat kondisi nilai lebih dari sama dengan 80 terpenuhi
    else if(nilai>=80){
        cout<< "Anda mendapatkan nilai B"<<endl;
    }
    //pengkondisian dimana nilai yang tidak masuk di kondisi diatas, maka jika terpenuhi di kondisi ini maka akan memanggil sebuah tindakan dan melakukan sebuah tindakan saat kondisi nilai lebih dari sama dengan 70 terpenuhi
    else if(nilai>=70){
        cout<< "Anda mendapatkan nilai C"<<endl;
    }
    //pengkondisian dimana nilai yang tidak masuk di kondisi diatas, maka jika terpenuhi di kondisi ini maka akan memanggil sebuah tindakan dan melakukan sebuah tindakan saat kondisi nilai lebih dari sama dengan 60 terpenuhi
    else if(nilai>=60){
        cout<< "Anda mendapatkan nilai D"<<endl;
    }
    //pengkondisian dimana jika nilai tidak memenuhi kondisi diatas maka akan masuk ke kondisi else ini
    else{
        //,melakukan sebuah tindakan saat kondisi tidak memenuhi kondisi if diatas
        cout<< "Anda mendapatkan nilai E"<<endl;
    }
//tambahan komentar: Kondisi if else ini akan dijalankan sesuai baris jika sudah masuk di pengkondisian awal maka tidak akan lanjut ke kondisi setelahnya
    return 0;
}
