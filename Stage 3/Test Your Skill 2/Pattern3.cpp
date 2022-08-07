/*Write a program to print the following pattern.
Sample Input:

5

Sample Output:

1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
*/

#include <iostream>
int main()
{
    int n, i, j, k;
    std::cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
            std::cout << i << "*";
        std::cout << i << "\n";
    }
    for (k = 1; k <= n; k++)
    {
        i--;
        for (j = n; j > k; j--)
            std::cout << i << "*";
        std::cout << i << "\n";
    }
}