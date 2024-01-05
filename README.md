# Arduino Sensor-Controlled Servo

## Project Overview - https://github.com/calluxpore/DGIF-6037-Creation-and-Computation-Emotive-Objects-Experiment-1

This Arduino project demonstrates how to control a servo motor based on sensor readings. The code includes the Servo library to manage the servo motor connected to pin 9 and reads values from an analog sensor connected to pin A1. Depending on the sensor value, the servo motor's position is adjusted. This project is ideal for beginners looking to understand servo control with Arduino.

## Features

- **Sensor Integration**: Reads analog values from a sensor connected to pin A1.
- **Servo Motor Control**: Adjusts the position of a servo motor based on sensor readings.
- **Serial Communication**: Outputs sensor readings to the Serial Monitor for debugging and monitoring.
- **Conditional Logic**: Changes servo position based on the specific threshold of sensor readings.

## Technologies Used

- Arduino
- C/C++ (Arduino programming language)
- Servo Library

## Hardware Required

- Arduino board (e.g., Arduino Uno)
- Servo motor
- Analog sensor (e.g., a light or temperature sensor)
- Connecting wires

## Setup and Configuration

1. Connect the servo motor to pin 9 on the Arduino.
2. Connect the analog sensor to pin A1.
3. Ensure the Arduino board is powered appropriately.

## Installation

1. Install the Arduino IDE from [the official Arduino website](https://www.arduino.cc/en/Main/Software).
2. Connect your Arduino board to your computer.
3. Open the provided code in the Arduino IDE.
4. Upload the code to your Arduino board.

## Code Structure

- **Setup**: Initialize serial communication, configure input pins, and attach the servo.
- **Loop**: Continuously read the sensor value, output it to the Serial Monitor, and move the servo based on the sensor's reading.

## License

This project is open-sourced under the MIT License.

## Acknowledgements

- Arduino Community for extensive resources and guides.
- The Servo Library developers for providing the essential tools for servo control.

## Additional Notes

- The servo's response to sensor readings can be calibrated and modified depending on the application.
- This code is a basic example and can be expanded for more complex applications.

## Contact

For more information, queries, or feedback, please contact [GitHub Profile Link](https://github.com/calluxpore).
