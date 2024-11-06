#define LED 13    // the pin for the LED
#define BUTTON 7  // the input pin where the pushbutton is connected

int val = 0;      // val will be used to store the state of the input pin
int old_val = 0;  // store the previous state of the button
int state = 0;    // 0 = LED off, 1 = LED on

void setup() {
  pinMode(LED, OUTPUT);    // tell Arduino LED is an output
  pinMode(BUTTON, INPUT);  // and BUTTON is an input
}

void loop() {
  val = digitalRead(BUTTON);  // read input value

  // Check if button is pressed and if the previous state was unpressed
  if ((val == HIGH) && (old_val == LOW)) {
    state = 1 - state;  // toggle the state
    delay(50);  // debounce delay to avoid bouncing
  }

  old_val = val;  // store the current value for the next loop

  // Set the LED state based on the toggle
  if (state == 1) {
    digitalWrite(LED, HIGH);  // turn LED ON
  } else {
    digitalWrite(LED, LOW);   // turn LED OFF
  }

