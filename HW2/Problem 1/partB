#include<iostream>


using namespace std;

int main()
{
  double average = 0;
  double number = 0;
  double grade = 0;
  double total = 0;
  double i=1;


  cout<<"Enter the amount of quizzes: "<<endl;
  cin>>number;
  while (i<=number)
  {
  cout<<"Input grades: "<<endl;
  cin>>grade;
  if((grade == -1) || (grade > 30))
  {
    cout<<"enter a valid number! Re-enter a score"<<endl;
    cin>>grade;
  }
  total+=grade;
  i++;
  }
  average = total / number;
  cout<<"The average is "<<average<<" points on this exam"<<endl;
  return 0;

}
