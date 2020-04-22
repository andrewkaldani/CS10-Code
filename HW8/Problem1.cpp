#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void calculate(ifstream& input, ofstream& output);
int main()
{
  ifstream input;
  ofstream output;
  input.open("input.txt");

  if(input.fail())
  {
    cout<<"fail"<<endl;
    exit(1);
  }
  output.open("output.txt");
  if(output.fail())
  {
    cout<<"fail"<<endl;
    exit(1);
  }
  calculate(input,output);
  output.close();
  input.close();


}
void calculate(ifstream& input, ofstream& output)
{
  int i,sum,a[10];
  string first,last;
  double average=0;
  input>>first;
  while(input)
  {
    sum = 0;
    input>>last;
    output<<first<<" "<<last<<" ";
    for(int i=0;i<10;i++)
    {
    input>>a[i];
    sum+=a[i];
  }


  for(int i=0; i<10;i++)
  output<<a[i]<<" ";
  average = sum/10;
  output<<"Average is:"<<average<<endl;
  input>>first;
}
}
