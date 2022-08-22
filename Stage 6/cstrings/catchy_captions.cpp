/*Company Tesla has kept a contest for catchy caption for the image. They have a rule that the caption should
not be more than 10 words. If the caption of a candidate is more than 10 words, then the candidature stands to
be disqualified. Can you write a program to check whether a caption is eligible for the contest or not.
The maximum sizeof the caption is of 100 bytes.

[Hint:Use functions defined in cstring]

Input (stdin)
There are some things money can't buy. For everything else, there's MasterCard.

Output (stdout)
Caption not eligible for the contest

Input (stdin)
Tide's In - Dirt's Out

Output (stdout)
Caption eligible for the contest*/

#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    string str;
    int len, count = 0;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
        if (str[i] == ' ')
            count++;
    if (count + 1 > 10)
        cout << "Caption not eligible for the contest";
    else
        cout << "Caption eligible for the contest";
}