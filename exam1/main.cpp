#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D7, D0, D2);
PwmOut PWM1(D6);

int main()

{

      uLCD.printf("107061271");
      wait(30);
      
      while(1){
      PWM1.period(0.001);
      for( i=0; i<1; i+=0.1 ){

        PWM1 = i;

        wait(0.1);
      }
      for( j=0; j>0; j-=0.1 ){

        PWM1 = j;

        wait(0.1);
      }

  }
      
       
      

}