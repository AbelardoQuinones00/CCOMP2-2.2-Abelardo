#include <iostream>
using namespace std;

// Diameter, Circunference and Area of a Circle

int main() {

/*cin  radio ciruclo
*imprime el diametro, circunferencia y area del circulo
*Pi = a 3.14159
*/

int radio;

cout << "Ingrese radio: " << endl;
cin >> radio;

cout << "\nDiámetro: " << radio*2 << endl;
cout << "Circunferencia: " << 2*radio*3.14159 << endl;
cout << "Área: " << 3.14159*(radio^2) << endl;

return 0;
}