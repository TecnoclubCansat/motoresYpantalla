#include <Servo.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


int servo1 = 10;
int servo2 = 9;
int led = 13;
LiquidCrystal_I2C lcd(0x27,20,4); 

Servo Servo1;
Servo Servo2;

void setup() {
   Servo1.attach(servo1);
   Servo2.attach(servo2);
   digitalWrite(led,LOW);
   Serial.begin(9600);

   lcd.init();
   lcd.backlight();

   Servo1.write(0);
   Servo2.write(0);
}
void loop(){
   // Primera posición
   Servo1.write(1);
   Servo2.write(1);
   Serial.print("Eje x del Servomotor 1: ");
   Serial.println(Servo1.read());
   Serial.print("Eje y del Servomotor 2: ");
   Serial.println(Servo2.read());
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Eje x Servo 1: ");
   lcd.print(Servo1.read());
   lcd.setCursor(0,2);
   lcd.print("Eje y Servo 2: ");
   lcd.print(Servo2.read());  
   delay(1000);
   digitalWrite(led,HIGH);
   delay(250);
   digitalWrite(led,LOW);
   delay(500);
   // Segunda posición:
   Servo1.write(90);
   Servo2.write(90);
   Serial.print("Eje x del Servomotor 1: ");
   Serial.println(Servo1.read());
   Serial.print("Eje y del Servomotor 2: ");
   Serial.println(Servo2.read());
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Eje x Servo 1: ");
   lcd.print(Servo1.read());
   lcd.setCursor(0,2);
   lcd.print("Eje y Servo 2: ");
   lcd.print(Servo2.read());  
   delay(1000);
   digitalWrite(led,HIGH);
   delay(500);
   digitalWrite(led,LOW);
   delay(250);
   digitalWrite(led,HIGH);
   delay(500);
   digitalWrite(led,LOW);
   delay(250);
   // Tercera posición
   Servo1.write(180);
   Servo2.write(180);
   Serial.print("Eje x del Servomotor 1: ");
   Serial.println(Servo1.read());
   Serial.print("Eje y del Servomotor 2: ");
   Serial.println(Servo2.read());
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Eje x Servo 1: ");
   lcd.print(Servo1.read());
   lcd.setCursor(0,2);
   lcd.print("Eje y Servo 2: ");
   lcd.print(Servo2.read());   
   delay(1000);
   digitalWrite(led,HIGH);
   delay(1000);
   digitalWrite(led,LOW);
   delay(1000);

}