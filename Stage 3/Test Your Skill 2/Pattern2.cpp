/*Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15
*/

#include <iostream>
using namespace std;
int main()
{
    int n, j, k = 0;
    std::cin >> n;
    // loop to decide the row number
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            // print numbers with the '*' sign in
            // increasing order
            for (j = k + 1; j < k + i; j++)
                cout << j << "*";
            cout << j++ << endl;
            // update value of 'k'
            k = j;
        }
        else
        {
            // update value of 'k'
            k = k + i - 1;
            // print numbers with the '*' in
            // decreasing order
            for (j = k; j > k - i + 1; j--)
                cout << j << "*";
            cout << j << endl;
        }
    }
}