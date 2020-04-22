#include<iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int min(int arr[], int size);
int max(int array[], int size);
int main()
{
  int number , i , size;
  double average = 0;
  double total = 0;
  int grade[100];
  double scores;



  while (true)
  {
  cout<<"Input grades enter -2 when done: "<<endl;
  cin>>scores;
  if((scores == -1.0) || (scores > 30.0))
  {
    cout<<"enter a valid number! Re-enter a score"<<endl;
    cin>>scores;
  }
  if(scores == -2.0)
  {
    break;
  }
  size++;
  grade[i++] = scores;
  }

  for(int j = 0; j < i; j++)
  {
    total += grade[j];
  }


  cout << "The min is: " << min(grade,size)<<endl;
  cout<<" the max is "<<max(grade,size)<<endl;


  average = total / size;
  cout<<"The average is "<<average<<endl;
  return 0;

}


int min(int arr[], int size)
{
  int one = arr[1];
  for(int i = 0; i< size; i++)
  {
    if(arr[i]<one)
    {
      one = arr[i];
    }


  }
  return one;
}
int max(int array[], int size)
{
  int large = array[1];
  for(int i = 0; i< size; i++)
  {
    if(array[i]>large)
    {
      large = array[i];
    }

  }
  return large;
}
