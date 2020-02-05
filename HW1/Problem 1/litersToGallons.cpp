#include <iostream>

using namespace std;
int main()
{
  double gallons;
  double gallonsToLitres;

  cout<<"Enter the amount of gallons: ";
  cin>>gallons;

  gallonsToLitres = gallons * 3.78541;
  cout<<"The amount in litres is: "<<gallonsToLitres<<endl;
  return 0;

}
