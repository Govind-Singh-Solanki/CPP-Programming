/*A special school is run by an NGO for kids with Dyslexia. We all know these children will start writing
the letters backward or in reverse. Once special care is taken to correct this issue and once they are
introduced to words, they will start writing the words in the proper format. The teachers do not want to
discourage the children at the start itself and they have decided to mark the words written in reverse also
as correct. Can you please help the teacher in correcting the answer sheets by writing a C++ program? Write a
C++ program to check whether the second word is the reverse of the first word. Do not use strrev() function.
Input Format:

Input consists of 2 strings.

Assume that the maximum length of the string is 50.

Output format:

Refer sample input and output for formatting specifications.

Sample input &output

Excellent

tnellecxE

It is correct

Input (stdin)
Excellent
tneilecxE

Output (stdout)
It is wrong*/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char *rev(char *str2)
{
    int i = 0, len;
    len = strlen(str2);
    while (i < len--)
    {
        char temp = str2[i];
        str2[i] = str2[len];
        str2[len] = temp;
        i++;
    }
}
int main()
{
    char str1[50], str2[50];
    cin.getline(str1, 50);
    cin.getline(str2, 50);
    rev(str2);
    int x = strcmp(str1, str2);
    if (x == 0)
        cout << "It is correct";
    else
        cout << "It is wrong";
}