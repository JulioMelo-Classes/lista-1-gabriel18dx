#include "function.h"
#include <iostream>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> v;
    int n1 = 0, n2 = 1, aux = 0;

    while(n2 < n)
    {
      v.push_back(n2);
      aux = n2;
      n2 = n1 + n2;
      n1 = aux;
    }

    return v;
}
