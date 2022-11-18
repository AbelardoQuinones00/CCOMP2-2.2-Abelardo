#ifndef __POLYGON_H___
#define __POLYGON_H___
#include <iostream>

class Polygon {
    protected:
        int width, height;
    public:
        Polygon(int a, int b):width(a), height(b){}
        virtual int area() = 0;
        void printarea(){
            std::cout << this->area() << '\n';
        } 
        
        void setWidht(int width){
            this-> width = width;
        }
        int getWidth() const{
            return width;
        }

        void setHeight(int ){
            this-> height = height;
        }
        int getHeight() const{
            return height;
        }
};
#endif