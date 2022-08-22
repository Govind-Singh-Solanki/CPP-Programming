/*
Please help Kiara to write the correct code to reverse a string.
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}