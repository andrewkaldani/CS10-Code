#include <iostream>
#include<cmath>
using namespace std;

void weights(double& pounds, double& ounces, double& kilograms, double& grams);
void length(double& feet, double& meters, double& inches, double& centimeters);
void poundsToKilo(double lbs, double oz, double& kgs, double& gms);
void kiloToPounds(double kgs, double gms, double& lbs, double& oz);
void ftToMeters(double ft, double in, double& met, double& cent);
void meterToFt(double met, double cent, double& ft, double& in);

int main()
{
  double ounces,kilograms,pounds, grams, feet, inches, centimeters, meters;
  int pickOne;
  char ans;
do{
cout<<"Select whether you would like to convert weight or lengths. "<<endl;
cout<<"Enter 1 for weights and 2 for length"<<endl;
cin>>pickOne;
if(pickOne == 1)
{
  weights(ounces,kilograms,pounds,grams);
}
else if(pickOne==2){
  length(feet,meters,inches,centimeters);
}

cout<<"try again?(y/n)"<<endl;
cin>>ans;
}while(ans == 'y' || ans == 'Y');
return 0;
}
void weights(double& pounds, double& ounces, double& kilograms, double& grams)
{
  int pick;
  cout<<"Pick wich convestion you would like"<<endl;
  cout<<"1. Pounds/Ounces to Kilo/Grams or 2 for the other way"<<endl;
  cin>>pick;

  if(pick == 1)
  {
    cout<<"Pounds: "<<endl;
    cin>>pounds;
    cout<<"Ounces: "<<endl;
    cin>>ounces;

      poundsToKilo(pounds,ounces,kilograms,grams);
    cout<<pounds<<" pounds = "<<kilograms<<" kilograms and "<<ounces<<" oz = "
     << grams<<" grams"<<endl;
  }
    else if(pick == 2)
    {
      cout<<"kilograms: "<<endl;
      cin>>kilograms;
      cout<<"grams: "<<endl;
      cin>>grams;

      kiloToPounds(kilograms, grams, pounds,  ounces);

      cout<<kilograms<<" kilograms = "<<pounds<<" pounds and "<<grams<<" gms = "
      <<ounces<<" ounces"<<endl;
    }

}
void length(double& feet, double& meters, double& inches, double& centimeters)
{
  int pick;
  cout<<"Pick wich convestion you would like"<<endl;
  cout<<"1. feet/inches to meters/centimeters or 2 or the other way"<<endl;
  cin>>pick;

  if(pick == 1)
  {
    cout<<"feet: "<<endl;
    cin>>feet;
    cout<<"inches: "<<endl;
    cin>>inches;

    ftToMeters(feet,inches,meters,centimeters);
    cout<<feet<<" feet = "<<meters<<" meters and "<<inches<<" inches "
    <<centimeters<<" centimeters"<<endl;
  }
    else if(pick == 2)
    {
      cout<<"meters: "<<endl;
      cin>>meters;
      cout<<"centimetes: "<<endl;
      cin>>centimeters;

      meterToFt(meters,centimeters,feet,inches);

      cout<<meters<<" meters = "<<feet<<" feet and "<<centimeters<<" cm = "
      <<inches<<" inches"<<endl;
    }
}
void poundsToKilo(double lbs, double oz, double& kgs, double& gms){
  kgs = lbs * 0.45359;
  gms = 28.3495 * oz;

}
void kiloToPounds(double kgs, double gms, double& lbs, double& oz)
{
  lbs = kgs * 2.2046;
  oz = gms * 0.035274;
}
void ftToMeters(double ft, double in, double& met, double& cent)
{
  met = ft  * 0.3048;
  cent = in * 2.54;
}
void meterToFt(double met, double cent, double& ft, double& in)
{
  ft = met * 3.28084;
  in = cent * 0.393701;
}
