#define SEG_A 19
#define SEG_B 18
#define SEG_C 5
#define SEG_D 17
#define SEG_E 16
#define SEG_F 4
#define SEG_G 0

void setup() {
  pinMode(SEG_A, OUTPUT); 
  pinMode(SEG_B, OUTPUT); 
  pinMode(SEG_C, OUTPUT); 
  pinMode(SEG_D, OUTPUT); 
  pinMode(SEG_E, OUTPUT); 
  pinMode(SEG_F, OUTPUT); 
  pinMode(SEG_G, OUTPUT); 
}

void clearDisplay() {
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
}

void Digit0() {
  clearDisplay();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
}

void Digit1() {
  clearDisplay();
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
}

void Digit2() {
  clearDisplay();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_D, HIGH);
}

void Digit3() {
  clearDisplay();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void Digit4() {
  clearDisplay();
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void Digit5() {
  clearDisplay();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void Digit6() {
  clearDisplay();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void Digit7() {
  clearDisplay();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
}

void Digit8() {
  clearDisplay();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void Digit9() {
  clearDisplay();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void loop() {
  Digit0(); delay(500);
  Digit1(); delay(500);
  Digit2(); delay(500);
  Digit3(); delay(500);
  Digit4(); delay(500);
  Digit5(); delay(500);
  Digit6(); delay(500);
  Digit7(); delay(500);
  Digit8(); delay(500);
  Digit9(); delay(500);
}
