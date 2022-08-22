/*These days kids are introduced to computers at a very early age. The kids are taught about alphabets, digits and blank spaces.
The teacher asked the students to count the vowels, consonants, digits and white spaces in a string. The teacher
found it a bit difficult to evaluate these tests and she knew that the 12th class students are learning C programming.
So she assigned this task to them to count the vowels, consonants, digits and white spaces in a string. Can you
please help them out? Write a program to count the vowels, consonants, digits, white spaces, and symbols in a string.
Input &output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can contain
both uppercase and lowercase. Refer sample input and output for formatting specifications.

Sample Input:

This program is very easy 2 complete

Sample Output:

Vowels : 10

Consonants : 19

White spaces : 6

Digits : 1

Symbols : 0

Input (stdin)
The main contribution by Sachin was the way he changed the opening in ODI cricket.

Output (stdout)
Vowels:25
Consonants:42
White Spaces:14
Digits:0
Symbols:1*/

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[200], v = 0, c = 0, sp = 0, n = 0, s = 0;
    cin.getline(str, 200);
    int count = strlen(str);
    for (int i = 0; i < count; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            v++;
        else if ((str[i] >= 'b' && str[i] <= 'z') || (str[i] >= 'B' && str[i] <= 'Z'))
            c++;
        else if (str[i] >= '0' && str[i] <= '9')
            n++;
        else if (str[i] == ' ')
            sp++;
        else
            s++;
    }
    printf("Vowels:%d\nConsonants:%d\nWhite Spaces:%d\nDigits:%d\nSymbols:%d", v, c, sp, n, s);
}