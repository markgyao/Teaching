#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

String message = "";    // Store the incoming message
int scrollPos = 0;      // Position for scrolling

void setup() {
  lcd.begin(16, 2);       // Set up the LCD with 16 columns and 2 rows
  Serial.begin(9600);     // Initialize serial communication
}

void loop() {
  // Read serial input
  if (Serial.available()) {
    delay(100);           // Wait for the entire message to arrive
    message = "";         // Clear the previous message
    while (Serial.available() > 0) {
      message += (char)Serial.read();  // Append each character to the message
    }
    scrollPos = 0;        // Reset scrolling position
  }

  // If message is longer than the LCD width, scroll it from left to right
  lcd.clear();
  lcd.setCursor(0, 0);      // Start at the beginning of the LCD
  lcd.print(message.substring(scrollPos, scrollPos + 16)); // Display part of the message

  // Adjust scrolling position
  scrollPos++;
  if (scrollPos > message.length()) { // If reached the end, reset to the beginning
    scrollPos = 0;
  }

  delay(250);                // Adjust scroll speed by changing the delay
}
