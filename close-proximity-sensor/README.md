# Close proximity sensor

## Components needed
* Jumper wires
* SR04 ultrasonic sensor
* SG90 Servo
* 1 LED
* Resistor (1000 Ohms recommended)
* Arduino UNO
* Breadboard

## Circuit

### Ultrasonic sensor
* **+V_cc** to 5V
* **Trig** to digital pin 3
* **Echo** to digital pin 5
* **GND** to GND

### Servo 
* **Signal (Yellow)** to digital pin 12
* **Positive (Red)** to 5V
* **Negative (Brown)** to GND

### LED
* Connect the long leg (anode) to digital pin 8

## How it works
We set the trigger pin to HIGH in order to make the SR04 component to send a pulse. In this code, we send a pulse that is 10 microseconds. The echo pulse is read by turning the echo pin to HIGH. The duration is calculated using the speed of sound (343 m/s at 20 degrees Celsius) and the time it took for the component to receive an echo pulse divided by two (because the sound had to travel out and back to the sensor).

When the distance is less than 15 cm, a digital signal is sent to the LED that causes it to light up.