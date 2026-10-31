
# StreetSense Testing Documentation

## Overview
This document records the testing procedures, observations, and results of StreetSense: Smart Automated Street Lighting System.

## Testing Objectives
- Verify ultrasonic distance measurement.
- Check Arduino input processing.
- Verify LED activation according to detected distance.
- Test coordination between the three LED pairs.
- Evaluate the system's overall response during operation.

## Test Cases and Results

| Test | Procedure | Expected Result | Actual Result |
|---|---|---|---|
| Distance Detection | Move a hand closer to and farther from the ultrasonic sensor. | Sensor detects changes in distance. | The sensor responds to changes in the distance of the hand. |
| LED Pair 1 Activation | Place a hand close to the sensor. | LEDs 1 and 2 activate. | LEDs 1 and 2 activate when the hand is close to the sensor. |
| LED Pair 2 Activation | Move the hand slightly farther away. | LEDs 3 and 4 activate. | LEDs 3 and 4 activate at the next distance zone. |
| LED Pair 3 Activation | Move the hand farther away again. | LEDs 5 and 6 activate. | LEDs 5 and 6 activate at the farther distance zone. |
| LED Zone Coordination | Move the hand through the different distance zones. | The corresponding LED pairs respond to the detected distance. | All three LED pairs respond to their respective distance zones. |

## Testing Environment
- Arduino Uno R3 compatible board (ATmega328P)
- Ultrasonic distance sensor
- Six white 5mm LEDs
- 220-ohm resistors
- 400-point solderless breadboard
- Male-to-male and male-to-female jumper wires

## Observed Results
The prototype successfully demonstrates distance-based automated lighting using one ultrasonic sensor.

The six LEDs are divided into three pairs. Each pair corresponds to a different distance zone:
- Zone 1: LEDs 1 and 2
- Zone 2: LEDs 3 and 4
- Zone 3: LEDs 5 and 6

As an object moves through the detection zones, the corresponding LED pair activates.

## Current Testing Status
The prototype has successfully demonstrated the basic distance-based LED activation mechanism. Further testing will help evaluate its consistency and performance under different conditions.

## Known Limitations
- The system currently uses a single ultrasonic sensor.
- Detection performance may depend on sensor positioning and the object's distance.
- Further testing is needed to evaluate performance in real-world street conditions.

## Future Improvements
- Improve sensor positioning and detection consistency.
- Refine the distance thresholds for each LED zone.
- Test the system under different environmental conditions.
- Explore the possibility of scaling the prototype for real streetlight applications.
