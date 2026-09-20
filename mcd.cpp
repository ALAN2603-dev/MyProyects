// this is a code of find the maximum common divisor
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
