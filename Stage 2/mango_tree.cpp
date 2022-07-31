#include <iostream>
using namespace std;
int main()
{
    int row, column, tree_num;
    cin >> row >> column >> tree_num;

    if (tree_num <= column)
    {
        cout << "Yes";
    }
    else if (tree_num % column == 0)
    {
        cout << "Yes";
    }
    else if (tree_num % column == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}