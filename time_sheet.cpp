#include <iostream>
using namespace std;
int main()
{
    int sun, mon, tue, wed, thur, fri, sat;
    int sal, bonus;

    cin >> sun >> mon >> tue >> wed >> thur >> fri >> sat;

    int week = (sun + mon + tue + wed + thur + fri + sat);
    sal = (week * 100);

    if (sun > 0)
        sal = sal + ((50 * sun));
    if (mon > 8)
        sal = sal + (15 * (mon - 8));
    if (tue > 8)
        sal = sal + (15 * (tue - 8));
    if (wed > 8)
        sal = sal + (15 * (wed - 8));
    if (thur > 8)
        sal = sal + (15 * (thur - 8));
    if (fri > 8)
        sal = sal + (15 * (fri - 8));
    if (sat > 0)
        sal = sal + ((25 * sat));

    cout << sal;
}