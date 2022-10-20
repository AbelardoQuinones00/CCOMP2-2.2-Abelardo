#include <iostream>
using namespace std;

int main(){
    int y = 20;
    int &ref = y;
    int *ptr = &y;
    
    cout << ref << endl;
    return 0;
}

