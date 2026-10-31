
# StreetSense: Smart Automated Street Lighting System

An Arduino-based smart street lighting prototype that uses ultrasonic distance detection to activate different pairs of LED streetlights automatically.

## 1. Project Overview

StreetSense is a hardware prototype designed to demonstrate how street lighting can respond to detected objects instead of keeping every light continuously activated.

The system uses an Arduino Uno and an ultrasonic distance sensor to detect changes in an object's distance. Based on the measured distance, it activates the corresponding pair of LED streetlights.

## 2. Problem Statement

Conventional street lighting systems often operate on fixed schedules or remain illuminated regardless of nearby activity.

StreetSense explores a distance-based approach in which different lighting zones respond automatically to detected objects. This concept demonstrates a potential way to make street lighting more responsive and explore opportunities for energy efficiency.

## 3. Project Objectives

- Develop an Arduino-based automated lighting prototype.
- Use ultrasonic sensing for distance detection.
- Divide six LEDs into three independently controlled pairs.
- Activate the appropriate LED pair according to the detected distance.
- Demonstrate distance-based lighting control through a physical prototype.

## 4. How StreetSense Works

The ultrasonic sensor continuously measures the distance of an object in front of it.

The Arduino processes the distance readings and determines which lighting zone should be activated.

The six LEDs are divided into three pairs:

| Lighting Zone | LEDs | Activation |
|---|---|---|
| Zone 1 | LED 1 and LED 2 | Object detected at close range |
| Zone 2 | LED 3 and LED 4 | Object detected at a middle distance |
| Zone 3 | LED 5 and LED 6 | Object detected at a farther distance |

Only the corresponding LED pair remains ON at a time. When the detected object moves into another distance zone, the previous pair switches OFF and the new pair switches ON.

## 5. Hardware Components

| Component | Quantity |
|---|---:|
| Arduino Uno R3 compatible board (ATmega328P) | 1 |
| Ultrasonic distance sensor | 1 |
| White 5mm LEDs | 6 |
| 220-ohm resistors | 6 |
| 400-point solderless breadboard | 1 |
| Male-to-male jumper wires | As required |
| Male-to-female jumper wires | As required |

## 6. System Architecture

The prototype follows a simple input-processing-output architecture:

1. **Input:** The ultrasonic sensor detects the distance of an object.
2. **Processing:** The Arduino reads the sensor measurements and determines the corresponding distance zone.
3. **Output:** The Arduino activates the appropriate pair of LED streetlights.

## 7. Testing and Results

The prototype has successfully demonstrated three distance-based lighting zones.

| Test | Observed Result |
|---|---|
| Close-range detection | LEDs 1 and 2 turn ON. |
| Middle-distance detection | LEDs 1 and 2 turn OFF; LEDs 3 and 4 turn ON. |
| Farther-distance detection | LEDs 3 and 4 turn OFF; LEDs 5 and 6 turn ON. |
| Zone switching | The LED pairs switch according to the detected distance. |

The prototype demonstrates the basic functionality of an automated, distance-responsive lighting system.

## 8. Project Media

Photographs documenting the hardware assembly, prototype development, and testing process are included in this repository.

## 9. Current Limitations

- The prototype uses a single ultrasonic sensor.
- The system demonstrates controlled LED switching rather than full-scale street lighting.
- Detection performance can depend on sensor positioning and environmental conditions.
- Real-world outdoor performance and energy savings have not yet been established.

## 10. Future Improvements

- Improve distance detection consistency.
- Refine the activation thresholds for each lighting zone.
- Explore the use of multiple sensors for larger road sections.
- Test the system under different environmental conditions.
- Develop a larger-scale street lighting demonstration.
- Evaluate actual energy consumption against conventional lighting.

## 11. Repository Structure

```text
StreetSense-Smart-Automated-Street-Lighting-system/
│
├── README.md
├── BOM.csv
├── firmware/
│
└── project photographs
```

## 12. Project Status

**Status:** Working Hardware Prototype

StreetSense currently demonstrates ultrasonic distance detection and automatic switching between three LED lighting zones.

---

Developed as a hardware project exploring sensor-based automation and energy-conscious street lighting.
