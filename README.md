# Proximity Gate Control with Servo

## Description
This project demonstrates a simple proximity-based gate control system using an ultrasonic sensor, a button, and a servo motor. The gate will open automatically when an object is detected within 25 cm of the ultrasonic sensor or when a button is pressed. The servo motor will control the gate's position, moving it to an open position (90 degrees) when triggered and back to the closed position (0 degrees) otherwise.

## Components Used
1. **Arduino Uno**: The main microcontroller that controls the system.
2. **Servo Motor**: Used to control the gate's opening and closing.
3. **Ultrasonic Sensor (HC-SR04)**: Measures the distance to an object. It helps in detecting when an object is near the gate.
4. **Push Button**: Allows the gate to be manually opened by pressing the button.
5. **Jumper Wires**: For making connections between components.

## Wiring Diagram

[Diagram](materials/proximity-gate-control.mp4)

A schematic of the wiring is provided below. Make sure to follow the pin connections correctly to avoid errors in operation:

- **Ultrasonic Sensor:**
  - `VCC` → 5V
  - `GND` → GND
  - `Trig Pin` → Pin 3
  - `Echo Pin` → Pin 2

- **Push Button:**
  - One side of the button to `Pin 4`
  - The other side to `GND`

- **Servo Motor:**
  - `VCC` → 5V
  - `GND` → GND
  - `Signal Pin` → Pin 10

## Video
You can view a demonstration of this project in the video below:

[Video Demonstration](materials/video.mp4)

## TinkerCAD Link
You can find the full project simulation on TinkerCAD. Here’s the link to view or modify the circuit:

[View on TinkerCAD](https://www.tinkercad.com/things/0RjTHuLYcQd-proximity-gate-control-with-servo)
