/*Write a program to generate the following series 0,2,8,14,...,34.
Input format:

The input is an integer which denotes 'n'.

Output format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

0 2 8 14 24 34
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    std::cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            std::cout << (i * i) - 2 << " ";
        if (i % 2 == 1)
            std::cout << (i * i) - 1 << " ";
    }
}