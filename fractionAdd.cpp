#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

struct Fraction
{
  int num;
  int den;
};
Fraction mult(Fraction f1, Fraction f2);
Fraction add(Fraction f1, Fraction f2);
void printFraction(Fraction f);

int main()
{
  int a,b;
  Fraction f;
  f.num=a;
  f.den=b;
  Fraction f1;
  Fraction f2;
  cout<<"Enter first numerator: "<<endl;
  cin>>a;
  cout<<"Enter first denominator: "<<endl;
  cin>>b;
  f1.num=a;
  f1.den=b;
  cout<<"Enter second numerator: "<<endl;
  cin>>a;
  cout<<"Enter second denominator: "<<endl;
  cin>>b;
  f2.num=a;
  f2.den=b;
  f=mult(f1,f2);
  cout<<"Multiplied: ";
  printFraction(f);
  cout<<endl;
  f=add(f1,f2);
  cout<<"ADD: ";
  printFraction(f);
  cout<<endl;



}


Fraction mult(Fraction f1, Fraction f2)
{
  Fraction f3;
  f3.num = f1.num*f2.num;
  f3.den = f1.den * f2.den;
  return f3;

}
Fraction add(Fraction f1, Fraction f2)
{
  Fraction f3; 
  f3.num = (f1.num*f2.den) + (f2.num * f1.den);
  f3.den=f1.den*f2.den;


  return f3;

}
void printFraction(Fraction f)
{
  cout<<(f.num)<<"/"<<(f.den)<<endl;
}
