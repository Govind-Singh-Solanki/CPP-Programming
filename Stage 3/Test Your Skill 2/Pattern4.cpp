/*Write a program to print the given below pattern.
Sample Input:

5

Sample Output:

11112
32222
33334
54444
55556
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k = 1;
    std::cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i % 2 != 0)
            {
                if (j == n)
                    std::cout << ++k;
                else
                    std::cout << k;
            }
            else
            {
                if (j == 1)
                    std::cout << ++k;
                else
                    std::cout << k - 1;
            }
        }
        std::cout << "\n";
    }
    return 0;
}