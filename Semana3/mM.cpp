#include <iostream>

using namespace std;

/**
 * Implemente un programa que reciba un caracter
 * e indique si es una letra, ya sea mayuscula o
 * minuscula
 */

int main() {
    char mychar;

    cout << "Ingrese su caracter:" << endl;
    cin >> mychar;
    
    int value = static_cast<int>(mychar);

    if (65 <= value && value <= 90)
        cout << "Es una mayúscula" << endl;
     
    if (97 <= value && value <= 122)
        cout << "Es una minúscula" << endl;
    else
        cout << "Es otro ASCCI, pero no una letra" << endl;

    return 0;
}