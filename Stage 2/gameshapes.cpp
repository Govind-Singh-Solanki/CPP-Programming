#include<iostream>
using namespace std;
int main()
{
  int x, r; //r = radius of circular shape, x = lenght of square box
  cin>>r>>x;
  
  if((2*r) <= x)
  {
    cout<<"circle can be inside a square";
  }
  else
  {
    cout<<"circle cannot be inside a square";
  }
}