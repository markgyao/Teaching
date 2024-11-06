// Define LED pins
int ledPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);

// Function pointer type for blink functions
typedef void (*BlinkFunction)(int t);

// Declare blink functions
void blink_1(int t);
void blink_2(int t);
void blink_3(int t);
void blink_4(int t);
void blink_5(int t);
void blink_6(int t);
void blink_7(int t);
void blink_8(int t);
void blink_9(int t);  // Formerly blink_13
void blink_10(int t); // Formerly blink_16

// Array of function pointers to blink functions
BlinkFunction blinkFunctions[] = {
  blink_1,
  blink_2,
  blink_3,
  blink_4,
  blink_5,
  blink_6,
  blink_7,
  blink_8,
  blink_9,
  blink_10
};

int numPatterns = sizeof(blinkFunctions) / sizeof(blinkFunctions[0]);

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }

  // Seed random number generator for blink_4
  randomSeed(analogRead(0));
}

void loop() {
  int T_signal = 500;      // Duration for binary number display
  int t = 80;              // Delay time for blink functions
  int pattern_repeat_num = 5; // Number of times to repeat each pattern

  // Loop through each blink function dynamically
  for (int i = 0; i < numPatterns; i++) {
    int patternNumber = i + 1;
    blink_start_signal(patternNumber, T_signal);
    for (int j = 0; j < pattern_repeat_num; j++) {
      // Call the blink function dynamically
      blinkFunctions[i](t);
    }

    // Optional delay between patterns
    delay(1000);  // 1-second delay between patterns
  }
}

void blink_start_signal(int X, int T) {
  // Turn on and off LEDs one by one forward
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(20);
    digitalWrite(ledPins[i], LOW);
  }

  // Turn on and off LEDs one by one backward
  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(20);
    digitalWrite(ledPins[i], LOW);
  }

  // Small delay before displaying the binary number
  delay(500);

  // Blink the binary representation of X using the last 5 LEDs
  for (int blink = 0; blink < 3; blink++) {
    for (int bit = 0; bit < 5; bit++) {
      int ledIndex = numLEDs - 1 - bit;
      if ((X >> bit) & 1) {
        digitalWrite(ledPins[ledIndex], HIGH);
      } else {
        digitalWrite(ledPins[ledIndex], LOW);
      }
    }
    delay(T);

    // Turn off last 5 LEDs
    for (int bit = 0; bit < 5; bit++) {
      int ledIndex = numLEDs - 1 - bit;
      digitalWrite(ledPins[ledIndex], LOW);
    }
    delay(500);
  }

  // Ensure all LEDs are off
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}

// Updated blink functions

void blink_1(int t) {
  // Alternate LEDs moving towards the center
  for (int i = 0; i < numLEDs / 2; i++) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[numLEDs - 1 - i], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[numLEDs - 1 - i], LOW);
  }
  // Moving away from the center
  for (int i = numLEDs / 2 - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[numLEDs - 1 - i], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[numLEDs - 1 - i], LOW);
  }
}

void blink_2(int t) {
  // Knight Rider effect
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);
    if (i > 0) {
      digitalWrite(ledPins[i - 1], LOW);
    }
    delay(t);
  }
  for (int i = numLEDs - 2; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[i + 1], LOW);
    delay(t);
  }
  digitalWrite(ledPins[0], LOW);
}

void blink_3(int t) {
  // Moving pairs
  for (int i = 0; i < numLEDs - 1; i++) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[i + 1], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[i + 1], LOW);
  }
  for (int i = numLEDs - 2; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[i + 1], HIGH);
    delay(t);
    digitalWrite(ledPins[i], LOW);
    digitalWrite(ledPins[i + 1], LOW);
  }
}

void blink_4(int t) {
  // Random flashing LEDs
  for (int k = 0; k < 20; k++) {
    int randLED = random(numLEDs);
    digitalWrite(ledPins[randLED], HIGH);
    delay(t);
    digitalWrite(ledPins[randLED], LOW);
  }
}

void blink_5(int t) {
  // Theater chase
  for (int cycle = 0; cycle < 10; cycle++) {
    for (int q = 0; q < 3; q++) {
      for (int i = 0; i < numLEDs; i++) {
        if ((i + q) % 3 == 0) {
          digitalWrite(ledPins[i], HIGH);
        } else {
          digitalWrite(ledPins[i], LOW);
        }
      }
      delay(t);
    }
  }
  // Turn off all LEDs
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}

void blink_6(int t) {
  // Ripple effect
  int center = numLEDs / 2;
  for (int radius = 0; radius <= center; radius++) {
    if (center - radius >= 0) {
      digitalWrite(ledPins[center - radius], HIGH);
    }
    if (center + radius < numLEDs) {
      digitalWrite(ledPins[center + radius], HIGH);
    }
    delay(t);
  }
  for (int radius = center; radius >= 0; radius--) {
    if (center - radius >= 0) {
      digitalWrite(ledPins[center - radius], LOW);
    }
    if (center + radius < numLEDs) {
      digitalWrite(ledPins[center + radius], LOW);
    }
    delay(t);
  }
}

void blink_7(int t) {
  // Blinking edges
  for (int k = 0; k < 5; k++) {
    digitalWrite(ledPins[0], HIGH);
    digitalWrite(ledPins[numLEDs - 1], HIGH);
    delay(t);
    digitalWrite(ledPins[0], LOW);
    digitalWrite(ledPins[numLEDs - 1], LOW);
    delay(t);
  }
}

void blink_8(int t) {
  // Progressive fill and empty
  // Fill
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(t);
  }
  // Empty
  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(t);
  }
}

void blink_9(int t) {
  // Expand and contract from center (formerly blink_13)
  int centerLeft = (numLEDs - 1) / 2;
  int centerRight = numLEDs / 2;
  for (int i = 0; i <= centerLeft; i++) {
    if (centerLeft - i >= 0) {
      digitalWrite(ledPins[centerLeft - i], HIGH);
    }
    if (centerRight + i < numLEDs) {
      digitalWrite(ledPins[centerRight + i], HIGH);
    }
    delay(t);
    if (centerLeft - i >= 0) {
      digitalWrite(ledPins[centerLeft - i], LOW);
    }
    if (centerRight + i < numLEDs) {
      digitalWrite(ledPins[centerRight + i], LOW);
    }
    delay(t);
  }
  for (int i = centerLeft - 1; i >= 0; i--) {
    if (centerLeft - i >= 0) {
      digitalWrite(ledPins[centerLeft - i], HIGH);
    }
    if (centerRight + i < numLEDs) {
      digitalWrite(ledPins[centerRight + i], HIGH);
    }
    delay(t);
    if (centerLeft - i >= 0) {
      digitalWrite(ledPins[centerLeft - i], LOW);
    }
    if (centerRight + i < numLEDs) {
      digitalWrite(ledPins[centerRight + i], LOW);
    }
    delay(t);
  }
}

void blink_10(int t) {
  // Alternate flashing of all LEDs (formerly blink_16)
  for (int k = 0; k < 5; k++) {
    for (int i = 0; i < numLEDs; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(t);
    for (int i = 0; i < numLEDs; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(t);
  }
}