#include <iostream>
#include <iostream>

using namespace std;

int main()
{
  for(int i = 10; i<=18; i+=2){
  for(int j=5; j>=1; j--){
  if(j== 1)
    {
    cout<<i<<" "<<j<<endl;
    }
    else{
      cout<<i<<" "<<j<<",";
    }

    }
  }
}
return 0;
}
