#include <iostream>
#include <cmath>
using namespace std;

double force( double m1, double m2, double distance);
const double G = 6.673 * pow(10,-8);
int main(){
  double m1;
  double m2;
  double distance;
  char ans;
  do{
    cout << "Enter the mass of first object: "<<endl;
    cin >> m1;
    cout << "Enter the mass of second object: "<<endl;
    cin >> m2;
    cout << "Enter the distance between those two objects: "<<endl;
    cin >> distance;
    cout<<"the graviational force is: "<<force(m1,m2,distance);
    cout<<endl << "again?";
    cin>>ans;

}while(ans == 'Y' || ans == 'y');

}
  double force(double m1, double m2, double distance){
    return (G*m1*m2)/(pow(distance, 2));
}
