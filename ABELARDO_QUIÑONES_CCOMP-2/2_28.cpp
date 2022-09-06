#include <iostream>
using namespace std;

//Digits of a Integer

int main() {
    int a, b;
    cout << "Ingrese un numero de 4 digitos" << endl;
    cin >> a;
    // 4 digitos
    b = a % 10;
    a = a / 10;
    
    // 3 digitos
    b = b * 10 + a % 10;
    a = a / 10;
    
    // 2 digitos
    b = b * 10 + a % 10;
    b = a % 10;
    a = a / 10;
    
    // 1 digito
    b = b * 10 + a % 10;

    cout << b << endl;
    return 0;
}