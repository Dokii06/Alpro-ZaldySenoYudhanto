#include<iostream>
using namespace std;

int main(){
int angka;

    do
    {
        cout << "Masukan bilangan bulat positif: ";
        cin >> angka;

        if (angka <= 0)
        {
            cout << "Bilangan harus positif. Coba lagi." << endl;
        }
    }
    while (angka <= 0);

    cout << "Anda memasukan bilangan bulat positif " << angka << endl;

    return 0;
}


