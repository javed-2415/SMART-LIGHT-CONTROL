char data = 0;

void setup() {
  pinMode(13, OUTPUT); // LED pin
  Serial.begin(9600);  // Start Serial for Bluetooth
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();  // Read data from Bluetooth

    if (data == '1') {
      digitalWrite(13, HIGH); // Turn LED ON
    } else if (data == '0') {
      digitalWrite(13, LOW);  // Turn LED OFF
    }
  }
}
