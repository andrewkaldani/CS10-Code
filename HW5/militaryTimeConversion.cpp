#include <iostream>

using namespace std;

void getTime(int& hour, int& minutes);
void output(int hour, int minutes, char am);
char convert(int& hour, int& minutes);
int main()
{
  int hour, minutes;
  char again;
  do{
    getTime(hour,minutes);
    char am = convert(hour,minutes);
    output(hour, minutes,am);
    cout<<"want to try it again? "<<endl;
    cin>>again;
  } while(again == 'Y' || again == 'y');
  return 0;
}
void getTime(int& hour, int& minutes)
{
  cout<<"enter what hour it is: "<<endl;
  cin>>hour;

  cout<<"enter minutes "<<endl;
  cin>>minutes;
}
char convert(int& hour, int& minutes)
{

  char am;

  if(hour > 12 && hour <= 24){
    hour = hour -12;
  }

  else if(hour > 24 || minutes > 59)
  {
    cout<<"INVALID ENTER A CORRECT TIME!!!"<<endl;
    getTime(hour,minutes);
    char am = convert(hour,minutes);
  }
  if (hour >= 12) {
    am = 'A';
  }
  else{
    am = 'P';
  }
  return am;
  }

  void output(int hour, int minutes, char am)
  {
    cout<<"The time is "<<hour <<":"<<minutes<< am<<"M"<<endl;
  }
