#include <iostream>
using namespace std;

int main(){
    int y = 20;

    int *yPtr;
    yPtr = &y;
    
    cout << "Dirección de memoria" << yPtr << endl;

    *yPtr = 500;
    cout << y << endl;

    
    cout << "Operador de inderección: " << *yPtr << endl;

    int x = 100;
    yPtr = &x;
    *yPtr = 300;

    cout << "Dirección de memoria" << yPtr << endl;
    cout << "operador de inderección: " << *yPtr << endl;
    return 0;
}