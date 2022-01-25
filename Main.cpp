#include <Servo.h> //Imports A Servo Library Package
volatile long A; // It Is A Pre Defined In The Processor
float checkdistance_11_10() // Made a checkdistance Method
{
digitalWrite(11, LOW); // Turns Of The Ultrasonic Sensor LOW (OFF)
delayMicroseconds(2); // Delay The Ultrasonic Sensor By 2 Microseconds
digitalWrite(11, HIGH); // Sets The Digital Pin #11 To HIGH (ON)
delayMicroseconds(10); // Delays The Sensor's Reading 
digitalWrite(11, LOW); // Turns Of The Ultrasonic Sensor LOW (OFF)
float distance = pulseIn(10, HIGH) / 58.00;
delay(10); // Delay The Ultrasonic Sensor By 10 Milliseconds
return distance; // Returns The Distance Value To The Ultrasonic Sensor
}
Servo servo_1; // Declared Servo Motor 1 Variable
Servo servo_2; // Declared Servo Motor 2 Variable
Servo servo_3; // Declared Servo Motor 3 Variable
Servo servo_4; // Declared Servo Motor 4 Variable
Servo servo_5; // Declared Servo Motor 5 Variable
Servo servo_6; // Declared Servo Motor 6 Variable


void setup()
{
A = 0; // Set The Variable A To 0
pinMode(11, OUTPUT); // Defined Pin 11 As Output
pinMode(10, INPUT); // Defined Pin 10 As Input
servo_1.attach(2); // The First Servo Motor's Signal Wire Is Attached To Pin 2
servo_2.attach(3); // The Second Servo Motor's Signal Wire Is Attached To Pin 3 
servo_3.attach(4); // The Third Servo Motor's Signal Wire Is Attached To Pin 4
servo_4.attach(5); // The Fourth Servo Motor's Signal Wire Is Attached To Pin 5
servo_5.attach(6); // The Fifth Servo Motor's Signal Wire Is Attached To Pin 6
servo_6.attach(7); // The Sixth Servo Motor's Signal Wire Is Attached To Pin 7
}

void loop()
{
if (checkdistance_11_10() < 20) { // If Condition | Checks If Distance Is Less Than 20 Millimeters
A = random(0, 4); // Variable A Will Be Assigned A Random Number From 0-4 Which Is (1-3) In Non-Programming Aspect 
switch (A) // Start Of A Switch Statement
{
case 1: // If The Random Number (A Value) is 1, Run The Following Lines

delay(500); // Delays The Servo Motor Run Time By 500 milliseonds 
servo_1.write(0);// Servo Motor 1 Will Rotate To 0 Degree From Its Initial Position (Servo 1 Postion) ||Going Out
servo_2.write(160); // Servo Motor 2 Will Rotate To 160 From Its Initial Position (Servo 2 Postion) || Going Out
delay(2000); // Delays The Servo Motors Run Time By 2000 milliseconds
servo_1.write(100); // Servo Motor 1 Will Rotate To 100 Degrees From Servo 1 Position || Going In
servo_2.write(40); // Servo Motor 2 Will Rotate To 40 Degrees || Going In
delay(500); // Delay Servo Motor Run Time By 500 Milliseconds
break; // Break Out Of This Case Statement

case 2: // If Random Number (A Value) is 2, Run The Following Lines

delay(500); // Delay The Servo Motor Run Tim By 500 Milliseconds 
servo_3.write(0); // Servo Motor 3 Will Rotate To 0 Degree From Its Initial Position (Servo 3 Postion) ||Going Out
servo_4.write(160); // Servo Motor 4 Will Rotate To 160 From Its Initial Position (Servo 4 Postion) || Going Out
delay(2000); // Delays The Servo Motors Run Time By 2000 Milliseconds
servo_3.write(110); // Servo Motor 3 Will Rotate To 110 Degrees From Servo 3 Position || Going In
servo_4.write(50); // Servo Motor 4 Will Rotate To 50 Degrees || Going In
delay(500); // Delay Servo Run Time By 500 Milliseconds
break; // Break Out Of This Statement

case 3: // If Random Numer Value (A Value) is 3, Run The Following Lines

delay(500); // Delay The Servo Motor Time By 500 Milliseconds
servo_5.write(160); // Servo Motor 5 Will Rotate To 160 Degree From Its Initial Position (Servo 5 Postion) ||Going Out
servo_6.write(20); // Servo Motor 6 Will Rotate To 20 From Its Initial Position (Servo 6 Postion) || Going Out
delay(2000); // Delays The Servo Motors Run Time By 2000 milliseconds
servo_5.write(30); // Servo Motor 5 Will Rotate To 30 Degrees From Servo 5 Position || Going In
servo_6.write(140); // Servo Motor 6 Will Rotate To 140 Degrees From Servo 6 Position || Going In
delay(500); // Delay Servo Motor Run Time By 500 Milliseconds
break; // Break Out Of This Statement
}

}
}
