//Basic Shapes
//Test file
#include <iostream>
#include <string>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main() {
    //Create an array of 5 shape pointers: 2 rectangles, 2 circles, and 1 square
    BasicShape* shapes[5];
    shapes[0] = new Rectangle(2, 5);
    shapes[1] = new Rectangle(4, 3, "Rectangle 2");
    shapes[2] = new Circle(0, 0, 7);
    shapes[3] = new Circle(0, 0, 14, "Circle 2");
    shapes[4] = new Square(10);

    //Loop through the array and print out the name and area of each shape
   for (int i = 0; i < 5; i++) {
        cout << "Shape name: " << shapes[i]->getName() << endl;
        cout << "Area: " << shapes[i]->getArea() << endl;
   }

   //Delete the shapes from memory
   for (int i = 0; i < 5; i++) {
        delete shapes[i];
   }
  
   return 0;
}