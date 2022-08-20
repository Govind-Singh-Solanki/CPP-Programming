/*The teacher who handles science for 3rd-standard class distributes the mark sheets to her students,
she needs to find the highest mark among the "n" students. Help the teacher to find the maximum mark.
﻿Input Format:

The first input contains an integer 'n' which denotes the number of students

The remaining input denotes mark of 'n' students separated by spaces

Output Format:

Print the highest mark

Sample Input:

5

45 67 89 34 22

Sample Output:

89
*/

#include <iostream>
int main()
{
    int n, i;
    std::cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        std::cin >> a[i];
    int max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] >= max)
            max = a[i];
    }
    std::cout << max;
}