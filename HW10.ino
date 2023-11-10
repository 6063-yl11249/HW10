void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  unsigned long startTime = millis();

  while (millis() - startTime < 60000) {
    if (millis() - startTime <= 9000) {
      blinkLED(2);
    } else {
      digitalWrite(2, HIGH);
    }

    if (millis() - startTime >= 10000 && millis() - startTime <= 19000) {
      blinkLED(3);
    } else if (millis() - startTime > 19000) {
      digitalWrite(3, HIGH);
    }

    if (millis() - startTime >= 20000 && millis() - startTime <= 29000) {
      blinkLED(4);
    } else if (millis() - startTime > 29000) {
      digitalWrite(4, HIGH);
    }

    if (millis() - startTime >= 30000 && millis() - startTime <= 39000) {
      blinkLED(5);
    } else if (millis() - startTime > 39000) {
      digitalWrite(5, HIGH);
    }

    if (millis() - startTime >= 40000 && millis() - startTime <= 49000) {
      blinkLED(6);
    } else if (millis() - startTime > 49000) {
      digitalWrite(6, HIGH);
    }

    if (millis() - startTime >= 50000 && millis() - startTime <= 59000) {
      blinkLED(7);
    } else if (millis() - startTime > 59000) {
      digitalWrite(7, HIGH);
    }

    delay(15);
  }

  for (int pin = 2; pin <= 7; pin++) {
    digitalWrite(pin, LOW);
  }
}

void blinkLED(int pin) {
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
}
