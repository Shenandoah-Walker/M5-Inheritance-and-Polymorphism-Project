#include "BasicShape.h"
#include <iostream>
#include <string>

using namespace std;

double BasicShape::getArea() const {
    return area;
}

string BasicShape::getName() const {
    return name;
}

void BasicShape::setArea(double area) {
    this->area = area;
}

void BasicShape::setName(string name) {
    this->name = name;
}