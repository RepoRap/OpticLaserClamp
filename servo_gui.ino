// OPTICAL LASER BIO METER target angualtion
//AUTHOR: Chinmaie Gorla 
//DESCRIPTION: To rotate the target(both clockwise and anti clockwise upto 45 degrees)
//attested to the servo motor mounted over 
//the head clamp of optical Laser Bio Meter which is used to diagnose the IOL 
//power of Cataract patients
// Date of Latest Build: 12-06-2017:05:00 PM

#include<Servo.h>
Servo m1servo;//Initialize servo to borrow servo library
void setup(){
Serial.begin(9600); // Initialize Serial Communiticationat 9600 bits per second
m1servo.attach(9); // attaches the servo on pin 9 to the servo object
m1servo.write(105);}//initialise sero angle to mean position as measured
 
 void loop(){
 if (Serial.available() > 0) {
 int data = Serial.read();
 switch (data) { // Value in 'data' is being recieved from GUI through Serial Port
 case 'a': //Alphabet is recieved from GUI which iterates through switch case with variable loaded under 'data'
 m1servo.write(150); //shift to right extreme
 break;
 case 'b' : 
 m1servo.write(145);
 break;
 case 'c' : 
 m1servo.write(140);
 break;
case 'd' : 
 m1servo.write(135);
 break;
 case 'e': 
 m1servo.write(130);
 break;
 case 'f' : 
 m1servo.write(125);
 break;
 case 'g' : 
 m1servo.write(120);
 break;
 case 'h' : 
 m1servo.write(115);
 break;
 case 'i': 
 m1servo.write(110);
 break;
 case 'j': 
 m1servo.write(105);//Shift to mean position 
 break;
 case 'k': 
 m1servo.write(100);
 break;
 case 'l': 
 m1servo.write(95);
 break;
 case 'm': 
 m1servo.write(90);
 break;
 case 'n': 
 m1servo.write(85);
 break;
 case 'o': 
 m1servo.write(80);
 break;
 case 'p': 
 m1servo.write(75);
 break;
 case 'q': 
 m1servo.write(70);
 break;
 case 'r': 
 m1servo.write(65);
 break;
 case 's': 
 m1servo.write(60);//Shift to left extreme
 break;
 default :
 break; } } }
