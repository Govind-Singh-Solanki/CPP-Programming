/*These days kids are introduced to computers at a very early age and in some schools, the dictation test
is conducted using computers. The teachers found it a bit difficult to evaluate these tests and they requested
the school management to lessen their burden by automating this task. The 12th class students are learning C++
programming and they took up the task of automating the dictation evaluation. You need to check if the given string
is equal to the correct string to evaluate each student. Can you please help them out? Write a C++ program to compare
2 strings using strcmp() function.

INPUT FORMAT:

Input consists of two strings.

Assume that the maximum length of the string is 50 and it contains only alphabets.

OUTPUT FORMAT:

Refer sample input and output for formatting specifications.

SAMPLE INPUT & OUTPUT:

Excellent

Excellent

It is correct

Input (stdin)
CodeLab
Code

Output (stdout)
It is wrong*/

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[50], str2[50];
    cin.getline(str1, 50);
    cin.getline(str2, 50);
    int x = strcmp(str1, str2);
    if (x == 0)
        cout << "It is correct";
    else
        cout << "It is wrong";
}