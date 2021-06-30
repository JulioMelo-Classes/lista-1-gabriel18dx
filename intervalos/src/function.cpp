#include "function.h"
/*80%*/
void func()
{
  int x, i1=0, i2=0, i3=0, i4=0, fora=0;
  while( cin >> std::ws >> x) {
    // realização da contagem em relação aos intervalos
    if(x >= 0 && x < 25)
    {
      i1++;
    }
    else if(x >= 25 && x < 50)
    {
      i2++;
    }
    else if(x >= 50 && x < 75)
    {
      i3++;
    }
    else if(x >= 75 && x < 100)
    {
      i4++;
    }
    else
    {
      fora++;
    }
  }
  
  //saida das porcentagens
  setprecision(4); //tem que usar dentro do cout
  cout<<setprecision(4)<<(float)100*i1/(i1+i2+i3+i4+fora)<<endl;
  cout<<(float)100*i2/(i1+i2+i3+i4+fora)<<endl;
  cout<<(float)100*i3/(i1+i2+i3+i4+fora)<<endl;
  cout<<(float)100*i4/(i1+i2+i3+i4+fora)<<endl;
  cout<<(float)100*fora/(i1+i2+i3+i4+fora)<<endl;
}