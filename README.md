# ACS712 AC Current Sensor Project

This project demonstrates how to measure AC current using the **ACS712 current sensor** with an ESP32 or Arduino-compatible board. It uses the [ACS712 Arduino library](https://github.com/RobTillaart/ACS712) to simplify current measurements.


## Features

- Measures AC current in real-time
- Supports automatic offset calibration
- Converts milliamps (mA) to amps (A)
- Filters small currents below a threshold to reduce noise
- Serial output for easy monitoring


## Hardware Required

- ESP32 or Arduino-compatible microcontroller
- ACS712 current sensor module (5A / 20A / 30A variants)
- Jumper wires
- Breadboard (optional)


## Wiring

| ACS712 Pin      | Microcontroller Pin |
|-----------------|------------------|
| VCC             | 3.3V / 5V         |
| GND             | GND               |
| OUT             | GPIO 35 (Analog Input) |

> **Note:** Adjust `SENSOR_PIN` in the code if you use a different analog input.

## Installation

1. Install the [ACS712 Arduino library](https://github.com/RobTillaart/ACS712) via the Arduino Library Manager.
2. Clone or download this repository.
  ```bash
  https://github.com/CJdevX/ACS712_Current_Sensor_Test.git
  ```
3. Open the `ACS712_AC_Current.ino` file in Arduino IDE.
4. Select the correct board and port.
5. Upload the sketch to your board.
