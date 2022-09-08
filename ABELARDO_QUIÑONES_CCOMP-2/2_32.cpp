#include <iostream>
using namespace std;

// Maximal Heart Rate Calculator

int main() {

    int age, int MHR;
    cout << "Ingrese su edad para mostrarle su evaluación de ejercicios: ";
    cin >> age;
    MHR = 220 - age/10;
    cout << "La cantidad de ejercicios que debería de hacer es: " << MHR << endl;
    cout << "Le sugerimos también:" << endl;
    cout << "MHR 2001" << endl;
    MHR = 208 - age/10;
    cout << "Ejercicios: " << MHR <<endl;
    cout << "\nMHR 2007" << endl;
    MHR = 207 - age/10;
    cout << "Ejercicios: " << MHR <<endl;
    cout << "\nMHR 2012" << endl;
    MHR = 211 - age/10;
    cout << "Ejercicios: " << MHR <<endl;
    return 0;
}