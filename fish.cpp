#include <Servo.h>
 
Servobabiservo;  // create servo object to control a servo

 
int pos = 0;    // variable to store the servo position
 
void setup() {
 babiservo.attach(13);  // attaches the servo on pin 13 to the servo object
}
 
void loop()
{
      pos=150;
   babiservo.write(pos);              // tell servo to go to position in variable 'pos'
   delay(200);                       // waits 15ms for the servo to reach the position
    pos=90; 
   babiservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(200);                       // waits 15ms for the servo to reach the position
      pos=150;
   babiservo.write(pos);              // tell servo to go to position in variable 'pos'
   delay(200);                       // waits 15ms for the servo to reach the position
    pos=90; 
   babiservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(86399400);          
  
  
}