#ifndef __RECTANGLE_H___
#define __RECTANGLE_H___
#include "Polygon.h"
#include <iostream>

class Rectangle : public Polygon {
    
    public:
        Rectangle(int a, int b) : Polygon(a,b){}
        int area(Rectangle t){
            return (t.getWidth() * t.getHeight())/2;
        }
};
#endif