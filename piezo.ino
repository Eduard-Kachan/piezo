const int knockSensor = A0; // the piezo is connected to analog pin 0

void setup() {
  Serial.begin(9600);       // use the serial port
}

void loop() {
  // read the sensor and print it in te serial monitor
  Serial.println(analogRead(knockSensor));
}

