#include <iostream>

using namespace std;

int main()
{
double weight;
double minutes;
double mets;
double caloriesBurned;


cout<<"Enter your weight: "<<endl;
cin>>weight;
weight = weight / 2.2;


cout<<"How many minutes of exercising: "<<endl;
cin>>minutes;


cout<<"Running = 8 mets"<<endl;
cout<<"Sleep = 1 mets"<<endl;
cout<<"basketball = 10 mets"<<endl;
cout<<"Enter the amount of MEts done for the day: "<<endl;
cin>>mets;

caloriesBurned = (0.0175 * mets * weight * minutes);


cout<<"Total calories burned: " <<caloriesBurned<<endl;

return 0;

}
