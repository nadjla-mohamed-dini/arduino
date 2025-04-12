#define POT_PIN A0
#define LED_PIN 9
#define LED_PIN2 10

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(POT_PIN);

  int lum1 = map(potValue, 0,1023,0,255);
  int lum2 = 255 - lum1;

  analogWrite(LED_PIN,lum1);
  analogWrite(LED_PIN2, lum2);
  
  delay(10);
}