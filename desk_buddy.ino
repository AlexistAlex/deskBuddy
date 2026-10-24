#include <Servo.h>

Servo servoRight;
Servo servoLeft;

String command = " ";

const int pinVRx = A0;  // X Achse
const int pinVRy = A1;  // Y Achse
const int pinSW = 2;    // Button

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

  Serial.println("Details for axis values:");
  Serial.println("X: " + String(valueVRx));
  Serial.println("Y: " + String(valueVRy));
  Serial.println("------------------------");

  if (valueVRx < 1023 && valueVRy != 508) {
  /*
  for (posA = 180; posA >= 0; posA -= 1) {
        servoRight.write(posA);
      }
      for (posB = 0; posB <= 180; posB += 1) {
        servoLeft.write(posB);
    }
  */
      
  } else{
    servoRight.detach();
    servoLeft.detach();
  }

  /*

*/

  delay(4000);
}
