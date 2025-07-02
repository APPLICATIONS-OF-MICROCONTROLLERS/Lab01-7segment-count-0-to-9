const int seg_A = 19;
const int seg_B = 18;
const int seg_C = 5;
const int seg_D = 17;
const int seg_E = 16;
const int seg_F = 4;
const int seg_G = 0;
const int seg_DP = 2;

void setup() {
  // set gpig 5 to output
  pinMode(seg_A, OUTPUT);
  pinMode(seg_B, OUTPUT);
  pinMode(seg_C, OUTPUT);
  pinMode(seg_D, OUTPUT);
  pinMode(seg_E, OUTPUT);
  pinMode(seg_F, OUTPUT);
  pinMode(seg_G, OUTPUT);
  pinMode(seg_DP, OUTPUT);
  
}

void digit0()
{
  digitalWrite(seg_A, HIGH);
  digitalWrite(seg_B, HIGH);
  digitalWrite(seg_C, HIGH);
  digitalWrite(seg_D, HIGH);
  digitalWrite(seg_E, HIGH);
  digitalWrite(seg_F, HIGH);
  digitalWrite(seg_G, LOW);
  digitalWrite(seg_DP, LOW);
}

void digit1() {
  digitalWrite(seg_A, LOW);
  digitalWrite(seg_B, HIGH);
  digitalWrite(seg_C, HIGH);
  digitalWrite(seg_D, LOW);
  digitalWrite(seg_E, LOW);
  digitalWrite(seg_F, LOW);
  digitalWrite(seg_G, LOW);
  digitalWrite(seg_DP, LOW);
}

void digit2() {
  digitalWrite(seg_A, HIGH);
  digitalWrite(seg_B, HIGH);
  digitalWrite(seg_C, LOW);
  digitalWrite(seg_D, HIGH);
  digitalWrite(seg_E, HIGH);
  digitalWrite(seg_F, LOW);
  digitalWrite(seg_G, HIGH);
  digitalWrite(seg_DP, LOW);
}
void digit3() {
 digitalWrite(seg_A, HIGH);
  digitalWrite(seg_B, HIGH);
  digitalWrite(seg_C, HIGH);
  digitalWrite(seg_D, HIGH);
  digitalWrite(seg_E, LOW);
  digitalWrite(seg_F, LOW);
  digitalWrite(seg_G, HIGH);
  digitalWrite(seg_DP, LOW);
}
void digit4() {
  digitalWrite(seg_A, LOW);
  digitalWrite(seg_B, HIGH);
  digitalWrite(seg_C, HIGH);
  digitalWrite(seg_D, LOW);
  digitalWrite(seg_E, LOW);
  digitalWrite(seg_F, HIGH);
  digitalWrite(seg_G, HIGH);
  digitalWrite(seg_DP, LOW);
}
void digit5() {
  digitalWrite(seg_A, HIGH);
  digitalWrite(seg_B, LOW);
  digitalWrite(seg_C, HIGH);
  digitalWrite(seg_D, HIGH);
  digitalWrite(seg_E, LOW);
  digitalWrite(seg_F, HIGH);
  digitalWrite(seg_G, HIGH);
  digitalWrite(seg_DP, LOW);
}

void digit6() {
  digitalWrite(seg_A, HIGH);
  digitalWrite(seg_B, LOW);
  digitalWrite(seg_C, HIGH);
  digitalWrite(seg_D, HIGH);
  digitalWrite(seg_E, HIGH);
  digitalWrite(seg_F, HIGH);
  digitalWrite(seg_G, HIGH);
  digitalWrite(seg_DP, LOW);
}

void digit7() {
  digitalWrite(seg_A, HIGH);
  digitalWrite(seg_B, HIGH);
  digitalWrite(seg_C, HIGH);
  digitalWrite(seg_D, LOW);
  digitalWrite(seg_E, LOW);
  digitalWrite(seg_F, LOW);
  digitalWrite(seg_G, LOW);
  digitalWrite(seg_DP, LOW);
}
void digit8() {
  digitalWrite(seg_A, HIGH);
  digitalWrite(seg_B, HIGH);
  digitalWrite(seg_C, HIGH);
  digitalWrite(seg_D, HIGH);
  digitalWrite(seg_E, HIGH);
  digitalWrite(seg_F, HIGH);
  digitalWrite(seg_G, HIGH);
  digitalWrite(seg_DP, LOW);
}

void digit9() {
  digitalWrite(seg_A, HIGH);
  digitalWrite(seg_B, HIGH);
  digitalWrite(seg_C, HIGH);
  digitalWrite(seg_D, HIGH);
  digitalWrite(seg_E, LOW);
  digitalWrite(seg_F, HIGH);
  digitalWrite(seg_G, HIGH);
  digitalWrite(seg_DP, LOW);
}
void loop() {
  // Cycle through digits 0 to 9
  digit0();
  delay(1000); // Display for 1 second

  digit1();
  delay(1000);

  digit2();
  delay(1000);

  digit3();
  delay(1000);

  digit4();
  delay(1000);

  digit5();
  delay(1000);

  digit6();
  delay(1000);

  digit7();
  delay(1000);

  digit8();
  delay(1000);

  digit9();
  delay(1000);
}
