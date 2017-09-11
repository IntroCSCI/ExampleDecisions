#include<iostream>

using namespace std;

int main()
{
  int whole1, whole2, whole3;
  double decimal1, decimal2;

  cout<<"Enter three whole numbers: ";
  cin>>whole1>>whole2>>whole3;

  if( whole1 > whole2 && whole1 > whole3 )
  {
    cout<<"This is case A"<<endl;
  }
  else if( whole1 == whole2 && whole1 == whole2 )
  {
    cout<<"This is case B"<<endl;
  }
  else
  {
    cout<<"This is case C"<<endl;
  }

  decimal1 = whole1 * -1.0;
  decimal2 = whole2 * whole3;

  if( decimal1 > 0 || decimal2 < 0 )
  {
    cout<<"This is case D"<<endl;
  }
  if( decimal1 >= decimal2 )
  {
    cout<<"This is case E"<<endl;
  }
  return 0;
}
