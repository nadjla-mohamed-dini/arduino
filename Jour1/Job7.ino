byte i;
byte LedMin = 2;
byte LedMax = 10;
void setup() {
  // put your setup code here, to run once:
  for (i=LedMin; i<=LedMax; i ++) {pinMode(i, OUTPUT);}

}

void loop() {
  // put your main code here, to run repeatedly:
  for (i=LedMin; i<=LedMax; i++) {
    digitalWrite(i, HIGH);
    delay(1000);
  }
  for (i=LedMax; i>=LedMin; i--) {
    digitalWrite(i, LOW);
    delay(1000);
  }
}
