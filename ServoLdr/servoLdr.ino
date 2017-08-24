
#include <Servo.h>
//@author Riyadh Uddin 25-08-2017
//Github: https://riyadhbd.github.io
//Controlling Servo with LDR For Advance Vision & Food Slicing
Servo uddin;//creating new servo
int Ldr = A0;//ldr
int position;
void setup()
{
Serial.begin(9600);
pinMode(Ldr, INPUT);
uddin.attach(8);
}
void loop()
{
int LdrState = analogRead(Ldr);
if (LdrState <=300) {
 for ( position = 0; position <= 180; position += 1) {
    //LdrState = map(LdrState, 0, 1023, 0, 179);
    uddin.write(position);             
    delay(10);                     
  }
Serial.println("LDR Down, Servo is ON");
}
else { 
for (position = 20; position <= 90; position += 1){
     uddin.write(position); 
     delay (10);
   }
Serial.println("--LDR is Bright, Servo Down--");
}
} 
