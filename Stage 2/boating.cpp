#include<iostream>
using namespace std;

int main()
{
    int weight, a, c;   //a = no. of adults, c = no. of childs
    cin>>weight>>a>>c;
    
    if(((a*75) + (c*30)) <= weight)
    {
        cout<<"Boat is stable";
    } 
    else{
        cout<<"Boat will drow";
    }
    return 0;
}