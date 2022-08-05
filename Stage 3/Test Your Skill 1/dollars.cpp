/*Input consists of 4 integers. First two inputs correspond to the value of the first dollar and cent. Next
two inputs correspond to the value of the second dollar and cent. Output should print the sum of dollar and cent.
SAMPLE INPUT:

30

10

140

99

SAMPLE OUTPUT:

171

9
*/

#include <iostream>
using namespace std;
int main()
{
    int sd = 0, sc = 0, d1, d2, c1, c2, count = 0;
    std::cin >> d1 >> c1 >> d2 >> c2;
    sd = d1 + d2;
    sc = c1 + c2;
    while (sc > 100)
    {
        sc = sc - 100;
        count++;
    }
    sd += count;
    cout << sd << "\n"
         << sc;
}