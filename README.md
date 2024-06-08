# Distance Measurement Using Sharp IR Sensor with Arduino UNO

#### Project Overview

This project demonstrates how to measure distance using a Sharp IR sensor with an Arduino UNO. The sensor will read the distance to an object and print the value to the Serial Monitor.

#### Components Needed

1. **Arduino UNO Board**
2. **Sharp IR Sensor**
3. **Breadboard**
4. **Jumper Wires**

#### Block Diagram

![Sharp IR Sensor Diagram](sharp_ir_sensor_diagram.png)

#### Circuit Wiring

1. **Sharp IR Sensor:**
   - Connect the VCC pin of the Sharp IR sensor to the 5V pin on the Arduino.
   - Connect the GND pin of the Sharp IR sensor to the GND pin on the Arduino.
   - Connect the output pin (signal) of the Sharp IR sensor to the analog pin A0 on the Arduino.

#### Instructions

1. **Set Up the Circuit:**
   - Assemble the circuit according to the wiring instructions.
   - Ensure all connections are secure and components are correctly placed on the breadboard.

2. **Upload the Code:**
   - Copy and paste the provided code into the Arduino IDE.
   - Verify and upload the code to your Arduino board.

3. **Observe the Sensor Readings:**
   - Open the Serial Monitor in the Arduino IDE.
   - The measured distance will be printed in centimeters with a one-second interval.

#### Code Explanation

- **Initialization:**
  - The code includes the SharpIR library and defines the pin (A0) connected to the IR sensor along with the sensor model number (1080).

- **Setup Function:**
  - Initializes serial communication at a baud rate of 9600.

- **Loop Function:**
  - Reads the distance from the sensor and stores it in the `distance_cm` variable.
  - Prints the measured distance to the Serial Monitor.
  - Delays for one second before taking the next measurement.

#### Applications

- **Proximity Detection:** Use the Sharp IR sensor for detecting the presence and distance of objects in robotics and automation projects.
- **Obstacle Avoidance:** Implement in robots for obstacle detection and avoidance.
- **Distance Measurement:** Useful in applications requiring distance measurement and monitoring.


🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

## Made for you with ❣️ from ProjectsLearner