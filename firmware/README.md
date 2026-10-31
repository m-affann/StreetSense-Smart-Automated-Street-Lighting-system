# StreetSense Firmware

## Overview
This directory contains the Arduino firmware developed for StreetSense, a smart automated street lighting system.

The firmware uses an ultrasonic distance sensor to detect nearby objects and controls the LED streetlights according to the measured distance.

## Hardware Platform
- Arduino Uno R3 compatible board (ATmega328P)
- Ultrasonic distance sensor
- Six white 5mm LEDs
- 220-ohm resistors

## Functionality
- Measures distance using ultrasonic sensing.
- Processes distance readings through the Arduino.
- Controls six LED streetlights.
- Activates LED groups according to the configured distance zones.

## Pin Configuration

## Main Firmware File
- StreetSense.ino

## Development Status
The firmware is being developed and tested alongside the physical hardware prototype.
