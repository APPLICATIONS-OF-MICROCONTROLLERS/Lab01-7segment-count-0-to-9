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

void clearSegments() {
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
}

void Digite0() {
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, LOW);
}
void Digit1() {
  clearSegments();
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
}

void Digit2() {
  clearSegments();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_D, HIGH);
}

void Digit3() {
  clearSegments();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void Digit4() {
  clearSegments();
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
}

void Digit5() {
  clearSegments();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
}

void Digit6() {
  clearSegments();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void Digit7() {
  clearSegments();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
}

void Digit8() {
  clearSegments();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void Digit9() {
  clearSegments();
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
}

void loop() {
  Digite0();
  delay(500);
  Digit1();
  delay(1000);
  Digit2();
  delay(1000);
  Digit3();
  delay(1000);
  Digit4();
  delay(1000);
  Digit5();
  delay(1000);
  Digit6();
  delay(1000);
  Digit7();
  delay(1000);
  Digit8();
  delay(1000);
  Digit9();
  delay(1000);
}
