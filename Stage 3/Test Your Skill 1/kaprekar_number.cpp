/*Consider an n-digit number k. Square it and add the right n digits to the left n or n-1 digits.
If the resultant sum is k, then k is called a Kaprekar number. For example, 9 is a Kaprekar number
since 92 = 81 & 8 + 1 = 9 297 is a Kaprekar number as 2972 = 88209 & 88 + 209 = 297
Write a program to find whether the given number is a Kaprekar number or not.

Input consists of a single integer.

Refer sample output for details.

SAMPLE INPUT & OUTPUT:

9

Kaprekar Number
*/

#include <bits/stdc++.h>
using namespace std;

bool chkkaprekar(int n)
{
    if (n == 1)
        return true;
    int sqr_n = n * n;
    int ctr_digits = 0;
    // cout<<sqr_n<<" \n";
    while (sqr_n)
    {
        ctr_digits++;
        sqr_n /= 10;
    }
    sqr_n = n * n;
    // cout<<sqr_n<<" \n";
    for (int r_digits = 1; r_digits < ctr_digits; r_digits++)
    {
        int eq_parts = pow(10, r_digits);

        if (eq_parts == n)
            continue;
        int sum = sqr_n / eq_parts + sqr_n % eq_parts;
        if (sum == n)
            return true;
    }
    return false;
}
int main()
{
    int kpno;
    cin >> kpno;
    chkkaprekar(kpno) ? cout << "Kaprekar Number" : cout << "Not a Kaprekar Number";
}