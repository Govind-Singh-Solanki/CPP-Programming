/*Your friend wants to see the pronunciation of his/ her name when it gets reversed.
Help him/ her to find the reversed string using program.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}