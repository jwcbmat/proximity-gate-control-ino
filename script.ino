#include <Servo.h>

Servo servo;
const int trigPin = 3;
const int echoPin = 2;
const int buttonPin = 4;
const int servoPin = 10;

long duration;
int distance;

bool gateOpen = false;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  
  servo.attach(servoPin);
  servo.write(0);
  
  Serial.begin(9600);
}

void loop() {
  distance = calculateDistance();
  
  if (digitalRead(buttonPin) == LOW || (distance <= 25 && !gateOpen)) {
    servo.write(90);
    gateOpen = true;
    delay(500);
  } else {
    servo.write(0);
    gateOpen = false;
  }

  delay(100); 
}

int calculateDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  return distance;
}
