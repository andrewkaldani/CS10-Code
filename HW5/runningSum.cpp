#include<iostream>
using namespace std;

int main()
{
  int numbers;
  int sum;



  while(true)
  {
    cout<<"Enter numbers "<<endl;
    cin>>numbers;
    if(numbers == -1)
    {
      break;
    }
    sum+=numbers;
  }
  cout<<sum<<endl;
  return 0;
}
