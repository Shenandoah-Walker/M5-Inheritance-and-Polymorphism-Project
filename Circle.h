/*Derive a class from BasicShape that is called Circle. Circle has three private instance
variables, xCenter, yCenter, and radius. Define a constructor with parameters that takes
parameters x, y, and r (no defaults) and a fourth parameter, n for the name of the shape (the
default value “Circle” ). The constructor should also call the setName function from the base class
to store the name in the base class instance variable and the calcArea function that will be
defined in the Circle class.*/

#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"
#include <iostream>
#include <string>

using namespace std;

class Circle : public BasicShape {
    private:
        double xCenter;
        double yCenter;
        double radius;

    public:
        /*
        Constructor: Circle
        Purpose: To create a Circle object and initialize the data members to the values passed in.
        Parameters:
        - double xCenter
        - double yCenter
        - double radius
        - string n
        Returns: None
        Preconditions: None
        Postconditions: A Circle object is created with the values passed in.
        */
        Circle(double xCenter, double yCenter, double radius, string n = "Circle");

}


#endif