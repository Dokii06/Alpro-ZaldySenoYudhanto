#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Masukkan tinggi segitiga siku-siku: ";
    cin >> n;
    char currentChar = 'A';
        for (int i = n; i >= 1; i--){
            for (int j = n; j > i; j--){
                cout << " ";
            }
        for (int k = 1; k <= i; k++){
            cout << currentChar << " ";
            currentChar++;
        }
    cout << endl;
    }
    return 0;
}

