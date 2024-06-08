/*
    Project name : Distance Sharp IR Sensor
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-distance-sharp-ir-sensor
*/

// Include the SharpIR library:
#include "SharpIR.h"

// Define the pin connected to the IR sensor and the model number:
#define IRPin A0
#define model 1080

// Create a variable to store the distance:
int distance_cm;

// Create a new instance of the SharpIR class:
SharpIR mySensor = SharpIR(IRPin, model);

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
}

void loop() {
  // Get a distance measurement and store it as distance_cm:
  distance_cm = mySensor.distance();

  // Print the measured distance to the serial monitor:
  Serial.print("Mean distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  // Delay for 1 second before taking the next measurement:
  delay(1000);
}
