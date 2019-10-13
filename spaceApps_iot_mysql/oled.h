#include <Wire.h>  // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306Wire.h" // legacy include: `#include "SSD1306.h"`


SSD1306Wire  display(0x3c, SDA, SCL);

void configurarOled()
{
    display.init();
    display.clear();
    display.display();
    display.flipScreenVertically();
    display.setTextAlignment(TEXT_ALIGN_LEFT);
    display.setFont(ArialMT_Plain_16);
    display.drawString(0,0,"Pantalla OK");
    
    display.display();
  
}

void debugOled(String msg)
{
    display.clear();
    display.setFont(ArialMT_Plain_16);
    display.drawString(0,0,msg);
    display.display();
}
