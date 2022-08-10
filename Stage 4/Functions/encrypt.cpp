/*Nowadays, we use social media a lot. We usually send messages, pictures, etc to each other.
So, encrypting and decrypting should be done properly to avoid hacking.
Irin is developing a program for the same where color encrypting is done with the help of Armstrong numbers.
Can you help Irin to write program to check whether a number is an Armstrong number or not.

Input (stdin)
153

Output (stdout)
Kindly proceed with encrypting
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, a = 0, temp, r, count = 0;
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        a = a + pow(r, count);
        temp = temp / 10;
    }
    if (num == a)
        cout << "Kindly proceed with encrypting";
    else
        cout << "It is not an Armstrong number";
    return 0;
}
