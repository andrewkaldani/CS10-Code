#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void averageWords(ifstream& in);
int main()
{
  string filename;
  cout<<"Enter file name: "<<endl;;
  cin>>filename;

  ifstream input;
  input.open(filename.c_str());

  if(input.fail())
  {
    cout<<"Fail"<<endl;
    exit(1);
  }
  averageWords(input);
  input.close();
  cin.get();
  return 0;
}
void averageWords(ifstream& in)
{
  int count = 0;
  int totalLength = 0;
  double average;
  char next;
  while(!in.eof())
  {
    int word = 0;
    in.get(next);
    while(next !=' '&& next !='\n' && next != ',' && next !='.')
    {
      word++;
      cout<<next;
      in.get(next);
      if(next == ' ' || next == '\n'|| next==','|| next == '.')
      {
        count++;
      }
    }
    cout<<next;
    totalLength+=word;
  }
  average = (double)totalLength/count;
  cout<<"Total length "<<totalLength<<endl;
  cout<<"Num of words "<<count<<endl;
  cout<<"avg: "<<average<<endl;
}
