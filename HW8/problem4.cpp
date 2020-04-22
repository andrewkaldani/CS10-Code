#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void correct(ifstream& input, ofstream& output);

int main()
{
  ifstream input;
  ofstream output;
  string inputFile;
  string outputFile;

  cout<<"Enter file name: "<<endl;;
  cin>>inputFile;
  cout<<"output file: "<<endl;
  cin>>outputFile;

  input.open(inputFile.c_str());

  if(input.fail())
  {
    cout<<"Fail"<<endl;
    exit(1);
  }
  output.open(outputFile.c_str());
  correct(input,output);
  input.close();
  output.close();
  return 0;
}
void correct(ifstream& input, ofstream& output)
{
  char next;
  input.get(next);

  while(!input.eof())
  {
    if(next == 'c')
    {
      output<<next;
      input.get(next);
      if(next=='i')
      {
        output<<next;
        input.get(next);
        if(next == 'n')
        {
          output<<next;
          input.get(next);
          while(next!=';')
          {
            if(next == '<')
            {
              input.get(next);
              if(next == '<')
              output<<">>";

              else
              output<<next;

            }
            else
            output<<next;
            input.get(next);

          }
        }

      }
      if(next == 'o')
      {
        output<<next;
        input.get(next);
        if(next == 'u')
        {
          output<<next;
          input.get(next);
          if(next == 't')
          {
            output<<next;
            input.get(next);
            while(next!=';')
            {
              if(next == '>')
              {
                input.get(next);
                if(next == '>')
                output<<"<<";

                else
                output<<next;

              }
              else
              output<<next;
              input.get(next);
          }
        }
      }
    }
  }
  output<<next;
  input.get(next);
}
}
