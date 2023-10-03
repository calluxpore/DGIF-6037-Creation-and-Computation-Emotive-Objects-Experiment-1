// Include the Servo library to manage servo motors
#include <Servo.h>

// Declare a variable to store the value from the analog sensor
int Sensor = 0;

// Declare a variable for button state (though it's not used in this code)
int buttonstate = 0;

// Create a Servo object to control a servo motor
Servo servo_9;

// The setup() function runs once upon startup
void setup()
{
  // Set the A0 pin as input to read values from the analog sensor
  pinMode(A0, INPUT);
  
  // Initialize serial communication at 9600 baud for debugging and monitoring
  Serial.begin(9600);
  
  // Attach the servo motor to pin 9 with pulse widths ranging from 500 to 2500 microseconds
  servo_9.attach(9, 500, 2500);
}

// The loop() function runs repeatedly after setup() completes
void loop()
{
  // Read the value from the sensor connected to A0
  Sensor = analogRead(A0);
  
  // Print the sensor's value to the Serial Monitor for monitoring
  Serial.println(Sensor);
  
  // Pause for 100 milliseconds to create a small delay between readings
  delay(100); 
  
  // Check if the sensor value is greater than 900
  if (Sensor > 900) {
    // If it is, set the servo to 58 degrees
    servo_9.write(58);
  } else {
    // Otherwise, set the servo to 0 degrees
    servo_9.write(0);
  }
}
