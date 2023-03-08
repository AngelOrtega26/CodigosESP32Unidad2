int sensorPin = 0;
int sensorValue = 0;
 
void setup() {
  pinMode(2, OUTPUT);
  Serial.begin (9600);
}
 
void loop() {
  sensorValue = analogRead (sensorPin);
  Serial.println (sensorValue, DEC);
  if(sensorValue <= 100) {
    digitalWrite (2, HIGH);
    delay(1000);
  }
  digitalWrite (2, LOW);
}