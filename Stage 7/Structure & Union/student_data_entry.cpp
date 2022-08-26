/*It is the first day in school. The kids need to enroll their data in system. Teacher calls one by one to enter the data.
They need to enter their data and need to check the display their details.
[Hint : use structure to store the details of student]

Input (stdin)
Christy Rose
57
82

Output (stdout)

Student Details
Name: Christy Rose
Roll: 57
Marks: 82*/

#include <iostream>
#include <string>
struct student
{
    char name[50];
    int roll;
    int marks;
};
int main()
{
    struct student s1;
    std::cout << "\nStudent Details"
              << "\n";
    std::cin.getline(s1.name, 50);
    std::cin >> s1.roll;
    std::cin >> s1.marks;
    std::cout << "Name: " << s1.name << "\n"
              << "Roll: " << s1.roll << "\n"
              << "Marks: " << s1.marks;
}