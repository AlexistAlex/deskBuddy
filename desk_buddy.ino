#include <Servo.h>

Servo servoRight;
Servo servoLeft;

String command = " ";

const int pinVRx = A0; // X Achse
const int pinVRy = A1; // Y Achse
const int pinSW = 2; // Button

int posA = 0;
int posB = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinSW, INPUT_PULLUP);
  servoRight.attach(2);
  servoLeft.attach(3);
}

void loop() {

  int valueVRx = analogRead(pinVRx);

  int valueVRy = analogRead(pinVRy);

  int valueSW = digitalRead(pinSW);

  Serial.println("X: " + valueVRx + " | Y: " + valueVRy + " | SW: " + valueSW);
/*
if(Serial.available() > 0){
    command = Serial.readString();

    command.trim();

    if(command == "Drive"){
    for (posA = 180; posA >= 0; posA -= 1) {
    servoRight.write(posA);                             
    }
    for (posB = 0; posB <= 180; posB += 1) { 
    servoLeft.write(posB);                     
    }
  }
}
*/
  
delay(200);
}
