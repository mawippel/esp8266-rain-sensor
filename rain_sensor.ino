#define rainAnalog A0
#define rainDigital D1

void setup() {
  Serial.begin(9600);
  pinMode(rainDigital, INPUT);
}

void loop() {
  int rainAnalogValue = analogRead(rainAnalog);
  boolean isRaining = !digitalRead(rainDigital);

  Serial.println(rainAnalogValue);
  delay(200);
}
