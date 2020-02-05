
  #include<iostream>
  #include<cstring>


  using namespace std;
  int main()
  {
    int size=10;
    int i =0;
    char arr[size];
    cout<<"Enter a word"<<endl;
    cin.get(arr,size);

    for(i = 0; i < 10; i++)
    {
      if(islower(arr[i]))
      {
        cout<<char(toupper(arr[i]));
        cout<<endl;
      }
    }
    return 0;
  }
