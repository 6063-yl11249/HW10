void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
    for (int pin = 2; pin <= 7; pin++) {
  // LED on pin 2 blinks for the first 10 seconds
  if (millis() <= 9000) {
    blinkLED(2);
  } else {
    digitalWrite(2, HIGH);
  }

  // LED on pin 3 blinks for the second 10 seconds
  if (millis() >= 10000 && millis() <= 19000) {
    blinkLED(3);
  } else if (millis() > 19000) {
    digitalWrite(3, HIGH);
  }

  // LED on pin 4 blinks for the third 10 seconds
  if (millis() >= 20000 && millis() <= 29000) {
    blinkLED(4);
  } else if (millis() > 29000) {
    digitalWrite(4, HIGH);
  }

  // LED on pin 5 blinks for the fourth 10 seconds
  if (millis() >= 30000 && millis() <= 39000) {
    blinkLED(5);
  } else if (millis() > 39000) {
    digitalWrite(5, HIGH);
  }

  // LED on pin 6 blinks for the fifth 10 seconds
  if (millis() >= 40000 && millis() <= 49000) {
    blinkLED(6);
  } else if (millis() > 49000) {
    digitalWrite(6, HIGH);
  }

  // LED on pin 7 blinks for the sixth 10 seconds
  if (millis() >= 50000 && millis() <= 59000) {
    blinkLED(7);
  } else if (millis() > 59000) {
    digitalWrite(7, HIGH);
  }
   
  delay (15);
  digitalWrite(2, LOW);
  } 
}

void blinkLED(int pin) {
  digitalWrite(pin, HIGH);
  delay(500); 
  digitalWrite(pin, LOW);
  delay(500); 
}
