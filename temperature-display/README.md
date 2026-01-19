# Temperature digit display

## Components needed
* Jumper wires
* LM35 temperature sensor
* 4 digit display
* Arduino UNO
* Breadboard

## Circuit
4 digit display
* **D1** to digital pin 12
* **D2** to digital pin 9
* **D3** to digital pin 8
* **D4** to digital pin 6
* **D** to pin A5

Temperature sensor
* **+Vs** to 5V
* **GND** to GND
* **Vout** to digital pin 3

## How it works
Current flows into the anode, which are the 4 digit pins. Turning the digit pins on or off can allow us to control which digits get displayed. The segment pins are cathodes, and they correspond to the 7 segments of each digit. We can give each digit display a seperate digit by 

<p align="center">
    <img src=https://github.com/QwertyuiopIsTaken/arduino-modules/blob/main/assets/4-digit-7-segment-led-display-pinout.jpg alt="Pinout diagram of a four digit seven segment LED display" width="1000" height="400">
</p>