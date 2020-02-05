#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
  const int MAX = 100;
  char sentence[MAX+1];
  string replace = "";
  int space = 0;
  cout<<"Enter a sentence";
  cin.getline(sentence,MAX+1);
  int i =0;
  while(i<MAX && sentence[i] != '\0' && sentence[i] != '.')
  {
    if(isspace(sentence[i]) || sentence[i] == '.')
    {
      space++;
    }
    else{
      space = 0;
    }
    if(space < 2)
    {
      replace += tolower(sentence[i]);
    }
  }

if(replace.length()>0)
{
replace.at(0) = toupper(replace.at(0));
if(replace[replace.length()-1]=='' && replace.length()==1){
replace=replace;
}
else if(replace[replace.length()-1]=='')
{
  replace[replace.length()-1]='.';
}
else if(replace.length()==MAX)
{
  replace[MAX-1]='.';
}
else
{
  replace+='.';
}
}

cout<<"The sentence to enter: "<<endl << sentence<<endl;
cout<<"How it should be: "<<replace<<endl;
return 0;
}
