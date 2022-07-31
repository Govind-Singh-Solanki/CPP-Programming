#include <iostream>
using namespace std;
int main()
{
    int amt1, dis1, ship1, amt2, dis2, ship2, amt3, dis3, ship3;
    int amaz, flip, snap;
    cin >> amt1 >> dis1 >> ship1 >> amt2 >> dis2 >> ship2 >> amt3 >> dis3 >> ship3;

    flip = (amt1 - ((amt1 * dis1) / 100) + ship1);
    snap = (amt2 - ((amt2 * dis2) / 100) + ship2);
    amaz = (amt3 - ((amt3 * dis3) / 100) + ship3);

    cout << "In Flipkart Rs." << flip << endl;
    cout << "In Snapdeal Rs." << snap << endl;
    cout << "In Amazon Rs." << amaz << endl;

    if (amaz <= flip && amaz <= snap)
    {
        cout << "He will prefer Amazon";
    }
    else if (flip <= amaz && flip <= snap)
    {
        cout << "He will prefer Flipkart";
    }
    else
    {
        cout << "He will prefer Snapdeal";
    }
}