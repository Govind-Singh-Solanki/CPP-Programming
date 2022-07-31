#include <iostream>
using namespace std;
int main()
{
    float mileage;
    int petrol, dist;
    cin >> mileage >> petrol >> dist;

    if ((mileage * petrol) >= dist)
    {
        cout << "Can reach";
    }
    else
    {
        cout << "Cannot reach";
    }
    return 0;
}