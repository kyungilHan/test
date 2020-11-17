# include <LiquidCrystal_I2C.h>
#include <Wire.h>    
//Found address:  (0x27) texas
//Found address:  (0x3F) nxp
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x3F for a 16 chars and 2 line display

void setup() {
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  
  // Print a message on both lines of the LCD.
  lcd.setCursor(0,0);   //Set cursor to character 2 on line 0
  delay(200);
  lcd.print("Hello world!");
  
  lcd.setCursor(0,1);   //Move cursor to character 2 on line 1
  delay(200);
  lcd.print("LCD Tutorial");
}

void loop() {
  test
}
