/*Write a program to compute a^n (a power n) using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers

Refer sample input and output for formatting specifications

SAMPLE INPUT & OUTPUT:

Enter the value of a

2

Enter the value of n

8

The value of 2 power 8 is 256
*/

#include <iostream>
using namespace std;
int p(int a, int n)
{
    if (n > 0)
        return a * p(a, n - 1);
    else
        return 1;
}
int main()
{
    int a, n;
    std::cin >> a >> n;
    printf("Enter the value of a\nEnter the value of n\n");
    printf("The value of %d power %d is %d", a, n, p(a, n));
}