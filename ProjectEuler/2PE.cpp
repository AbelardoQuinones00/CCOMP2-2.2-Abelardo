#include <iostream>
using namespace std;

// Even Fibonacci numbers

int main(){
    int f1 = 1, f2 = 2;
    int fibb = 0, sum = 3;

    while (fibb < 4000000){
        
        sum = sum + fibb;
        fibb = f1 + f2;

        if(f2 > 4000000)
            break;

        f1 = f2;
        f2 = fibb;

    }
    cout << sum << endl;
    cout << "F1: " << f1 << endl;
    cout << "F2: " << f2 << endl;
    cout << "Fibbonacci: " << fibb << endl;
    return 0;
}