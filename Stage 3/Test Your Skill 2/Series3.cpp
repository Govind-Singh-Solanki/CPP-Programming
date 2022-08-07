/*Write a program to generate the first 'n' terms of the following series 6, 11, 21, 36, 56,...
Input Format:

The input is an integer 'n' which denotes the number of terms to be printed in the series.

Output Format:

Print the series and refer the sample output for formatting.

Sample Input:

6

Sample Output:

6 11 21 36 56 81
*/

#include <iostream>
int main()
{
    int n, x = 6, i;
    std::cin >> n;
    for (i = 1; i <= n; i++)
    {
        std::cout << x << " ";
        x = x + (5 * i);
    }
}