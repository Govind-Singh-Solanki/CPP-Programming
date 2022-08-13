/*Write a program to find the repeated sum of digits of a number until it becomes a single-digit number.
Input Format:

The input contains an integer which denotes 'n'

Output Format:

Print the single digit number

Sample Input

88

Sample Output

7

Explanation:

Step 1: 8+8 = 16

Step 2: 1+6 = 7

sum of digits of a number until it becomes a single-digit number which is 7 here.
*/

#include <iostream>
int dig(int n, int sum)
{
    if (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        dig(n / 10, sum);
    }
    else
        return sum;
}
int main()
{
    int n, sum = 0;
    std::cin >> n;
    std::cout << dig(n, sum);
}