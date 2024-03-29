/*Raju is the maths teacher in high secondary school and provided mark sheet to students.In this class room,
students are arranged in the form of rows and columns. Raju needs to find the highest mark in this class.
Help him to find out.
INPUT FORMAT:

The input consists of (m*n+2) integers.

The first integer corresponds to m, the number of rows in the matrix and the second integer corresponds to n, the number of columns in the matrix.

The remaining integers correspond to the elements in the matrix.

The elements are read in row-wise order, the first row first, then the second row and so on.

Assume that the maximum value of m and n is 10.

OUTPUT FORMAT:

Refer to the sample output for details.

SAMPLE INPUT & OUTPUT:

3

2

4 5

6 9

0 3

The maximum element is 9

Input (stdin)
3
3
2 4 6
14 16 18
8 10 12

Output (stdout)
The maximum element is 18*/

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
    int max = a[0][0];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] >= max)
                max = a[i][j];
    std::cout << "The maximum element is " << max;
}