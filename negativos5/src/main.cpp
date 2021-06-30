#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*
ok
*/
int main(void)
{
  int x, c = 0;
  for(int i = 0; i < SIZE; i++)
  {
    cin>>std::ws>>x;
    if(x<0)
      c++;
  }
  cout<<c<<std::endl;
  return 0;
}
