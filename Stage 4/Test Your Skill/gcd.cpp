/*Write a program to compute GCD of 2 numbers using recursion.
INPUT & OUTPUT FORMAT:

Input consists of 2 integers.

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT:

36

27

G.C.D of 36 and 27 = 9
*/

#include <iostream>
using namespace std;
int hcf(int n1, int n2)
{
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << "G.C.D of " << n1 << " and " << n2 << " = " << hcf(n1, n2);
    return 0;
}