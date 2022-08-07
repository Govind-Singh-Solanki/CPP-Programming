/*Write a program to generate the first 'n' terms of the following series 0.5, 1.5, 4.5, 13.5, ...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

5

Sample Output:

0.5 1.5 4.5 13.5 40.5
*/

#include <iostream>
int main()
{
    float n, x = 0.5;
    std::cin >> n;
    if (n == 1)
        std::cout << x;
    else
        std::cout << x << " ";
    for (int i = 1; i < n; i++)
    {
        x = x * 3;
        std::cout << x << " ";
    }
}