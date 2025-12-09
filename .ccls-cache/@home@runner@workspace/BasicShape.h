/*
Create an abstract base class called BasicShape that has two private instance variables: area
(a double), and name (a string). Provide getters and setters for these instance variables. Also
declare a pure virtual function called calcArea that will be implemented in the classes derived
from the abstract BasicShape class.
*/

#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <iostream>
#include <string>

using namespace std;

class BasicShape {
    private:
        double area;
        string name;

    public:
        /*
        Accessor: getArea
        Purpose: To return the area of the BasicShape.
        Parameters: None
        Returns: double
        Preconditions: None
        Postconditions: The area of the BasicShape is returned.
        */
        double getArea() const;
        /*
        Accessor: getName
        Purpose: To return the name of the BasicShape.
        Parameters: None
        Returns: string
        Preconditions: None
        Postconditions: The name of the BasicShape is returned.
        */
        string getName() const;
        /*
        Mutator: setArea
        Purpose: To set the area of the BasicShape.
        Parameters:
        - double area
        Returns: None
        Preconditions: None
        Postconditions: The area of the BasicShape is set.
        */
        void setArea(double area);
        /*
        Mutator: setName
        Purpose: To set the name of the BasicShape.
        Parameters:
        - string name
        Returns: None
        Preconditions: None
        Postconditions: The name of the BasicShape is set.
        */
        void setName(string name);
        /*
        Function: calcArea
        Purpose: To calculate the area of the BasicShape.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: The area of the BasicShape is calculated.
        */
        virtual void calcArea() = 0;
};






#endif