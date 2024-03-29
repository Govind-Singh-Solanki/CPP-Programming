/*In a family, the people are arranged in rows and columns. Male persons in the families are arranged in a row and
females are arranged in a column. Find the eldest women in each column. (Write a program to find the maximum element
in each column of the matrix.)
Input Format:

The input consists of (m*n+2) integers.

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix.

The remaining integers correspond to the elements in the matrix.

The elements are read in row-wise order, the first row first, then second row and so on.

Assume that the maximum value of m and n is 10.

Output Format:

Refer to the sample output for details.

Sample Input:

3

2

4 5

6 9

0 3

Sample Output:

6

9

Input (stdin)
3
3
1 2 3
4 5 6
7 8 9

Output (stdout)
7
8
9*/

#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j;
    std::cin >> r >> c;
    int a[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            std::cin >> a[i][j];
    for (i = 0; i < c; i++)
    {
        int max = a[0][i];
        for (j = 1; j < r; j++)
        {
            if (a[j][i] > max)
                max = a[j][i];
        }
        std::cout << max << "\n";
    }
}