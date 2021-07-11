/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n, x;

    cin>>std::ws>>m;
    cin>>std::ws>>n;
    x=m;
    
    if(n > 0)
        for(int i=1; i<n; i++)
            x += m+i;
    else{
        for(int i=1; i<n; i++)
            x += m-i;
    }
    cout<<x<<endl;

    return 0;
}
