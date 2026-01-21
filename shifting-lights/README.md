# Blinking lights

## Components needed
* Jumper wires
* 74HC595 Shift Register
* 8 LED
* 9 Resistors (1000 Ohms recommended)
* Arduino UNO
* Breadboard

## Circuit

### Shift register (refer to the diagram below for clarity)
* **#16 pin** to 5V
* **#14 pin** to digital pin 4
* **#13 pin** to GND
* **#12 pin** to digital pin 3
* **#11 pin** to digital pin 2
* **#10 pin** to 5V
* **#8 pin** to GND

<p align="center">
    <img src=https://github.com/QwertyuiopIsTaken/arduino-modules/blob/main/assets/74HC595-Shift-Register-Pinout.png alt="Pinout diagram of a shift register" width="395" height="310">
</p>

### LED
* Connect the long leg (anode) to one of the Q_A-Q_H pin of the shift register.