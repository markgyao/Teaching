int ledPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

void setup() {
  for (int i = 0; i < 14; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  blink_1();
  blink_1();

  blink_2();
  blink_2();

  blink_3();
  blink_3();

  blink_4();
  blink_4();

  blink_5();
  blink_5();

  blink_6();
  blink_6();

  blink_7();
  blink_7();

  blink_8();
  blink_8();

  blink_9();
  blink_9();

  blink_10();
  blink_10();

  blink_11();
  blink_11();

  blink_12();
  blink_12();

  blink_13();
  blink_13();

  blink_14();
  blink_14();

  blink_15();
  blink_15();

  blink_16();
  blink_16();
}

void blink_1() {
  int t = 80;
  // Turn on LEDs from led0 to led13 one by one
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(t);
  }
  // Turn off LEDs from led0 to led13 one by one
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(t);
  }
}

void blink_2() {
  int t = 80;
  // Turn on and off each LED one by one
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
  }
}

void blink_3() {
  int t = 150;
  for (int k = 0; k < 2; k++) {
    // First pattern: Turn on LEDs at even indices
    for (int i = 0; i < 14; i++) {
      digitalWrite(ledPins[i], (i % 2 == 0) ? HIGH : LOW);
    }
    delay(t);
    // Second pattern: Turn on LEDs at odd indices
    for (int i = 0; i < 14; i++) {
      digitalWrite(ledPins[i], (i % 2 != 0) ? HIGH : LOW);
    }
    delay(t);
  }
  // Turn off all LEDs
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}

void blink_4() {
  int t = 80;
  // Moving light effect with two LEDs on
  for (int i = 0; i < 14 + 2; i++) {
    if (i < 14) {
      digitalWrite(ledPins[i], HIGH);
    }
    if (i >= 2) {
      digitalWrite(ledPins[i - 2], LOW);
    }
    delay(t);
  }
  // Ensure all LEDs are off
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}

void blink_5() {
  int t = 70;
  // Building up pattern
  for (int k = 0; k < 7; k++) {
    for (int i = 0; i < 14; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(t);
    }
    // Turn off all LEDs
    for (int i = 0; i < 14; i++) {
      digitalWrite(ledPins[i], LOW);
    }
  }
}

void blink_6() {
  int t = 70;
  // Forward
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
  }
  // Reverse
  for (int i = 13; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
  }
}

void blink_7() {
  int t = 60;
  // Forward lighting
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(t);
  }
  // Turn off LEDs
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(t);
  }
  // Reverse lighting
  for (int i = 13; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(t);
  }
  // Turn off LEDs
  for (int i = 13; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(t);
  }
}

void blink_8() {
  int t = 70;
  // Symmetrical lighting from ends to center
  for (int i = 0; i < 7; i++) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[13 - i], HIGH);
    delay(t);
  }
  // Turn off LEDs
  for (int i = 0; i < 7; i++) {
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[13 - i], LOW);
    delay(t);
  }
}

void blink_9() {
  int t = 70;
  // Turn on LEDs from ends to center
  for (int i = 0; i < 7; i++) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[13 - i], HIGH);
    delay(t);
  }
  // Turn off LEDs from center to ends
  for (int i = 6; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[13 - i], LOW);
    delay(t);
  }
}

void blink_10() {
  int t = 100;
  // Blink all LEDs together
  for (int k = 0; k < 3; k++) {
    for (int i = 0; i < 14; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(t);
    for (int i = 0; i < 14; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(t);
  }
}

void blink_11() {
  int t = 80;
  // Moving light effect forward
  for (int i = 0; i < 14 + 2; i++) {
    if (i < 14) {
      digitalWrite(ledPins[i], HIGH);
    }
    if (i >= 2) {
      digitalWrite(ledPins[i - 2], LOW);
    }
    delay(t);
  }
  // Moving light effect backward
  for (int i = 13; i >= -1; i--) {
    if (i >= 0) {
      digitalWrite(ledPins[i], HIGH);
    }
    if (i <= 11) {
      digitalWrite(ledPins[i + 2], LOW);
    }
    delay(t);
  }
  // Turn off all LEDs
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}

void blink_12() {
  int t = 80;
  // Move from left to right
  for (int i = 0; i < 14; i++) {
    digitalWrite(ledPins[i], HIGH);
    if (i >= 3) {
      digitalWrite(ledPins[i - 3], LOW);
    }
    delay(t);
  }
  // Turn off remaining LEDs
  for (int i = 11; i < 14; i++) {
    digitalWrite(ledPins[i], LOW);
    delay(t);
  }
  // Move from right to left
  for (int i = 13; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    if (i <= 10) {
      digitalWrite(ledPins[i + 3], LOW);
    }
    delay(t);
  }
  // Turn off remaining LEDs
  for (int i = 2; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(t);
  }
}

void blink_13() {
  int t = 90;
  // Expand and contract from center
  int center = 6; // Adjusted center index for even number of LEDs
  for (int i = 0; i <= center; i++) {
    if (center - i >= 0) {
      digitalWrite(ledPins[center - i], HIGH);
    }
    if (center + i + (14 % 2 == 0 ? 1 : 0) < 14) {
      digitalWrite(ledPins[center + i + (14 % 2 == 0 ? 1 : 0)], HIGH);
    }
    delay(t);
    if (center - i >= 0) {
      digitalWrite(ledPins[center - i], LOW);
    }
    if (center + i + (14 % 2 == 0 ? 1 : 0) < 14) {
      digitalWrite(ledPins[center + i + (14 % 2 == 0 ? 1 : 0)], LOW);
    }
    delay(t);
  }
  for (int i = center - 1; i >= 0; i--) {
    if (center - i >= 0) {
      digitalWrite(ledPins[center - i], HIGH);
    }
    if (center + i + (14 % 2 == 0 ? 1 : 0) < 14) {
      digitalWrite(ledPins[center + i + (14 % 2 == 0 ? 1 : 0)], HIGH);
    }
    delay(t);
    if (center - i >= 0) {
      digitalWrite(ledPins[center - i], LOW);
    }
    if (center + i + (14 % 2 == 0 ? 1 : 0) < 14) {
      digitalWrite(ledPins[center + i + (14 % 2 == 0 ? 1 : 0)], LOW);
    }
    delay(t);
  }
}

void blink_14() {
  int t = 80;
  // Symmetrical lighting with center pause
  for (int i = 0; i < 7; i++) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[13 - i], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[13 - i], LOW);
  }
  // Turn on center LEDs (for even number of LEDs)
  digitalWrite(ledPins[6], HIGH);
  digitalWrite(ledPins[7], HIGH);
  delay(t);
  digitalWrite(ledPins[6], LOW);
  digitalWrite(ledPins[7], LOW);
}

void blink_15() {
  int t = 80;
  // Symmetrical lighting and reverse
  for (int i = 0; i < 7; i++) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[13 - i], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[13 - i], LOW);
  }
  // Center LEDs
  digitalWrite(ledPins[6], HIGH);
  digitalWrite(ledPins[7], HIGH);
  delay(t);
  digitalWrite(ledPins[6], LOW);
  digitalWrite(ledPins[7], LOW);
  // Reverse lighting
  for (int i = 5; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[13 - i], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[13 - i], LOW);
  }
}

void blink_16() {
  int t = 80;
  // Alternate flashing of all LEDs
  for (int k = 0; k < 5; k++) {
    for (int i = 0; i < 14; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(t);
    for (int i = 0; i < 14; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(t);
  }
}
