#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"
#include <iostream>
#include <string>

using namespace std;

class Rectangle : public BasicShape {
    private:
        double length;
        double width;

    public:
        /*
        Constructor: Rectangle
        Purpose: To create a Rectangle object and initialize the data members to the values passed in.
        Parameters:
        - double length
        - double width
        - string name
        Returns: None
        Preconditions: None
        Postconditions: A Rectangle object is created with the values passed in.
        */
        Rectangle(double length, double width, string name = "Rectangle");
        /*
        Function: calcArea
        Purpose: To calculate the area of the Rectangle.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: The area of the Rectangle is calculated.
        */
        void calcArea() override;

        /*
        Accessor: getLength
        Purpose: To return the length of the Rectangle.
        Parameters: None
        Returns: double
        Preconditions: None
        Postconditions: The length of the Rectangle is returned.
        */
        double getLength() const;

        /*
        Accessor: getWidth
        Purpose: To return the width of the Rectangle.
        Parameters: None
        Returns: double
        Preconditions: None
        Postconditions: The width of the Rectangle is returned.
        */
        double getWidth() const;
};
#endif