int button = 2;
int led;
int etatButton;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  etatButton = digitalRead(button);

  if (etatButton == LOW) {
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  delay(100);
}
