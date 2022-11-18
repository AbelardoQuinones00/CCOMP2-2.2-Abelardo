#ifndef __TRIANGLE_H___
#define __TRIANGLE_H___
#include "Polygon.h"
#include <iostream>

class Triangle : public Polygon {
    
    public:
        Triangle(int a, int b) : Polygon(a,b){}
        int area(Triangle t){
            return t.getWidth() * t.getHeight();
        }
};
#endif