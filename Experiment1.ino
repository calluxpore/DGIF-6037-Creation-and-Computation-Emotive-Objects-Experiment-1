// C++ code
//
#include <Servo.h>

int Sensor = 0;

int buttonstate = 0;

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  servo_9.attach(9, 500, 2500);
}

void loop()
{
  Sensor = analogRead(A0);
  Serial.println(Sensor);
  delay(100); // Wait for 100 millisecond(s)
  if (Sensor > 900) {
    servo_9.write(58);
  } else {
    servo_9.write(0);
  }
}