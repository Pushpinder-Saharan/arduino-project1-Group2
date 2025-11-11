// Project1-Circuit-YourFullName
// LED Blinking Program

void setup() {
  pinMode(13, OUTPUT); // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH);  // Turn LED on
  delay(700);                  // Wait (change this value, not same as class demo)
  digitalWrite(13, LOW);   // Turn LED off
  delay(700);                  // Wait again
}