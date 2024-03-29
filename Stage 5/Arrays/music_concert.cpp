/*Sid Sriram's concert is going to happen by this week. Event coordinators have sold all tickets, odd number tickets are given to males and even number tickets are given to females. Finally, they need a count of males and females to allocate seats separately in the auditorium.
Note: Use dynamic memory allocation

Input Format:

The first input contains an integer which denotes the total number of tickets

The remaining 'n' input denotes the ticket numbers

Output Format:

Print the count of male

Print the count of female

Sample Input:

5

67 89 34 56 33

Sample Output:

3

2
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n, *ptr, m = 0, w = 0, i;
    cin >> n;
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        cin >> *(ptr + i);
    for (i = 0; i < n; i++)
    {
        if (*(ptr + i) % 2)
            m++;
        else
            w++;
    }
    free(ptr);
    ptr = NULL;
    cout << m << "\n"
         << w;
    return 0;
}