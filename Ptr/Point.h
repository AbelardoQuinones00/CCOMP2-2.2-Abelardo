#ifndef _POINT_H_
#define _POINT_H_
#include <iostream>
using namespace std;

class Point{
    public:
        Point(int _x = 0, int _y=0) : x(_x), y(_y){
            //cout << "Constructor" << std::endl;
        }
        ~Point(){
            //cout << "Destructor" << std::endl;
        }
        void set(int _x){
            x = _x;
        }
        int getX() const{
            return x;
        }
        void setY(int _y){
            y = _y;
        }
        int getY() const{
            return y;
        }
        void print() const{
            cout << "(" << x << ", " << y << ")";
        }
    private:
        int x, y;

        
};

#endif