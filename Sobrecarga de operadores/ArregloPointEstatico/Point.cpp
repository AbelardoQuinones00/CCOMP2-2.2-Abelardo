#include "Point.h"

void Point::setX(int _x) {
    x = _x;
}
int Point::getX() const {
    return x;
}
void Point::setY(int _y) {
    y = _y;
}
int Point::getY() const {
    return y;
}

void Point::print() const {
    std::cout << "(" << x << ", " << y << ")";
}

std::ostream& operator<<(std::ostream &output, const Point &p) {
    output << "(" << p.x << ", " << p.y << ")";
    return output;
}