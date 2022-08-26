/*Ryan is appearing for a techathon that offers price money of 10K for the winner. Techathon has provided a
platform where an incomplete code will appear, and the participants have to complete it. Ryan got a program
where he needs to create a complex calculator. Can you help Ryan win this competition?
The first line consists of a choice which is an integer to choose from 1 to 3. Choice 1 represents addition of
two complex numbers, 2 represents subtraction of two complex numbers and 3 represents the multiplication of two complex numbers.

Input (stdin)
3
5
8
6
-10

Output (stdout)
110-2i*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, n;
    cin >> n >> a >> b >> c >> d;
    switch (n)
    {
    case 1:
        cout << (a + c) << "-" << (b + d) << "i";
        break;
    case 2:
        cout << (a - c) << "+" << (b - d) << "i";
        break;
    case 3:
        cout << ((a * c) - (b * d)) << ((b * c) + (a * d)) << "i";
        break;
    default:
        cout << "Invalid choice";
    }
}
