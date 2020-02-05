#include<iostream>
#include<cstring>
#include<cctype>


using namespace std;
int main()
{
  string s;
  cout<<"Enter a sentnece"<<endl;
  getline(cin,s);
  int size = s.length();
  cout<<size;
  return 0;
}
