/*Antakshari is a popular parlor game played in India. Many word games are similar to antakshari. One such game is wordakshari. The game can be played by two or more people. The first player has to recite a word. The last letter of the word is then used by the next player to recite another word starting with that letter. The winner or winning team is decided by a process of elimination. The person or the team that cannot come up with a word with the right consonant is eliminated. The following rules need to be followed while playing this game. (ii) All other words have to begin with the last letter of the previous word (iii) No words can be repeated. write a program to print the wordakshari chain.
Input Fromat:

Input consists of n+1 lines.

The first n lines contain strings corresponding to the words in the chain.

The last line of input contains the string #### to mark the end of input.

Output Format:

The output consists of the valid wordakshari chain.

The first word can begin with any letter.

Sample Input:

architect

tailor

referee

electrician

nurse

blacksmith

####

Sample Output:

architect

tailor

referee

electrician

nurse

Input (stdin)
oracle
error
rohit
####

Output (stdout)
oracle
error
rohit*/

#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    char a[50][50];
    int i;
    int n = 0;
    for (i = 0; i < 5; i++)
    {
        cin.getline(a[i], 50);
        n++;
        if (strcmp(a[i], "####") == 0)
            break;
    }
    cout << a[0] << endl;
    for (i = 0; i < n; i++)
    {
        if (a[i][strlen(a[i]) - 1] == a[i + 1][0])
            cout << a[i + 1] << endl;
    }
    return 0;
}