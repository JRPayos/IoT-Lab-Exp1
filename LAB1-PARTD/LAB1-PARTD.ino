// Experiment 1 - Arduino Uno verification sketch 
const int LDR_PIN = A0;      // divider junction 
const int LED_PIN = 9;       // LED through 330 ohm 
const int THRESHOLD = 400;   // adjust after observing values 
  
void setup() { 
  Serial.begin(9600); 
  pinMode(LED_PIN, OUTPUT); 
  Serial.println("Uno ready"); 
} 
  
void loop() { 
  int raw = analogRead(LDR_PIN);          // 0 to 1023 
  float volts = raw * 5.0 / 1023.0; 
  digitalWrite(LED_PIN, raw < THRESHOLD ? HIGH : LOW); 
  Serial.print("raw="); Serial.print(raw); 
  Serial.print("  volts="); Serial.println(volts, 3); 
  delay(500); 
}