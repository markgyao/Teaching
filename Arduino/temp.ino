int ledPins[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };  // Excluding pins 0 and 1
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}
//test individual led
// void loop() {
//   for (int i = 0; i < numLEDs; i++) {
//     digitalWrite(ledPins[i], HIGH);
//     delay(500); // Check each LED individually
//     digitalWrite(ledPins[i], LOW);
//     delay(500);
//   }
// }
void loop() {
  int T_signal = 500;  // Duration to hold binary number during blink in milliseconds

  // Test the blink_start_signal function with different values of X
  for (int X = 1; X <= numLEDs; X++) {
    blink_start_signal(X, T_signal);
    delay(2000);  // Wait 2 seconds before the next test
  }
}

// 1  = 00001, 2  = 00010, 3  = 00011, 4  = 00100, 
// 5  = 00101, 6  = 00110, 7  = 00111, 8  = 01000, 
// 9  = 01001, 10 = 01010, 11 = 01011, 12 = 01100, 
// 13 = 01101, 14 = 01110, 15 = 01111, 16 = 10000, 
// 17 = 10001, 18 = 10010, 19 = 10011, 20 = 10100, 
// 21 = 10101, 22 = 10110, 23 = 10111, 24 = 11000, 
// 25 = 11001, 26 = 11010, 27 = 11011, 28 = 11100, 
// 29 = 11101, 30 = 11110, 31 = 11111, 

void blink_start_signal(int X, int T) {
  // Turn on and off LEDs one by one forward
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(30);  // Adjust delay as needed
    digitalWrite(ledPins[i], LOW);
  }

  // Turn on and off LEDs one by one backward
  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(30);  // Adjust delay as needed
    digitalWrite(ledPins[i], LOW);
  }

  // Small delay before displaying the binary number
  delay(500);  // 0.5 seconds

  // Blink the binary representation of X using the last 5 LEDs, 3 times with 0.5-second intervals
  for (int blink = 0; blink < 3; blink++) {
    // Set last 5 LEDs to represent binary of X
    for (int bit = 0; bit < 5; bit++) {
      int ledIndex = numLEDs - 1 - bit;  // Indices for the last 5 LEDs
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
    delay(500);  // 0.5-second interval between blinks
  }

  // Ensure all LEDs are off
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}