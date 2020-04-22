#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
void sortTwoFiles(ifstream& in1, ifstream& in2, ofstream& output);

int main()
{
  ifstream iFile1;
  ifstream iFile2;
  ofstream oFile;
  string iFileN1;
  string iFileN2;
  string oFileN;

  cout<<"Enter first input file: "<<endl;
  cin>>iFileN1;
  cout<<"Enter second input file: "<<endl;
  cin>>iFileN2;
  cout<<"Output file: "<<endl;
  cin>>oFileN;

  iFile1.open(iFileN1);
  if(iFile1.fail())
  {
    cout<<iFileN1<<" file fail"<<endl;

    exit(1);
  }
  iFile2.open(iFileN2);
  if(iFile2.fail())
  {
    cout<<iFileN2<<" file fail"<<endl;

    exit(1);
  }
  oFile.open(oFileN);
  if(oFile.fail())
  {
    cout<<oFileN<<" file fail"<<endl;
    exit(1);
  }
  sortTwoFiles(iFile1,iFile2,oFile);
  iFile1.close();
  iFile2.close();
  oFile.close();
  return 0;
}
void sortTwoFiles(ifstream& in1, ifstream& in2, ofstream& output)
{
  int a;
  int b;
  in1>>a;
  in2>>b;
  while(!in1.eof() && !in2.eof())
  {
    if(a<=b)
    {
      output<<a<<endl;
      in1>>a;
    }
    else
    {
      output<<b<<endl;
      in2>>b;
    }
  }
    if(a<=b)
    {
      while(!in2.eof())
      {
        output<<b<<endl;
        in2>>b;
      }

    }
    else{
      while(!in1.eof())
      {
        output<<a<<endl;
        in1>>a;
      }
    }
}
