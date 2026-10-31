# StreetSense Firmware

## Overview

This directory contains the final Arduino firmware developed for StreetSense, a smart automated street lighting prototype.

The firmware uses an ultrasonic distance sensor to measure the distance of nearby objects. Based on the measured distance, the Arduino activates one of three pairs of LEDs, representing three different lighting zones.

The system demonstrates distance-based, zone-controlled lighting using a single ultrasonic sensor.

## Hardware Platform

- Arduino Uno R3 compatible board (ATmega328P)
- One ultrasonic distance sensor
- Six white 5mm LEDs
- Six 220-ohm resistors
- Breadboard
- Jumper wires

## Pin Configuration

### Ultrasonic Sensor

| Sensor Pin | Arduino Pin |
|---|---|
| TRIG | D2 |
| ECHO | D3 |

### LED Configuration

| Lighting Zone | LED 1 | LED 2 |
|---|---|---|
| Close Zone | D4 | D5 |
| Medium Zone | D6 | D7 |
| Far Zone | D8 | D9 |

## Distance-Based Lighting Logic

The firmware divides object detection into three distance ranges.

| Detection Zone | Distance Range | LED Outputs |
|---|---|---|
| Close | 5–15 cm | D4 and D5 |
| Medium | Above 15–30 cm | D6 and D7 |
| Far | Above 30–50 cm | D8 and D9 |
| Out of Range | Below 5 cm or above 50 cm | All LEDs OFF |

Only one LED pair is activated at a time.

## How the Firmware Works

1. The Arduino sends a trigger signal to the ultrasonic sensor.
2. The sensor returns an echo signal based on the detected object's distance.
3. The Arduino measures the echo duration.
4. The measured duration is converted into distance in centimeters.
5. The firmware identifies the corresponding detection zone.
6. The appropriate pair of LEDs is activated while the other LEDs remain OFF.
7. If no valid echo is received, all LEDs are switched OFF.

## Main Firmware File

- `StreetSense.ino` — Contains the complete Arduino program, including sensor initialization, distance measurement, zone detection, LED control, and serial monitoring.

## Serial Monitoring

The firmware uses a baud rate of 9600 for serial communication.

It displays:
- Measured distance in centimeters.
- CLOSE, MEDIUM, or FAR detection status.
- NO OBJECT when no valid echo is received.
- OUT OF RANGE when the measured distance falls outside the configured zones.

## Testing and Results

The firmware was uploaded to the Arduino-compatible board and tested with the physical prototype.

The following behaviours were demonstrated:

- Close detection activated LEDs connected to D4 and D5.
- Medium detection activated LEDs connected to D6 and D7.
- Far detection activated LEDs connected to D8 and D9.
- Moving an object between zones caused the active LED pair to switch.
- Invalid or out-of-range readings resulted in all LEDs switching OFF.

## Development Status

**Completed — Working hardware prototype.**

The firmware was developed and tested as part of the StreetSense automated street lighting project.

## Future Improvements

- Integrate additional sensors for wider detection coverage.
- Improve detection stability and handling of fluctuating readings.
- Explore wireless monitoring and control.
- Develop a larger-scale adaptive street lighting system.

---

**Project:** StreetSense — Smart Automated Street Lighting System  
**Platform:** Arduino Uno R3 compatible board  
**Programming Language:** Arduino C/C++  
**Firmware:** StreetSense.ino
