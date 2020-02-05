#include <iostream>
#include <iomanip>
using namespace std;
const int MAX =3;
void result(int arr[][MAX]);
void pick(int arr[][MAX], int player);
bool horizontal(int arr[][MAX], int player);
bool vertical(int arr[][MAX], int player);
bool diagonal(int arr[][MAX], int player);
bool win(int value, int player);

int main()
{
  int tic[MAX][MAX] = {{1,2,3},{4,5,6},{7,8,9}};
  result(tic);

  while(true)
  {
    pick(tic,88);
    result(tic);
    if(horizontal(tic,88)==true || vertical(tic,88)==true || diagonal(tic,88)==true)
    {
      cout<<endl<<"player X wins";
      break;
    }

  pick(tic,0);
  result(tic);
  if(horizontal(tic, 0) == true || vertical(tic, 0) == true || diagonal(tic, 88) == true)
  {
      cout << endl << "Player 0 won!";
      break;
  }
}
cout << endl;
return 0;
}
void result(int arr[][MAX])
{
  for(int i = 0; i < MAX; i++)
  {
    cout<<setw(2) << "|";
    for(int j = 0; j < MAX; j++)
    {
      cout<<setw(4);
      if(arr[i][j]==88)
      {
        cout<<"X"<<setw(4)<<"|";
      }
      else{
        cout<<arr[i][j]<<setw(4)<<"|";
      }
      cout<<setw(4);
    }
    cout<<endl;

  }
  return;
}
void pick(int arr[][MAX], int player){
    int move = 0;
    cout << "Player ";
    if(player == 88){
        cout << 'X';
    }
    else if(player == 0){
        cout << 0;
    }
    cout << " turn: ";
    cin >> move;
    for(int i = 0; i<MAX; i++){
        for(int j = 0; j<MAX; j++){
            if(arr[i][j] == move){
                arr[i][j] = player;
                break;
            }
        }
    }
    return;
}
bool horizontal(int arr[][MAX], int player)
{
  bool res = false;
  bool l1 = true;
  bool l2 = true;
  bool l3 = true;
  for(int i = 0; i <MAX; i++)
  {
  for(int j = 0; j<MAX; j++)
  {
    if(i==0)
    {
      if(win(arr[i][j],player) == false)
      {
        l1 = false;
        break;
      }
    }
    else if(i==1)
    {
      if(win(arr[i][j],player) == false)
      {
        l2 = false;
        break;
      }
    }
    else if(i==2)
    {
      if(win(arr[i][j],player) == false)
      {
        l3 = false;
        break;
      }
    }
  }
}
if(l1 == true || l2 == true || l3 == true)
{
  res = true;
}
return res;
}

bool vertical(int arr[][MAX], int player){
  bool res = false;
  bool a1 = true;
  bool a2 = true;
  bool a3 = true;
  for(int i = 0; i <MAX; i++)
  {
  for(int j = 0; j<MAX; j++)
  {
    if(i==0)
    {
      if(win(arr[i][j],player) == false)
      {
        a1 = false;
        break;
      }
    }
    else if(i==1)
    {
      if(win(arr[i][j],player) == false)
      {
        a2 = false;
        break;
      }
    }
    else if(i==2)
    {
      if(win(arr[i][j],player) == false)
      {
        a3 = false;
        break;
      }
    }
  }
}
if(a1 == true || a2 == true || a3 == true)
{
  res = true;
}
return res;
}
bool diagonal(int arr[][MAX], int player)
{
  bool res = false;
  bool l7 = true;
  bool l8= true;
  for(int i = 0; i<MAX; i++)
  {
    if(win(arr[i][i],player)==false)
    {
      l7 = false;
      break;
    }
  }
  int blank = 2;
  for(int i = 0; i<MAX;i++)
  {
    if(win(arr[i][blank],player) == false)
    {
      l8 = false;
      break;
    }
    blank--;
  }
  if(l7 == true || l8 == true)
  {
    res = true;
  }
  return res;
}
bool win(int value, int player){
    bool res = false;
    if(value == player){
        res = true;
    }
    return res;
}
