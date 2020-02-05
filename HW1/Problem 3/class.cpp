#include<iostream>

using namespace std;
int main()
{
  int day;
  cout<<"1-Monday"<<endl;
  cout  <<"2-Tuesday"<<endl;
  cout  <<"3-Wednesday"<<endl;
  cout  <<"4-Thursday"<<endl;
  cout<<"5-Frdiay"<<endl;
  cout<<"Enter a number corresponding to a day of the week: "<<endl;
  cin>>day;

  switch(day){
    case 1:
    cout<<"Monday: CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;
    break;

    case 2:
    cout<<"Tuesday: PHYS 2 at 12:10, CSCI 10 lab at 2:15"<<endl;
    break;

    case 3:
    cout<<"Wednesday: CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;
    break;

    case 4:
    cout<<"Thursday: PHYS 2 at 12:10"<<endl;
    break;

    case 5:
    cout<<"Friday: CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45"<<endl;
    break;

    default:
    cout<<"That's not a valid day"<<endl;

  }
  return 0;
}
