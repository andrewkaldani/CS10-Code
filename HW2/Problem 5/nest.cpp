#include <iostream>

using namespace std;

int  main()
{
  for(int i = 1; i<=5; i++){
    for(int j =1; j<=i; j++)
      cout<<"O";

  for (int k=i+1; k<=8; k++)
    cout<<"X";
    cout<<endl;
  }


  return 0;
}
