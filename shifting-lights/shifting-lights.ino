const int dataPin = 4;
const int clockPin = 2;
const int latchPin = 3;

const int numLEDs = 8;

byte ledState = 0;

void setup() {
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
}

void loop() {
  // Turn LEDs ON one by one
  for (int i = 0; i < numLEDs; i++) {
    bitSet(ledState, i);
    updateRegister();
    delay(1000);
  }

  // Turn LEDs OFF one by one
  for (int i = 0; i < numLEDs; i++) {
    bitClear(ledState, i);
    updateRegister();
    delay(1000);
  }
}

void updateRegister() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, ledState);
  digitalWrite(latchPin, HIGH);
}
