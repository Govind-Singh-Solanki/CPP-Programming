#include <iostream>
using namespace std;
int main()
{
    int items;
    float heating_time, time;

    cin >> items >> heating_time;

    if (items > 0 && items <= 1)
    {
        time = heating_time;
        cout << time;
    }
    else if (items > 1 && items <= 2)
    {
        time = (heating_time + (0.5 * heating_time));
        cout << time;
    }
    else if (items > 2 && items <= 3)
    {
        time = (2 * heating_time);
        cout << time;
    }
    else
    {
        cout << "Number of items is more";
    }
}