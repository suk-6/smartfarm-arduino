int buzzerPin = 4;

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int Light = analogRead(A0);
  Serial.println(Light);
  if (Light > 400) {
      tone(buzzerPin, Light-150);
      delay(50);
    }
  noTone(buzzerPin);
}
