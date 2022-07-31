#include<iostream>
using namespace std;
int main()
{
  int i, j, k; //i, j refers to no. of rows and columns, k refers to tree number
  cin>>i>>j>>k;
  
  if(k>i && k <= 2*i)
  {
    cout<<"It is a mango tree";
  }
  else if(k>((j-2)*i) && k<=((j-1)*i))
  {
    cout<<"It is a mango tree";
  }
  else
  {
    cout<<"It is not a mango tree";
  }
  return 0;
}