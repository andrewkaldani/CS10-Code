#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
bool windTemp(double temp);
int main(){
    double windSpeed, temp;
    cout << "Enter wind speed in mph: "<<endl;
    cin >> windSpeed;

    cout << "Enter temperature in Fahrenheit: "<<endl;
    cin >> temp;

    if(!windTemp(temp)){
        cout << "Temperature must be below 10C."<<endl;
        exit(1);
  }
  double windIndex;
  windIndex = 33 - (((10*sqrt(windSpeed) - windSpeed + 10.5) * (33-temp))/23.1);
  cout<<"wind chill index is going to be: "<<windIndex<<endl;
  return 0;
}
bool windTemp(double temp){
  if(temp < 10)
  {
    return true;
  }
  else
  {
    return false;
  }
}
