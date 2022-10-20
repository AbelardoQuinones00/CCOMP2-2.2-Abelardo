#include <iostream>
using namespace std;

int main(){
    int a{7};
    int *aPtr = &a;
        
    cout << "La dirección de la variable a es " << &a << "\nEl valor de a es " << *aPtr << endl;
    return 0;
}

