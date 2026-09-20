/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
int main()
{
    int segundos;
    std::cin >> segundos;
    int h = (segundos/3600);
    int resto =  (segundos%3600);
    int m =  (resto/60);
    int r =  (resto%60);
    
    std::cout << h << "horas " << m << "minutos " << r << "segundos.";

    return 0;
}