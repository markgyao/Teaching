#define LED 13    // the pin for the LED
#define BUTTON 7  // the input pin where the pushbutton is connected
// Define LED pins
// int ledPins[] = {2, 3, 4, 5, 6};
int ledPins[] = {6, 5, 4, 3, 2};
int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);
int val = 0;      // val will be used to store the state of the input pin
int old_val = 0;  // store the previous state of the button
int state = 0;    // 0 = LED off, 1 = LED on
int count=0;
String msg="";

void setup() {
  Serial.begin(9600);
  Serial.println("setup ...");
  pinMode(LED, OUTPUT);    // tell Arduino LED is an output
  pinMode(BUTTON, INPUT);  // and BUTTON is an input

  Serial.println("setup ...");
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
}

void loop() {
  val = digitalRead(BUTTON);  // read input value

  // Check if button is pressed and if the previous state was unpressed
  if ((val == HIGH) && (old_val == LOW)) {
    state = 1 - state;  // toggle the state
    msg = "count=" + String(count);
    Serial.println(msg);
    displayBinary(count);
    count++;
    delay(50);  // debounce delay to avoid bouncing
  }

  old_val = val;  // store the current value for the next loop

  // Set the LED state based on the toggle
  if (state == 1) {
    digitalWrite(LED, HIGH);  // turn LED On

  } else {
    digitalWrite(LED, LOW);   // turn LED OFF
  }
}

void displayBinary(int X) {
    // Turn off last 5 LEDs
    for (int bit = 0; bit < numLEDs; bit++) {
      int ledIndex = numLEDs - 1 - bit;
      digitalWrite(ledPins[ledIndex], LOW);
    }
    if (X==0) { return;} //if 0, don't do anything

    //turn on led as binary pattern based X
    for (int bit = 0; bit < numLEDs; bit++) {
      int ledIndex = numLEDs - 1 - bit;
      if ((X >> bit) & 1) {
        digitalWrite(ledPins[ledIndex], HIGH);
      } else {
        digitalWrite(ledPins[ledIndex], LOW);
      }
    }

}

//  1 -> 00001
//  2 -> 00010
//  3 -> 00011
//  4 -> 00100
//  5 -> 00101
//  6 -> 00110
//  7 -> 00111
//  8 -> 01000
//  9 -> 01001
// 10 -> 01010
// 11 -> 01011
// 12 -> 01100
// 13 -> 01101
// 14 -> 01110
// 15 -> 01111
// 16 -> 10000
// 17 -> 10001
// 18 -> 10010
// 19 -> 10011
// 20 -> 10100
// 21 -> 10101
// 22 -> 10110
// 23 -> 10111
// 24 -> 11000
// 25 -> 11001
// 26 -> 11010
// 27 -> 11011
// 28 -> 11100
// 29 -> 11101
// 30 -> 11110
// 31 -> 11111
// 32 -> 100000