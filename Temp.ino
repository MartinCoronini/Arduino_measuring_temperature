const int sensorPin = A0;
float sensorVal;
double voltage;
float temperature;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  sensorVal = analogRead(sensorPin);
  voltage = (sensorVal/1024.0) * 5.0;
  Serial.println(" Voltage : " + String(voltage) + "V");
  
  temperature = (voltage - .5) * 100; //We remove 0.5 due to hardware uncertainties
  Serial.println(" Température : " + String(temperature) + "°C");
  
  delay(1000); //1 second delay before new measures
}
