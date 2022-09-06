#include <iostream>
using namespace std;

// Factors

int main() {
    int a, b, c;

    cout << "Ingrese 3 numeros: " << endl;
    cin >> a >> b >> c;
    if (c % a == 0 && c % b == 00)
        cout << "a = " << a << " y b = " << b << " son factores de " << c;
    else
        cout << "a = " << a << "b = " << b << " no son factores de " << c;

    return 0;
}