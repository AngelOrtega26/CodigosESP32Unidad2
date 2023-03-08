#define Button_pin 21

void setup() {
  Serial.begin(9600);
  pinMode(Button_pin, INPUT_PULLUP);
}

void loop() {
  int btState = digitalRead(Button_pin);
  Serial.println(btState);
  delay(1000);
}