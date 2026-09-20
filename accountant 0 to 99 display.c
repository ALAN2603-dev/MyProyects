// I made this code in high school for a microcontroller, it counts 1 by 1 up to 99 with 2 displays, one of anode common and the,
//other one of cathode common, using transistors and etc, on a pcb.
#include <16f873.h>
#fuses   xt, nolvp, nowdt
#use  delay(clock=4000000)
#byte porta=5
#byte portb=6
#byte portc=7

void main()
{
int x=0, y=0, z=0;
int uni[10]={0xbf, 0x86, 0xdb, 0xcf, 0xe6, 0xed, 0xfc, 0x87, 0xff, 0xe7};
int dec[10]={0x00, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7c, 0x07, 0x7f, 0x67};

set_tris_a(0xff);// ENTRADAS
set_tris_c(0x00);// SALIDAS

   while(true)
   {
      // TODAS LAS SALIDAS C APAGADAS
      // HASTA QUE SE PRESIOME 1SEG LOS BOTOMES
      portc=0x00;
      delay_ms(1000);

         if(input(pin_a0))// BOTON 1
         {
            for(x=0;x<=9;x++)
            {
               portc=uni[x];
               delay_ms(1000);
            }
            x=0;
         }
         if (input(pin_a1))
         {
            for(y=0;y<=9;y++)
            {
               for(x=0;x<=9;x++)
               {
                  for(z=0;z<=9;z++)
                  {
                     portc=uni[x];
                     delay_ms(10);
                     portc=dec[y];
                     delay_ms(10);
                  }
                  z=0;
               }
               x=0;
            }
            y=0;
         }
   }
}
