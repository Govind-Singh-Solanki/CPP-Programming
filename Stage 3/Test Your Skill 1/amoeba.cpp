/*The Environmental Eco Club has discovered a new Amoeba that grows in the order of a Fibonacci series every month.
They are exhibiting this amoeba in a national conference. They want to know the size of the amoeba at a particular time instant.
 If a particular month’s index is given, write a program to display the amoeba’s size.
For Example, the size of the amoeba on month 1, 2, 3, 4, 5, 6,... will be 0, 1, 1, 2, 3, 5, 8.... respectively.

The input is an integer which denotes the count of the month.

The output is an integer denoting the amoeba size.

Refer the sample output for formatting.

SAMPLE INPUT:

7

SAMPLE OUTPUT:

8
*/

#include <iostream>
using namespace std;
int main()
{
    int m, a = 0, b = 1, c, i;
    cin >> m;
    if (m == 1)
        cout << a;
    else if (m == 2)
        cout << b;
    else if (m > 2)
    {
        for (i = 0; i < m - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c;
    }
}