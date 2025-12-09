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

        /*
        Destructor: ~BasicShape
        Purpose: To destroy the BasicShape object.
        Parameters: None
        Returns: None
        Preconditions: None
        Postconditions: The BasicShape object is destroyed.
        */
        virtual ~BasicShape() = default;
};






#endif