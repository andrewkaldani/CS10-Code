#include<iostream>
using namespace std;

void input(int minutes, int seconds);
double convertToMPH(int minutes, int seconds);
double convertToMPH(double kph);

int main()
{
  int minutes, seconds;
  double kph;

  cout<<"Minutes: "<<endl;
  cin>>minutes;
  cout<<"seconds: "<<endl;
  cin >>seconds;
  cout<<"speed in mph is "<<convertToMPH(minutes,seconds)<<endl;

  cout<<"enter speed in kph "<<endl;
  cin>>kph;
  cout << "your speed mph: " <<convertToMPH(kph)<<endl;
  return 0;
}
double convertToMPH(int minutes, int seconds)
{
  return(60 / (minutes + seconds / 60.));
}
double convertToMPH(double kph)
{
  return kph / 1.61;
}
