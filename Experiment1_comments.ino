// Include the Servo library to control servo motors
#include <Servo.h>

// Declare an integer variable to store the sensor reading
int Sensor = 0;

// Create a Servo object for controlling the servo attached to pin 9
Servo servo_9;

// The setup function runs once when the Arduino starts or resets
void setup()
{
  // Configure pin A1 as an input
  pinMode(A1, INPUT);
  
  // Start serial communication at 9600 bps
  Serial.begin(9600);
  
  // Attach the servo on pin 9 and set its minimum and maximum pulse widths (in microseconds)
  // This is useful when the default pulse widths (typically 1000us min, 2000us max) do not match your servo
  servo_9.attach(9, 500, 2500);
}

// The loop function runs repeatedly after the setup is done
void loop()
{
  // Read the analog value from pin A1 and store it in the Sensor variable
  Sensor = analogRead(A1);
  
  // Send the sensor value to the Serial Monitor
  Serial.println(Sensor);
  
  // Pause the loop for 100 milliseconds
  delay(100);
  
  // If the sensor value is less than 30
  if (Sensor < 30) {
    // Move the servo to approximately 58 degrees (angle is approximation depending on the servo calibration)
    servo_9.write(58);
  } else {
    // Else, move the servo to the 0-degree position (or its starting position)
    servo_9.write(0);
  }
}
