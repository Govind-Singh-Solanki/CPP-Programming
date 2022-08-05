/*In the University examinations conducted during the past 5 years,
the toppers registration numbers were 7126, 82417914, 7687 and 6657.
Your father is an expert in data mining and he could easily infer a pattern in the toppers registration numbers.
In all the registration numbers listed here, the sum of the odd digits is equal to the sum of the even digits in the number.
 He termed the numbers that satisfy this property as Probable Topper Numbers.
Now, write a program to find whether a given number is a probable topper number or not.

Input consists of a single integer.

The output consists of a single line. Refer the sample output for details.

SAMPLE INPUT & OUTPUT:

143

Yes
*/

#include <iostream>
using namespace std;
int main()
{
    int n, se = 0, so = 0, x;
    cin >> n;
    while (n > 0)
    {
        x = n % 10;
        if (x % 2 == 0)
            se += x;
        else
            so += x;
        n /= 10;
    }
    if (se == so)
        cout << "Yes";
    else
        cout << "No";
}