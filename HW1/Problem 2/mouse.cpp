#include<iostream>

using namespace std;

int main()
{
  here:
  // amount of sweetener in diet soda
  const double DIET_SODA_SWEETNEER = 0.001;
  //mouse weight
  double mouseWeight;
  // the weight of the dieter when he will stop
  double dieterWeight;
  // how much sweetner will kill the mouse
  double mouseSweetner;
  // amount of sweetener
  double dietSweetner;
  // amount of soda
  double aSoda;

  cout<<"Enter the amount of sweetner to kill the mouse: "<<endl;
  cin>> mouseSweetner;

  cout<<" Mouse weight: "<<endl;
  cin>>mouseWeight;


  cout<<"Weight when dieter will stop diet: "<<endl;
  cin>>dieterWeight;

  dietSweetner = (mouseSweetner/mouseWeight) * dieterWeight;
  aSoda = (dietSweetner / 0.001);

  cout<<"How much sweetner to kill: "<<dietSweetner<<endl;

  cout<<"How much soda to kill: "<<aSoda<<endl;

  return 0;

}
