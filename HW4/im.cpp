#include<iostream>
#include<cstring>
#include<cctype>
#include<string.h>
using namespace std;
int main()
{
string str;
int i = 0;

getline(cin,str);
int len = str.length();
cout<<str<<endl;

for(i=0;str[i]!= '\0'; i++)
{
  if(str[i]=='|')
  {
    if(str[i+1]=='\0'){}
  }
  else{
    str[i]=tolower(str[i]);
  }
}
for(int i =0; i< len; i++)
{
  if(i == 0){
    str[i]=toupper(str[i]);
  }
  if(i=='\0'){
    if(i+1>len){
      str.erase(i+1,1);
    }
  }
  if(str[i] == '.'){
    if(i+1>len){

    }
    else{
      str[i+2]=toupper(str[i+2]);
    }
  }
}
cout<<str<<endl;
return 0;


}
