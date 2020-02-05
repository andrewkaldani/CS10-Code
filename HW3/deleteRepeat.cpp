 #include<iostream>

using namespace std;
void input(char arr[], int &arraySize);
void deleteLet(char arr[], int &arraySize);
void output(char arr[], int arraySize);
const int size = 5;

int main(){
  int arraySize;
  char arr[size];
  input( arr, arraySize);
  deleteLet( arr, arraySize);
  output( arr,arraySize);
  return 0;
}
void input(char arr[], int &arraySize)
{
  cout << "How many values you want to insert: ";
  cin >> arraySize;
  for(int i = 0; i < arraySize; i++)
  {
        cout << "Enter value: ";
        cin >> arr[i];
    }
    return;
}

void deleteLet(char arr[], int &arraySize)
{
  for(int i = 0; i<arraySize; i++)
  {
    for(int j =i+1; j<arraySize; j++)
    {
      if(arr[i]==arr[j])
      {
        for(int c = j; c < arraySize-1; c++){
          arr[c] = arr[c+1];
        }
        arraySize--;
      }
    }
  }
}
void output(char arr[], int arraySize)
{
  for(int i = 0; i < arraySize; i++)
  {
    cout<<arr[i]<<endl;
  }
}
