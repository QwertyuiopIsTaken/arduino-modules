#include<Servo.h>

Servo servo1;
const int SERVO_PIN = 12;

int pos = 0;
const int step = 15;
int latestTime;

const int trigPin = 3;
const int echoPin = 5;
const int yellowledPIN = 8;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(yellowledPIN, OUTPUT);

  servo1.attach(SERVO_PIN);
  Serial.begin(9600);
  latestTime = millis();
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  float duration = pulseIn(echoPin, HIGH, 30000); // 30 ms timeout
  int distance = duration * 0.034 / 2;
  
  Serial.print("Distance (cm): ");
  Serial.println(distance);

  if (distance <= 15) {
    digitalWrite(yellowledPIN, HIGH);
    return;
  } else {
    digitalWrite(yellowledPIN, LOW);
  }

  int currentTime = millis();
  if (currentTime - latestTime > 1000) {
    if (pos > 180 || pos < 0) {
      step *= -1;
    }
    servo1.write(pos);
    pos += step;
    latestTime = currentTime;
  }

  delay(60); // allows time for other echoes to die down
}
