#include "Rectangle.h"
#include <iostream>
#include <string>

using namespace std;

Rectangle::Rectangle(double length, double width, string name) {
    this->length = length;
    this->width = width;
    setName(name);
    calcArea();
}

void Rectangle::calcArea() {
    setArea(length * width);
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}