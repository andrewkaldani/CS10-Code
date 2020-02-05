#include<iostream>


using namespace std;

int main()
{
  int size;
  double average = 0;
  double total = 0;
  double grade[100];
  double scores;

  int i;
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
  average = total / size;
  cout<<"The average is "<<average<<endl;
  return 0;

}
