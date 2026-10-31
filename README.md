# StreetSense: Smart Automated Street Lighting System

An Arduino-based automated street lighting prototype that uses ultrasonic distance detection to activate different groups of LED lights according to the detected object's position.

## Project Overview

StreetSense is a hardware prototype designed to demonstrate how distance-responsive lighting can make street lighting systems more adaptive.

Traditional streetlights may remain illuminated even when nearby roads are empty. StreetSense explores an alternative approach: activating specific lighting zones when an object approaches them.

Using an ultrasonic distance sensor, an Arduino Uno-compatible board, and six LEDs arranged into three pairs, the prototype demonstrates sequential, zone-based lighting control.

## Problem Statement

Conventional street lighting systems often operate on fixed schedules or remain continuously illuminated throughout the night, regardless of nearby activity.

This project explores a prototype solution that responds to detected movement or nearby objects by activating only the relevant lighting zone.

## Objectives

- Develop a working automated street lighting prototype.
- Use ultrasonic sensing for distance-based object detection.
- Control six LEDs through an Arduino microcontroller.
- Divide the lighting system into three independently controlled zones.
- Demonstrate sequential activation and switching between lighting zones.
- Explore the potential of responsive lighting for future smart infrastructure.

## How It Works

1. The ultrasonic sensor measures the distance to a nearby object.
2. The Arduino receives and processes the sensor readings.
3. The system determines which distance zone the object occupies.
4. The corresponding pair of LEDs turns on.
5. As the object moves into another zone, the previous pair switches off and the next pair activates.

### Lighting Zones

| Zone | LED Group | System Response |
|---|---|---|
| Zone 1 | LED 1 and LED 2 | Activates when an object enters the first detection zone |
| Zone 2 | LED 3 and LED 4 | Activates when an object enters the second detection zone |
| Zone 3 | LED 5 and LED 6 | Activates when an object enters the third detection zone |

Only one LED pair is activated at a time in the tested prototype.

## Hardware Components

| Component | Quantity |
|---|---:|
| Arduino Uno R3 compatible board | 1 |
| Ultrasonic distance sensor | 1 |
| White 5mm LEDs | 6 |
| 220-ohm resistors | 6 |
| 400-point solderless breadboard | 1 |
| Male-to-male jumper wires | As required |
| Male-to-female jumper wires | As required |
| USB Type-B cable | 1 |

## Software and Technologies

- Arduino IDE
- Arduino C/C++ firmware
- GitHub for version control and project documentation
- Hackatime for coding activity tracking (if configured)

## System Architecture

The prototype follows a simple input-processing-output architecture:

**Input:** Ultrasonic distance sensor

**Processing:** Arduino microcontroller

**Output:** Three pairs of LEDs representing three lighting zones

## Testing and Results

The physical prototype was tested by moving an object through different detection zones.

| Test | Expected Behaviour | Observed Result |
|---|---|---|
| Object enters Zone 1 | LEDs 1 and 2 activate | Successful |
| Object moves to Zone 2 | LEDs 1 and 2 switch off; LEDs 3 and 4 activate | Successful |
| Object moves to Zone 3 | LEDs 3 and 4 switch off; LEDs 5 and 6 activate | Successful |
| Object changes zones | Lighting switches to the corresponding pair | Successful |

The tests demonstrated that the prototype could detect changing object distances and switch between the three LED groups.

## Project Demonstration

**Demonstration Video:** [https://drive.google.com/file/d/1z_sigoCXHZ7qtubJuV-MMVnLFjjOTzrP/view?usp=sharing] initial working
                        [https://drive.google.com/file/d/1zmbYN6drctkGi1hkW3t2gKItSguUqunJ/view?usp=sharing] Final Demonstration
                        [https://drive.google.com/file/d/1RFCO7mS7jlN3nCXWrmMUTqwVMNQnwCpr/view?usp=sharing] Hand on working
                        [https://drive.google.com/file/d/1DtH5dvgUuzOM3keGvWGp4aUSovf60rh3/view?usp=sharing]

The demonstration shows the physical prototype, sensor response, and sequential activation of all three lighting zones.

## Project Development

- **Project:** StreetSense — Smart Automated Street Lighting System
- **Project Category:** Hardware
- **Development Time:** Approximately 32 hours
- **Development Stage:** Completed prototype
- **Team Size:** 3 members

The development process included project planning, component selection, hardware assembly, firmware development, testing, troubleshooting, and documentation.

## Project Limitations

- The current prototype uses a single ultrasonic sensor.
- The system demonstrates distance-based detection in a controlled prototype environment.
- It has not been deployed on an actual road.
- Large-scale energy savings have not been measured or verified.
- Outdoor reliability, weather resistance, and long-range operation require further testing.

## Future Improvements

- Use multiple sensors for more reliable detection.
- Integrate wireless communication for remote monitoring.
- Explore solar-powered operation.
- Develop a more scalable lighting-control architecture.
- Conduct outdoor testing and measure actual energy consumption.

## Repository Structure

```text
StreetSense/
│
├── firmware/
│   ├── README.md
│   └── StreetSense.ino
│
├── BOM.csv
├── README.md
└── [Project photographs]
```

## Team

Developed by a two-member student team as a hardware engineering project.

## Acknowledgements

Thanks to the mentors, organizers, and community supporting student innovation and hardware development.

---

**StreetSense — Exploring smarter, responsive street lighting through hardware and programming.**

---

Developed as a hardware project exploring sensor-based automation and energy-conscious street lighting.
