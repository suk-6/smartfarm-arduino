void setup() {
  Serial.begin(9600);
  // pinMode Setting
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  int Light = analogRead(A0); //Analog Read
  Light = map(Light, 250, 600, 4, 0); // maping Analog value
  Serial.println(Light); // serial print
  onLight(Light); // call onLight
}

int onLight(int x) { // Light on -> delay 0.1 sec ->off
  for (int i=8; i <= x+8; i++){
    digitalWrite(i, HIGH);
  }
  delay(100);
  for (int i=8; i <= x+8; i++){
    digitalWrite(i, LOW);
  }
}
