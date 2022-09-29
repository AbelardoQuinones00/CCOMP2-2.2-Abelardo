#include <iostream>
using namespace std;

int main(){
    int arreglo[4];
    arreglo[0] = 10;
    arreglo[1] = 5;
    arreglo[2] = 4;
    arreglo[3] = 8;

    for(int i = 0; i < 4; i++){
        cout << arreglo[i] << endl;
    }
    return 0;
}