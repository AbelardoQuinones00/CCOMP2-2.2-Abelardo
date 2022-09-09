#include <iostream>
using namespace std;

//Integer Equivalents of a Character

int main() {
    char var;

    cout << "Escribe un caracter: ";
    cin >> var; 
    cout << static_cast<int>(var);
    
    return 0;

}