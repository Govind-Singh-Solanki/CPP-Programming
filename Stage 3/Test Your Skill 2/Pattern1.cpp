/*Write a program to print the following pattern.
Sample Input:

3

Sample Output:

3
44
555
6666
6666
555
44
3
*/

#include <iostream>
int main()
{
    int n, i, j;
    std::cin >> n;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
            std::cout << n;
        std::cout << "\n";
        n++;
    }
    for (i = 4; i >= 1; i--)
    {
        n--;
        for (j = 1; j <= i; j++)
            std::cout << n;
        std::cout << "\n";
    }
}