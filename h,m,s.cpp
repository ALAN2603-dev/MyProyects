// in tis code, you may bring a number of seconds and it transform to hours, minutes and secondds format.
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
