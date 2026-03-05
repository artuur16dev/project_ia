const int LED_PIN = 25;

void setup() {

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.begin(115200);
  Serial.println("Sistema llest!");
}

void loop() {

  if (Serial.available() > 0) {

    String line = Serial.readStringUntil('\n');
    line.trim();

  }

}
