#include <iostream>
using namespace std;

// Odd and Even
// Aquí yo ya mismo lo hago :D

int main() {
    int a, b, sum;
    cin >> a >> b;
    sum = a + b;
    cout << a << "\n" << b;
    if (sum % 2 == 1)
        cout << "\n La suma de a+b es un número impar";
    else
        cout << "\n La suma de a+b es un número par" << endl;
    
    return 0;
}