#include<Servo.h>
Servo m1servo;
void setup(){
Serial.begin(9600); // Initialize Serial Communitication
m1servo.attach(9);} // attaches the servo on pin 9 to the servo object
 void loop(){
 if (Serial.available() > 0) { int data = Serial.read();
 switch (data) {
 case '1': //Number 1 is received
 m1servo.write(5); //tell servo to go to position in variable 'data'
 break;
 case '2' : //Number 2 is received,
 m1servo.write(10);
 break;
 case '3' : //Number 3 is received,
 m1servo.write(15);
 break;
case '4' : //Number 4 is received,
 m1servo.write(20);
 break;
 case '5': //Number 5 is received
 m1servo.write(25);
 break;
 case '6' : //Number 6 is received,
 m1servo.write(30);
 break;
 case '7' : //Number 7 is received,
 m1servo.write(35);
 break;
 case '8' : //Number 8 is received,
 m1servo.write(40);
 break;
 case '9': //Number 9 is received
 m1servo.write(45);
 break;
 default :
 break; } } }

