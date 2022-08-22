/*In a blind organization, they were playing the typing a keyword game and they want to correct the form of the word.
So help them to by writing a program to remove all special symbols and print the characters of a string.
Input & output Format:

Input consists of a string. Assume the maximum length of the string is 200. The characters in the string can
contain both uppercase, lowercase, and symbols.

Sample Input:

pro$#&gra7m

Sample Output:

program

Input (stdin)
Fresh214&grad

Output (stdout)
Freshgrad*/

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[50];
    cin.getline(str, 50);
    int count = strlen(str);
    for (int i = 0; i < count; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            std::cout << str[i];
            str[i] = '\0';
        }
    }
}