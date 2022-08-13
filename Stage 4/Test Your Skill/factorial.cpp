/*Write a program to compute the factorial of a number using recursion.
INPUT AND OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT

5

The factorial of 5 is 120
*/

#include <iostream>
int fact(int n)
{
    int x;
    if (n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << "The factorial of " << n << " is " << fact(n);
}