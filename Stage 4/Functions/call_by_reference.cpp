/*Read two integers as input and swap them using call by reference, without using a third variable.

Input (stdin)
6 5

Output (stdout)
Before swapping a= 6 and b=5
After swapping a= 5 and b=6
*/

#include <iostream>
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    std::cin >> a >> b;
    printf("Before swapping a= %d and b=%d\n", a, b);
    swap(&a, &b);
    printf("After swapping a= %d and b=%d", a, b);
}