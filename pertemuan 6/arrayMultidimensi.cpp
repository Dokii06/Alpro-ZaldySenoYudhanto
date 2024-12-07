#include <iostream>
using namespace std;

int main(){
    //contoh 1
    int matrik[3][2] = {{1, 2},
                        {3, 4},
                        {5, 6}};
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 2; ++j){
            cout << "Matrik[" << i << "][" << j << "] = " << matrik[i][j] << endl;
        }
    }
    cout << endl;

    //contoh 2
    string alfabet[2][4] = {
    {"A", "B", "C", "D"},
    {"E", "F", "G", "Y"}};

    cout << alfabet[0][3];

    //contoh 3
    int bil[2][3];
    int a = 0;
    cout << "\n\nMasukkan 6 bilangan: " << endl;
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            cout << "Masukan Bilangan ke-" << a << " :";
            cin >> bil[i][j];
            a++;
        }
    }
    cout << "Bilangan: " << endl;
    for (int i = 0; i < 2; ++i){
        for (int j = 0; j < 3; ++j){
            cout << "bil[" << i << "][" << j << "]: " << bil[i][j] << endl;
        }
    }

    return 0;
}
