/*Write a program to find the type of array using functions. An array is said to be “Even” if all the elements
in the array are even. An array is said to be “Odd” if all the elements in the array are odd. An array is said
to be “Mixed” if it contains some odd elements and some even elements. Refer function specifications for the function details.
The first argument corresponds to the number of elements in the array. The second argument corresponds to the pointer to an
array. The return value of the function should be 1 if the array is Even. The return value of the function should be 2 if
the array is Odd. The return value of the function should be 3 if the array is Mixed.
Input & Output Format:

Input consists of n+1 integers where n corresponds to the number of elements in the array.

The first integer corresponds to n and the next n integers correspond to the elements in the array.

Assume that the maximum number of elements in the array is 20.

Refer to the sample input and output for formatting specifications.

Sample Input & Output:

Enter the number of elements in the array

5

Enter the elements in the array

2

4

1

3

5

The array is Mixed*/

#include <iostream>
using namespace std;
int main()
{
    int n, i, c = 0;
    std::cin >> n;
    int a[n];
    std::cout << "Enter the number of elements in the array\nEnter the elements in the array";
    std::cout << "\nThe array is ";
    for (i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] % 2 == 0)
            c++;
    }
    if (c == n)
        std::cout << "Even";
    else if (c == 0)
        std::cout << "Odd";
    else
        std::cout << "Mixed";
}