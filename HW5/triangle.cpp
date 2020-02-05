#include <iostream>
#include <cmath>
using namespace std;

void input(double& a, double& b, double& c);
void triangle(double a, double b, double c, double& area, double& perimeter);
double perimet(double a, double b, double c);
bool valid(double a, double b, double c);
void output(double area, double perimeter);


int main(){
double a,b,c,area,perimeter;
input(a,b,c);
if(valid( a,  b,  c)==true){
  triangle( a, b,  c,  area,  perimeter);
   output( area, perimeter);
}
else{
  cout<<"Not a triangle"<<endl;
}
return 0;

}
void input(double& a, double& b, double& c){
  cout<<"Enter the three side lengths: "<<endl;
  cin>>a>>b>>c;
}

bool valid(double a, double b, double c){

  if(a+b>=c || a+c>=b || b+c>=a)
  {
    return true;
  }
  return false;
}

void triangle(double a, double b, double c, double& area, double& perimeter)
{
  perimeter = perimet(a,b,c);
  double s = perimeter / 2;
  double exp = s*(s-a) * (s-b) * (s-c);
  area = sqrt(exp);
}

double perimet(double a, double b, double c){

    return a+b+c;

}

void output(double area, double perimeter){

  cout<<"The area is "<<area<<" the perimeter is "<<perimeter<<endl;

}
