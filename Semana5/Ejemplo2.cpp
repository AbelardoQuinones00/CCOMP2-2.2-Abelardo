#include <iostream>
#include "Point.h"
using namespace std;
/* Implemente una funcion que recibe dos números e intercambia
el valor de dichos números
*/
void intercambio(int &a, int &b){
    int tmp = a;
    a = b; 
    b = tmp; 
}
void imprimirPoint(Point p) {
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
}
void intercambioPoint(Point &p1, Point &p2){
    int p1x = p1.getX();
    int p1y = p1.getY();
    p1.setX(p2.getX());
    p1.setY(p2.getY());
    p2.setX(p1x);
    p2.setY(p1y);
}
int main(){
    int a = 20;
    int b = 40;
    intercambio(a,b);
    cout << a << endl;
    cout << b << endl;
    Point p1(4,5);
    Point p2(9,2);
    imprimirPoint(p1);   
    imprimirPoint(p2);
    intercambioPoint(p1,p2);
    imprimirPoint(p1);   
    imprimirPoint(p2);
    return 0;
}