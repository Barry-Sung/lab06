#include "mbed.h"

#include "TextLCD.h"


DigitalOut led(LED_RED);

TextLCD lcd(D2, D3, D4, D5, D6, D7);


int main()

{

      int x=0;

      lcd.printf("107061271\n");

      while(true)

      {

       //     led = !led;             // toggle led

            for (int x=30; x>=0; --x) {
                  lcd.locate(5,1);

                  lcd.printf("%5i",x);    //conuter display

                  wait(1);

                  
            }

      }

}