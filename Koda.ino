

#include <Keypad.h>
#include <Wire.h> 
#include <LiquidCrystal.h>

#define led 16
#define led2 17
#define stikalo 18

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

long first = 0;
long geslo = 5279;

char Tipka;
const byte ROWS = 4;
const byte COLS = 4;
bool pritisk = false;

char keys[ROWS][COLS] = {
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','*'},
  {'C','0','=','/'}
};
byte rowPins[ROWS] = {7,6,5,4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {3,2,15,14}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS); 

void setup()
{
Serial.begin(9600);
pinMode(led, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(stikalo, INPUT);
lcd.begin(16, 2);               // start lcd
for(int i=0;i<=3;i++);
lcd.setCursor(0,0);
  lcd.print("Calculator by");
  lcd.setCursor(0,1);
  lcd.print("Klemen & Andraz");
delay(2000);
lcd.clear();
lcd.setCursor(0, 0);
}


void loop()
{
  if (digitalRead(stikalo) == HIGH)                            
  {
    Tipka = customKeypad.getKey();
    switch(Tipka) 
    {
    case '1' ... '9': // This keeps collecting the first value until a operator is pressed "+-*/"
      lcd.setCursor(0,0);
      first = first * 10 + (Tipka - '0');
      lcd.print(first);
      break;
  
    case '=':
      lcd.setCursor(0,1);
      // preveri ali je vnos enak geslu
    
      if ((first/1000)>1 && (first/1000)<10)
      {
          if (first == geslo)
          {
            lcd.setCursor(0,1);
            lcd.print(first);
            delay(200);
            lcd.clear();
            delay(200);
            //lcd.setCursor(0,1);
            lcd.print(first);
            delay(200);
            lcd.clear();
            delay(200);
            lcd.setCursor(0,3);
            lcd.print("Success");
            digitalWrite(led, HIGH);
            delay(3000);
            first = 0;
            lcd.clear();
            digitalWrite(led, LOW);
          }  
          else
          {
            digitalWrite(led, LOW);
            digitalWrite(led2, HIGH);
            delay(500);
            digitalWrite(led2, LOW);
            delay(500);
            digitalWrite(led2, HIGH);
            delay(500);
            digitalWrite(led2, LOW);
            lcd.setCursor(0,3);
            lcd.print("Poskusi znova!");
            first = 0;
            delay(2000);
            lcd.clear();
          }
      }
      else {
        lcd.setCursor(0,3);   
        lcd.print("geslo ima 4 znake");
        delay(1000);
        lcd.clear();
        lcd.setCursor(0,3);
        first = 0;
      }
      break;
  
    case 'C':
      first = 0;
      lcd.clear();
      break;
    }
  }  
}
