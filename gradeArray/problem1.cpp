#include<iostream>


using namespace std;

int main()
{
  int size;// find array length
  double average = 0;
  double total = 0;
  double grade[100];
  double scores;
  int i;

  while (true)
  {
  cout<<"Input grades: "<<endl;
  cin>>scores;
  if(scores == -1.0)
  {
    break;
  }
  size++;// adds one to the array length
  grade[i++] = scores; //stores scores in array grade
  }

  for(int j = 0; j < size; j++)
  {
    total += grade[j]; // loops through the array and adds them
  }
  average = total / size;
  cout<<"The average is "<<average<<endl;
  return 0;

}
