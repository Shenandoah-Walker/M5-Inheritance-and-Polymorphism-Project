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
        Circle(double xCenter, double yCenter, double radius, string name = "Circle");
        /*
        Function: calcArea
        Purpose: To calculate the area of the Circle.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: The area of the Circle is calculated.
        */
        void calcArea() override;

};


#endif