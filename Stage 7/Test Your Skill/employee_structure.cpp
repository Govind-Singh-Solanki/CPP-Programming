/*Write a C++ program to create a structure called employee with name, employee id, name, age designation and
salary as data members. Accept employee details and display it.
SAMPLE INPUT & OUTPUT:

Enter name:

Rajarajan

Enter ID:

001

Enter age:

24

Enter designation:

Manager

Enter Salary:

20000



Employee Details

Name of the Employee : Rajarajan

ID of the Employee : 1

Age of the Employee : 24

Designation of the Employee : Manager

Salary of the Employee : 20000.00 */

#include <iostream>
using namespace std;
struct Employee
{
    int Id;
    char Name[25];
    int Age;
    char designation[25];
    long Salary;
};

int main()
{
    Employee E;
    cout << "Enter name: ";
    cin >> E.Name;
    cout << "\nEnter ID: ";
    cin >> E.Id;
    cout << "\nEnter age: ";
    cin >> E.Age;
    cout << "\nEnter designation: ";
    cin >> E.designation;
    cout << "\nEnter Salary: ";
    cin >> E.Salary;
    cout << "\nEmployee Details";
    cout << "\nName of the Employee : " << E.Name;
    cout << "\nID of the Employee : " << E.Id;
    cout << "\nAge of the Employee : " << E.Age;
    cout << "\nDesignation of the Employee : " << E.designation;
    cout << "\nSalary of the Employee : " << E.Salary;
}