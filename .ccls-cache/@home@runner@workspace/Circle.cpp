#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

Circle::Circle(double xCenter, double yCenter, double radius, string name) {
    this->xCenter = xCenter;
    this->yCenter = yCenter;
    this->radius = radius;
    setName(name);
    calcArea();
    
}

void Circle::calcArea() {
    setArea(3.14159 * radius * radius);
}


double Circle::getXCenter() const {
    return xCenter;
}

double Circle::getYCenter() const {
    return yCenter;
}

double Circle::getRadius() const {
    return radius;
}
