/*Meera wrote SBI PO exam and was waiting for her result. After a week, SBI released the results on its website.
On the website, she needs to click the results after that she will get a pdf.
In that pdf, test passed candidate register numbers are displayed.
Then, Meera has to check whether her register number is there or not.
If her register number is found, then she has passed her exam. Otherwise, she failed.
Input Format:

The first input contains an integer 'n' which denotes the number of candidates who have passed the exam

The remaining input denotes register number of 'n' candidates separated by spaces

The last input contains an integer which denotes the register number of Meera

Output Format:

If the register number is found, print "She passed her exam".Otherwise, print "She failed".

Sample Input:

5

34 46 52 32 265

32

Sample Output:

She passed her exam
*/

#include <iostream>
int main()
{
    int n, i, key, count = 0;
    std::cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        std::cin >> a[i];
    std::cin >> key;
    int max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            count++;
    }
    if (count == 1)
        std::cout << "She passed her exam";
    else
        std::cout << "She failed";
}