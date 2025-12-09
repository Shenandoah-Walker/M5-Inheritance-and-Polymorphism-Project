#include "Square.h"
#include <iostream>
#include <string>

using namespace std;

Square::Square(double side, string name) : Rectangle(side, side, name) {
    this->side = side;
    setName(name);
    calcArea();
}

double Square::getSide() const {
    return side;
}