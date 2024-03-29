/*Regina is incharge of the annual day committee. The annual day committee decides to conduct a lucky draw for the audience.
As the crowd is huge, it is very hard to include the whole audience in the lucky draw.
Therefore, management decides to conduct lucky draw only for the audience who have occupied the chair number which is prime.
Regina and other committee members find it difficult to check which chair numbers are prime.
Can you help them to find out whether the chair number is prime or not?
Prime number is a number which can be divided only by 1 and itself.

The input consist of an integer which denotes the chair number

Output Format:

If chair number is prime, print "Eligible". Otherwise, print "Not eligible".

Sample Input:

3

Sample Output:

Eligible
*/

#include <iostream>
int main()
{
    int n, i, j = 0;
    std::cin >> n;
    for (i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
            j++;
    }
    if (j == 2)
        std::cout << "Eligible";
    else
        std::cout << "Not eligible";
}