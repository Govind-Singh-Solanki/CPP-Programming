/*Write a program to calculate difference between two time periods
INPUT FORMAT:

Input 1 : hours,minutes and seconds

Input 2 : hours,minutes and seconds

OUTPUT FORMAT:

TIME DIFFERENCE

SAMPLE INPUT:

12 15 24

8 15 23

SAMPLE OUTPUT:

4:0:1

Input (stdin)
8 12 21
6 10 21

Output (stdout)
2:2:0   */

#include <iostream>
using namespace std;
struct TIME
{
    int seconds;
    int minutes;
    int hours;
};
void computeTimeDifference(struct TIME t1, struct TIME t2, struct TIME *difference)
{
    if (t2.seconds > t1.seconds)
    {
        --t1.minutes;
        t1.seconds += 60;
    }
    difference->seconds = t1.seconds - t2.seconds;
    if (t2.minutes > t1.minutes)
    {
        --t1.hours;
        t1.minutes += 60;
    }
    difference->minutes = t1.minutes - t2.minutes;
    difference->hours = t1.hours - t2.hours;
}
int main()
{
    struct TIME t1, t2, difference;
    cin >> t1.hours >> t1.minutes >> t1.seconds;
    cin >> t2.hours >> t2.minutes >> t2.seconds;
    computeTimeDifference(t1, t2, &difference);
    cout << difference.hours << ":" << difference.minutes << ":" << difference.seconds;
    return 0;
}