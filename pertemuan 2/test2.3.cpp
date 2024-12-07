#include <iostream>
using namespace std;
int main() {
int a, b;
a = 25;
b = 70;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "\nSetelah a += b;\b" << endl;
cout << "\nSetelah a += b;\f" << endl;
cout << "\nSetelah a += b;\n" << endl;
cout << "\nSetelah a += b;\r" << endl;
cout << "\nSetelah a += b;\t" << endl;
cout << "\nSetelah a += b;\v" << endl;
cout << "\nSetelah a += b;\\" << endl;
cout << "\nSetelah a += b;\'" << endl;
cout << "\nSetelah a += b;\"" << endl;
cout << "\nSetelah a += b;\?" << endl;
cout << "\nSetelah a += b;\0" << endl;
a += b; // a = a +b
cout << "a = " << a << endl;
return 0;
}
