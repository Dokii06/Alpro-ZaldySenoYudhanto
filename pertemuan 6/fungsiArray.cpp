#include <iostream>
using namespace std;

//contoh 1
void display(int n[5]){
    cout << "Tampilkan nilai: " << endl;
    for (int i = 0; i < 5; ++i){
        cout << "Mahasiswa " << i + 1 << ": " << n[i] << endl;
    }
}

//conoth 2
void display2(int n[][2]){
    cout << "\n\nTampilkan data: " << endl;
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 2; ++j){
            cout << "bil[" << i << "][" << j << "]: " << n[i][j] << endl;
        }
    }
}
//contoh 1
int main(){
    int nilai[5] = {88, 76, 90, 61, 69};
    display(nilai);


//contoh 2
    int bil[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1}
        };
    display2(bil);
    return 0;
}

