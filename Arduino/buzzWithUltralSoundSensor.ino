/*
Arduino Uno R3
+---------------------+
|                     |
| 5V ----------- VCC (HC-SR04)
| GND ---------- GND (HC-SR04) and LED Cathode
| Digital Pin 9 - Trig (HC-SR04)
| Digital Pin 10 - Echo (HC-SR04)
| Digital Pin 8 --+-- + (Passive Buzzer)
|                +-- - (Passive Buzzer) to GND
| Digital Pin 7 -- Resistor (220Ω) -- Anode (+) of LED
| Cathode (-) of LED -- GND
|                     |
+---------------------+

Visual Representation

1. **Ultrasonic Sensor (HC-SR04):**
   - VCC → 5V on Arduino
   - GND → GND on Arduino
   - Trig → Digital Pin 9 on Arduino
   - Echo → Digital Pin 10 on Arduino

2. **Passive Buzzer:**
   - Positive (+) → Digital Pin 8 on Arduino
   - Negative (-) → GND on Arduino

3. **LED:**
   - Anode (+) → One end of 220Ω resistor → Digital Pin 7 on Arduino
   - Cathode (-) → GND on Arduino

+-------------------------------------------------------------+
| Frequency (Hz) | Sound Characteristic                     |
|-------------------------------------------------------------|
| 20 - 60        | Sub-Bass                                 |
| 60 - 250       | Bass                                     |
| 250 - 2000     | Midrange                                 |
| 2000 - 4000    | Upper Midrange                            |
| 4000 - 6000    | Presence                                 |
| 6000 - 20000   | Brilliance                               |
+-------------------------------------------------------------+


*/

// Define pin connections
const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 8; // Connected to the positive leg of the passive buzzer
const int ledPin = 7;    // Connected to the resistor and LED

// Define threshold distance in centimeters
const int threshold = 20; // 10-100 Adjust this value as needed

// Define buzzer frequency
const int buzzerFrequency = 500; //  300-1000 low to medium, hgih 2000-4000, Start with 1000 Hz

void setup() {
  // Initialize serial communication for debugging (optional)
  Serial.begin(9600);
  
  // Initialize the buzzer and LED pins as OUTPUT
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  
  // Initialize the trigPin as OUTPUT and echoPin as INPUT
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigPin by setting it LOW for 2 microseconds
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Trigger the sensor by setting the trigPin HIGH for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the echoPin and calculate the distance
  long duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance in centimeters
  float distance = (duration * 0.0343) / 2;
  
  // Print the distance to the Serial Monitor (optional)
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Check if the distance is below the threshold
  if (distance <= threshold) {
    // Emit a tone at the specified frequency
    tone(buzzerPin, buzzerFrequency);
    
    // Turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Stop the tone
    noTone(buzzerPin);
    
    // Turn off the LED
    digitalWrite(ledPin, LOW);
  }
  
  // Small delay before the next loop
  delay(100);
}