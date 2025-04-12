const int boutonPin = 2;
const int ledPin = 13; 
const int ventilateurPin = 6; 

unsigned long tempsLED = 0;
bool ledAllumee = false;
bool ventilateurAllume = false;

void setup() {
  pinMode(boutonPin, INPUT_PULLUP);  
  pinMode(ledPin, OUTPUT);         
  pinMode(ventilateurPin, OUTPUT);   

  digitalWrite(ledPin, LOW);        
  digitalWrite(ventilateurPin, LOW); 
}

void loop() {
  static bool dernierEtatBouton = HIGH; 
  bool etatBouton = digitalRead(boutonPin); 

  if (dernierEtatBouton == HIGH && etatBouton == LOW) {
    if (!ledAllumee) {
      // Allumer la led
      digitalWrite(ledPin, HIGH);
      ledAllumee = true;
      tempsLED = millis(); 
    } else if (!ventilateurAllume) {
      digitalWrite(ledPin, LOW);
      ventilateurAllume = true;
      digitalWrite(ventilateurPin, HIGH); 
    } else {
      digitalWrite(ventilateurPin, LOW);
      ventilateurAllume = false;
    }
    delay(200);
  }

  //Led est allumée depuis 15sec
  if (ledAllumee && millis() - tempsLED >= 3000) {
    digitalWrite(ledPin, LOW);
    ledAllumee = false;
    ventilateurAllume = true;
    digitalWrite(ventilateurPin, HIGH); 
  }
  
  dernierEtatBouton = etatBouton;  
}
