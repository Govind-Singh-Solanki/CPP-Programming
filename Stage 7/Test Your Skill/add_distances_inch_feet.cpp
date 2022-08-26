/*Write a program to add two distances in inch feet system using Structure
INPUT FORMAT:

Input 1: Inch1 and feet1

Input 2 : Inch2 and feet2

OUTPUT FORMAT:

Sum of Distance

SAMPLE INPUT:

23

4.7

22

7.5

SAMPLE OUTPUT:

44'-6.7"

Input (stdin)
21
7.8
31
7.5

Output (stdout)
53'-3.3"    */

#include <iostream>
using namespace std;
struct Distance
{
    int feet;
    float inch;
} d1, d2, sum;

int main()
{
    cin >> d1.feet >> d1.inch;
    cin >> d2.feet >> d2.inch;
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    // changing to feet if inch is greater than 12
    if (sum.inch > 12)
    {
        ++sum.feet;
        sum.inch -= 12;
    }
    cout << sum.feet << "'-" << sum.inch << (char)34;
    return 0;
}