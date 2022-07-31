#include<iostream>
using namespace std;
int main()
{
  int birth_year, curr_year, age;   //takes last 2 digits of year as input
  cin>>birth_year>>curr_year;
  
  if(curr_year > birth_year)
  {
    age = (curr_year - birth_year);
    cout<<age;
  }
  else
  {
    age = (100 - birth_year + curr_year);
    cout<<age;
  }
  return 0;
}