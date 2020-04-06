// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    // basic printf demo = 16 by 18 characters on screen

    uLCD.background_color(WHITE);
    uLCD.cls();
    uLCD.textbackground_color(WHITE);
    
    uLCD.text_string("107061271",0,0,FONT_7X8,BLUE);

//    uLCD.text_width(4); //4X size text

//    uLCD.text_height(4);

    uLCD.color(GREEN);

 //   uLCD.background_color(WHITE);

    for (int i=30; i>=0; --i) {

        uLCD.locate(5,5);

        uLCD.printf("%2D",i);

        wait(.5);

    }

}
