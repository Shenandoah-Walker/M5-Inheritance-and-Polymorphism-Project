//Factory Workers
//Test file

#include <iostream>
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"
#include "TeamLeader.h"
#include "ShiftSupervisor.h"

using namespace std;

int main() {

  //Test the Employee class
  Employee employee1("John Doe", 12345, "01/01/2020");
  employee1.printEmployee();
  cout << endl;
  employee1.setName("Jane Doe");
  employee1.setEmployeeNumber(54321);
  employee1.setHireDate("02/02/2021");
  employee1.printEmployee();
  cout << endl;


  //Test the ProductionWorker class
  ProductionWorker worker1("John Smith", 67890, "03/03/2022", 1, 15.00);
  worker1.printProductionWorker();
  cout << endl;
  worker1.setShift(2);
  worker1.setHourlyPayRate(20.00);
  worker1.printProductionWorker();
  cout << endl;

  //Test the TeamLeader class
  TeamLeader leader1("Jane Smith", 11111, "04/04/2023", 1, 25.00, 1000.00, 100, 80);
  leader1.printTeamLeader();
  cout << endl;
  leader1.setMonthlyBonus(1500.00);
  leader1.setRequiredTrainingHours(120);
  leader1.setAttendedTrainingHours(100);
  leader1.printTeamLeader();
  cout << endl;

  //Test the ShiftSupervisor class
  ShiftSupervisor supervisor1("Bob Smith", 22222, "05/05/2024", 50000.00, 5000.00);
   supervisor1.printShiftSupervisor();
   cout << endl;
   supervisor1.setAnnualSalary(60000.00);
   supervisor1.setAnnualProductionBonus(6000.00);
   supervisor1.printShiftSupervisor();
   cout << endl;

  return 0;
}