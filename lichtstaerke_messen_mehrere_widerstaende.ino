void setup() {
  Serial.begin(9600);
}

void loop() {
  
  Serial.println("Sensorwert: ");
  Serial.println(analogRead(A0));
  delay(1000);
}
