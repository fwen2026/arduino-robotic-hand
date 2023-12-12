#include <Servo.h>

//init pos objects
int pos;

//inits the servo objects.
Servo servo_5;
Servo servo_6;
Servo servo_7;

void setup(){
  pos = 0;
  //"attributes" each object to the actual motor itself
  servo_5.attach(5, 500, 2500);
  servo_6.attach(6, 500, 2500);
  servo_7.attach(7, 500, 2500);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  //state 1
  if(pos == 0){
    for(pos; pos < 180; ++ pos){
    	servo_5.write(pos);
      servo_6.write(pos);
      servo_7.write(pos);
    }
  }
  //state 2
  else if(pos == 180){
    for(pos; pos > 0; -- pos) {
      servo_5.write(pos);
      servo_6.write(pos);
      servo_7.write(pos);
    }
  }›
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
}