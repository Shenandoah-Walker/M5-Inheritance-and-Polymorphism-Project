#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee {

private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    Employee();
    Employee(string, int, string);
    string getName() const;
    int getEmployeeNumber() const;
    string getHireDate() const;
    void setName(string);
    void setEmployeeNumber(int);
    void setHireDate(string);
    void printEmployee();
};




#endif