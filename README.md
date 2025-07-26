# HuskyLens Face Recognition with Arduino

This project demonstrates how to use the HuskyLens AI camera with an Arduino Uno board to perform real-time face recognition. Once trained, the HuskyLens can detect and identify faces and send their coordinates and ID back to the Arduino for further processing.

 What is HuskyLens?

HuskyLens is a smart vision sensor by DFRobot that can perform AI-powered tasks such as face recognition, object tracking, color detection, and more — all without writing complex code. It’s perfect for Arduino-based AI applications.

-Components Used

- Arduino Uno
- HuskyLens AI Camera
- Jumper Wires
- USB cable for Arduino

- Circuit Connections

| HuskyLens Pin | Arduino Pin |
|---------------|-------------|
| VCC           | 5V          |
| GND           | GND         |
| TX            | D10         |
| RX            | D11         |

> Note: We are using `SoftwareSerial` on pins D10 and D11 for communication.

-Code Overview

- Initializes communication with HuskyLens via SoftwareSerial.
- Sets the algorithm mode to Face Recognition.
- Continuously requests data from HuskyLens.
- If a face is detected, prints the ID and coordinates (x, y) to the Serial Monitor.



- How to Use

1. Connect the HuskyLens to Arduino as shown above.
2. Power on HuskyLens and select “Face Recognition” from its internal menu.
3. Train a face by long pressing the function button until a colored box appears around the face.
4. Upload the Arduino code.
5. Open the Serial Monitor (set baud rate to 9600).
6. Bring the trained face into the camera view — you should see output like:

