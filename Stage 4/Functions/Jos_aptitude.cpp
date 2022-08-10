/*Jo is an aptitude trainer. She takes classes for college students for placements.
She teaches students to find out highest common factor of three numbers.
She has given homework for them to find out the same. Kindly help her to check whether their answers are correct or not.

Input (stdin)
15
30
90
15

Output (stdout)
Answer is correct.
*/

#include <iostream>
int main()
{
    int b1, b2, b3, z, small, gcd;
    std::cin >> b1 >> b2 >> b3 >> z;
    if (b1 <= b2 && b1 <= b3)
        small = b1;
    else if (b2 <= b1 && b2 <= b3)
        small = b2;
    else
        small = b3;
    while (small > 0)
    {
        if (b1 % small == 0 && b2 % small == 0 && b3 % small == 0)
        {
            gcd = small;
            break;
        }
        small--;
    }
    if (z == gcd)
        std::cout << "Answer is correct.";
    else
        std::cout << "Answer is wrong.";
}
