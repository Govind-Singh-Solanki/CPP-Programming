/*Arun and Kalai were playing a puzzle game with a given set of numbers. They need to find the odd and even
numbers and find the sum of the odd numbers and the sum of the even numbers. Write a program to help them to
solve the puzzle game and to win the mobile phone.
Input Format:

Input consists of n+1 integers.

The first integer corresponds to ‘n’, the size of the array.

The next ‘n’ integers correspond to the elements in the array.

Assume that the maximum value of n is 15.

Output Format:

Refer to sample output for details.

Sample Input:

5

2

3

6

8

-1

Sample Output:

The sum of the even numbers in the array is 16

The sum of the odd numbers in the array is 2*/

#include <iostream>
using namespace std;
int main()
{
    int so = 0, se = 0, n, i;
    std::cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] % 2 == 0)
            se += a[i];
        else
            so += a[i];
    }
    std::cout << "The sum of the even numbers in the array is " << se << "\n";
    std::cout << "The sum of the odd numbers in the array is " << so;
}