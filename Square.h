#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"
#include <iostream>
#include <string>

using namespace std;

class Square : public Rectangle {
    private:
        double side;

    public:
        /*
        Constructor: Square
        Purpose: To create a Square object and initialize the data members to the values passed in.
        Parameters:
        - double side
        - string name
        Returns: None
        Preconditions: None
        Postconditions: A Square object is created with the values passed in.
        */
        Square(double side, string name = "Square");

        /*
        Accessor: getSide
        Purpose: To return the side of the Square.
        Parameters: None
        Returns: double
        Preconditions: None
        Postconditions: The side of the Square is returned.
        */
        double getSide() const;

      
};
#endif