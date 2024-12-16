


/**
 * Displays text sent over the serial port (e.g. from the Serial Monitor) on
 * an attached LCD.
 */
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int bagel = 0;
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x3f, 20, 4);
int Q = 0;
int digitalreadten = 0;
int Detonate;
int Ready = 0;
int anal4 = 0;
void setup() {
  delay(200);
  pinMode(10, INPUT_PULLUP);
  tone(4, 70, 10);
  delay(15);
  tone(4, 350, 5);
  delay(15);
  tone(4, 800, 5);
  delay(15);
  tone(4, 1600, 5);
  delay(15);
  tone(4, 3200, 5);
    tone(4, 70, 10);
  delay(15);
  tone(4, 350, 5);
  delay(15);
  tone(4, 800, 5);
  delay(15);
  tone(4, 1600, 5);
  delay(15);
  tone(4, 3200, 5);
  delay(300);
  lcd.begin();
  lcd.noBacklight();
  delay(300);
  lcd.backlight();
 

  lcd.print("Connecting...");
  delay(700);
  lcd.clear();
  lcd.print("DATAEST");
  delay(160);
   lcd.clear();
  lcd.print("LOAD");
  delay(160);
  lcd.clear();
  lcd.print("SERIAL INT");
  delay(320);
  lcd.clear();
  lcd.print("COMPLETE");
  delay(420);
  lcd.clear();
  tone(4, 220, 20);
  delay(500);

   lcd.print("       WELCOME      ");
  delay(700);



  delay(500);
  tone(4, 1111, 15);
  delay(20);
  tone(4, 1111, 15);
  delay(20);
  tone(4, 1111, 15);
  delay(20);
  tone(4, 1111, 15);
  delay(20);
  // beginialize the serial port at a speed of 9600 baud
  Serial.begin(9600);
lcd.clear();
  lcd.print("Ready. Send serial  If no serial, switchdata.               the 20A red on side.");
  if (digitalreadten < 1) {lcd.clear(); lcd.print("Ready. Send serial  If no serial, switchdata. OVWR MODE     the 20A red on side.");}
}

void loop() {
  analogWrite(2, 1);
  analogWrite(4, 0);
  digitalreadten = digitalRead(10);
  if (Serial.available()) {lcd.clear();
    }
  while (digitalreadten < 1) {
    
    if (Serial.available()) {tone(4, 200, 7); delay(400);
    }
    // Write all characters received with the serial port to the LCD.
    while (Serial.available() > 0) { 
      lcd.write(Serial.read());
     }
    
  }
  
  // If characters arrived over the serial port...
  if (Serial.available()) {
    // Wait a bit for the entire message to arrive;
    lcd.clear();
    lcd.print("Loading");
    delay(400);

    // Clear the screen
    lcd.clear();
    lcd.noBacklight();
    delay(50);
    lcd.backlight();
    Ready = 186;
    // Write all characters received with the serial port to the LCD.
    while (Serial.available() > 0) {
      lcd.write(Serial.read());
      Ready = 232;
    }
    tone(4, 300, 5);
    delay(25);
    tone(4, 100, 5);
    delay(50);
  }
}
