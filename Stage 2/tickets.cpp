#include <iostream>
using namespace std;
int main()
{
    int age;
    float show_time;

    cin >> age >> show_time;

    if (age > 13)
    {
        if (show_time > 12 && show_time < 18)
        {
            cout << "$5.00";
        }
        else
        {
            cout << "$8.00";
        }
    }
    else
    {
        if (show_time > 12 && show_time < 18)
        {
            cout << "$2.00";
        }
        else
        {
            cout << "$4.00";
        }
    }
}