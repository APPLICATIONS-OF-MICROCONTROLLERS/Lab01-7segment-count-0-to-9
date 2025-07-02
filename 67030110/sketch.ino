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

void digit0() {
 digitalWrite(SEG_A, HIGH);
 digitalWrite(SEG_B, HIGH);
 digitalWrite(SEG_C, HIGH);
 digitalWrite(SEG_D, HIGH);
 digitalWrite(SEG_E, HIGH);
 digitalWrite(SEG_F, HIGH);
 digitalWrite(SEG_G, LOW);
}

void digit1() {
 digitalWrite(SEG_A, LOW);
 digitalWrite(SEG_B, HIGH);
 digitalWrite(SEG_C, HIGH);
 digitalWrite(SEG_D, LOW);
 digitalWrite(SEG_E, LOW);
 digitalWrite(SEG_F, LOW);
 digitalWrite(SEG_G, LOW);
}

void digit2() {
 digitalWrite(SEG_A, HIGH);
 digitalWrite(SEG_B, HIGH);
 digitalWrite(SEG_C, LOW);
 digitalWrite(SEG_D, HIGH);
 digitalWrite(SEG_E, HIGH);
 digitalWrite(SEG_F, LOW);
 digitalWrite(SEG_G, HIGH);
}

void digit3() {
 digitalWrite(SEG_A, HIGH);
 digitalWrite(SEG_B, HIGH);
 digitalWrite(SEG_C, HIGH);
 digitalWrite(SEG_D, HIGH);
 digitalWrite(SEG_E, LOW);
 digitalWrite(SEG_F, LOW);
 digitalWrite(SEG_G, HIGH);
}

void digit4() {
 digitalWrite(SEG_A, LOW);
 digitalWrite(SEG_B, HIGH);
 digitalWrite(SEG_C, HIGH);
 digitalWrite(SEG_D, LOW);
 digitalWrite(SEG_E, LOW);
 digitalWrite(SEG_F, HIGH);
 digitalWrite(SEG_G, HIGH);
}

void digit5() {
 digitalWrite(SEG_A, HIGH);
 digitalWrite(SEG_B, LOW);
 digitalWrite(SEG_C, HIGH);
 digitalWrite(SEG_D, HIGH);
 digitalWrite(SEG_E, LOW);
 digitalWrite(SEG_F, HIGH);
 digitalWrite(SEG_G, HIGH);
}

void digit6() {
 digitalWrite(SEG_A, HIGH);
 digitalWrite(SEG_B, LOW);
 digitalWrite(SEG_C, HIGH);
 digitalWrite(SEG_D, HIGH);
 digitalWrite(SEG_E, HIGH);
 digitalWrite(SEG_F, HIGH);
 digitalWrite(SEG_G, HIGH);
}

void digit7() {
 digitalWrite(SEG_A, HIGH);
 digitalWrite(SEG_B, HIGH);
 digitalWrite(SEG_C, HIGH);
 digitalWrite(SEG_D, LOW);
 digitalWrite(SEG_E, LOW);
 digitalWrite(SEG_F, LOW);
 digitalWrite(SEG_G, LOW);
}

void digit8() {
 digitalWrite(SEG_A, HIGH);
 digitalWrite(SEG_B, HIGH);
 digitalWrite(SEG_C, HIGH);
 digitalWrite(SEG_D, HIGH);
 digitalWrite(SEG_E, HIGH);
 digitalWrite(SEG_F, HIGH);
 digitalWrite(SEG_G, HIGH);
}

void digit9() {
 digitalWrite(SEG_A, HIGH);
 digitalWrite(SEG_B, HIGH);
 digitalWrite(SEG_C, HIGH);
 digitalWrite(SEG_D, HIGH);
 digitalWrite(SEG_E, LOW);
 digitalWrite(SEG_F, HIGH);
 digitalWrite(SEG_G, HIGH);
}

void loop()
{
  digit0();
  delay(600);
  digit1();
  delay(600);
  digit2();
  delay(600);
  digit3();
  delay(600);
  digit4();
  delay(600);
  digit5();
  delay(600);
  digit6();
  delay(600);
  digit7();
  delay(600);
  digit8();
  delay(600);
  digit9();
  delay(600);
}
