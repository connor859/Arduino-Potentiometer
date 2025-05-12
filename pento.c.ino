void setup() {
  Serial.begin(9600);
  int ledpin= 11;
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1);
float voltage = sensorValue * (5.0/1023.0);
int brightness = sensorValue/4;
analogWrite(11,brightness);
Serial.print("ADC reading: ");
Serial.print(sensorValue);
Serial.print(" Analog Voltage: ");
Serial.print(voltage);

}
