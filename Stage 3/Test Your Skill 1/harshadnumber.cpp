/*Write a C++ program to find whether the given number is a Harshad number or not.
Note that Harshard number is an integer that is divisible by the sum of its digits.

Input consists of 1 integer. If the given number is a Harshad Number, display "Harshad Number" or display "Not Harshad Number".

SAMPLE INPUT:

1729

SAMPLE OUTPUT:

Harshad Number
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i, t, sum = 0;
    cin >> n;
    t = n;
    while (n > 0)
    {
        i = n % 10;
        sum = sum + i;
        n = n / 10;
    }
    if (t % sum == 0)
        cout << "Harshad Number";
    else
        cout << "Not Harshad Number";
}