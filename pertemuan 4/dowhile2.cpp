#include <iostream>
using namespace std;
int main(){
    int batas;
    do{
    cout << "Masukkan batas bilangan positif untuk mencari bilangan prima: ";
    cin >> batas;
    } while (batas <= 0);
        cout << "Bilangan prima antara 1 dan " << batas << " adalah: ";
        for (int i = 2; i <= batas; ++i){
            int bilanganPrima = 1;
            for (int j = 2; j * j <= i; ++j){
                if (i % j == 0){
                bilanganPrima = 0;
                }
        }
        if (bilanganPrima == 1){
        cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
