#include <iostream>
using namespace std;

void cuboPorRefconPtrs(int* ptr){
    *ptr = *ptr * *ptr * *ptr;
}

void intercambio(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int z = 4;
    cuboPorRefconPtrs(&z);
    cout << z << endl;

    int x = 20;
    int y = 40;
    intercambio(&x,&y);
    cout << x << endl; // 40
    cout << y << endl; // 20

    return 0;
}
