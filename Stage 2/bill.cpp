#include<iostream>
using namespace std;
int main()
{
  int units, bill;
  cin>>units;
  
  if(units<=200)
  {
    bill = (units*0.5F);
    cout<<"Rs."<<bill;
  }
  else if(units<=400)
  {
    bill = ((units*0.65F) + 100);
    cout<<"Rs."<<bill;
  }
  else if(units<=600)
  {
    bill = ((units*0.80F) + 200);
    cout<<"Rs."<<bill;
  }
  else
  {
    bill = ((units*1.25F) + 425);
    cout<<"Rs."<<bill;
  }
}