/*Tia is new to programming. She needs to write a program which will receive the input as a floating point number.
She needs to print the decimal part of the floating point of the number. She has written a few lines of code.
Can you fill up the rest.Read the input as string. Use string operations on the input to derive the answer easily.

Input (stdin)
5210.0

Output (stdout)
Floating part is : 0*/

#include <iostream>
#include <string>
int main()
{
    int x = -1;
    std::string fnum;
    std::getline(std::cin, fnum);
    x = fnum.find(".");
    if (x != -1)
    {
        std::cout << "Floating part is : ";
        for (int i = x + 1; i < fnum.length(); i++)
            std::cout << fnum.at(i);
    }
    else
        std::cout << "Floating part is : ";
}