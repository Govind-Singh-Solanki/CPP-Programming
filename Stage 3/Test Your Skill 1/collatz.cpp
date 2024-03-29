/*The rules for generating Collatz sequence are:
If n is even: n = n / 2 If n is odd: n = 3n + 1 For example,
if the starting number is 5 the sequence is: 5 -> 16 -> 8 -> 4 -> 2 -> 1
It has been proved for almost all integers, that the repeated application of
the above rule will result in a sequence that ends in 1.
Now, write a C++ program to generate the Collatz sequence.

The input is an integer 'n' which denotes the first term of the sequence.

As output, print the numbers in the sequence and also print the number of times the rule has to be applied in order to reach 1.

SAMPLE INPUT:

5

SAMPLE OUTPUT:

5

16

8

4

2

1

5
*/

#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    if (n == 1)
    {
        cout << n << "\n";
        cout << count;
    }
    else
    {
        cout << n << "\n";
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
                cout << n << "\n";
                count++;
            }
            else if (n % 2 == 1)
            {
                n = (3 * n) + 1;
                cout << n << "\n";
                count++;
            }
        }
        cout << count;
    }
}