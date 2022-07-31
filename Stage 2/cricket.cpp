#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int tballs, truns, runs, balls; //runs = runs scored currently, balls = balls played currently
  float tovers, overs_bowled, crr, trr; //crr = current run rate, trr = required run rate
  cin>>tballs>>truns>>runs>>balls;
  
  tovers = tballs/6;
  overs_bowled = ((float)(balls/6)) + ((balls%6)*0.1);
  crr = (float)(runs/overs_bowled);
  trr = (float)(truns/tovers);
  
  cout<<tovers<<endl;
  cout<<overs_bowled<<endl;
  cout<<fixed<<setprecision(1)<<crr<<endl;
  cout<<trr<<endl;
  
  if(crr>=trr)
  {
    cout<<"Eligible to Win";
  }
  else
  {
    cout<<"Not Eligible to Win";
  }
}