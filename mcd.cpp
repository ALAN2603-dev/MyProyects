/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

int main()
{
    int a;
    std:: cin >> a;
    int b;
    std:: cin >> b;
    while (b!=0)
    {
        int r = a%b;
        a = b;
        b = r;
    }    
    std::cout<< a << " ES EL MAXIMO COMUN DIVISOR";
    return 0;
    
}