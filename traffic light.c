//This code works with a circuit of a microcontoller, and its a representation of how works the traffic lights with a button for the people to cross the boulevard
#include <16f873.h>
#fuses xt, nolvp, nowdt
#use  delay(clock=4000000)
#byte porta=5
#byte portb=6
#byte portc=7

void main()
{
int x=0, y=0;
   set_tris_a(0xff);//input
   set_tris_b(0x00);//output

      while(true)
      {
         if(input(pin_a0))
         {
         portb=0x11;
         delay_ms(10000);
         }
            else
            {
            portb=0x0c;
            delay_ms(7000);
            portb=0x0a;
            delay_ms(500);
            portb=0x08;
            delay_ms(500);
            portb=0x0a;
            delay_ms(500);
            portb=0x08;
            delay_ms(500);
            portb=0x0a;
            delay_ms(500);
            portb=0x08;
            delay_ms(500);
            portb=0x09;
            delay_ms(10000);
            }
      }
}

