#include<iostream>
using namespace std;

int  fungsiPengembalianNilai(int x)
{
    return 100 + x;
}
int main()
{
    int x;
    cout << "Masukan Nilai X : " ;
    cin >> x;
    cout << fungsiPengembalianNilai(x);
    return 0;
}
