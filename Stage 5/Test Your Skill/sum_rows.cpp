/*Seenu have a fruit shop and arranged the some set of fruits in column and row wise. Seenu needs to
find the total number of fruits in each rows. Help him to find out.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers and 1 2D-array. Integers correspond to the size of rows and columns.

SAMPLE INPUT & OUTPUT:

3

3

1 2 3

7 3 1

7 4 1

6

11

12

Input (stdin)
2
2
4 5
6 7

Output (stdout)
9
13*/

#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j, sum;
    std::cin >> r >> c;
    int a[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            std::cin >> a[i][j];
    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
            sum = sum + a[i][j];
        std::cout << sum << "\n";
    }
}