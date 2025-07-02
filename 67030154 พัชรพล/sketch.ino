const int SEG_A = 19;
const int SEG_B = 18;
const int SEG_C = 5;
const int SEG_D = 17;
const int SEG_E = 16;
const int SEG_F = 4;
const int SEG_G = 0;

typedef void (*DigitFunc)();

void setup() {
  int pins[] = {SEG_A, SEG_B, SEG_C, SEG_D, SEG_E, SEG_F, SEG_G};
  for (int i = 0; i < 7; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void offDisplay() {
  digitalWrite(SEG_A, LOW);
  digitalWrite(SEG_B, LOW);
  digitalWrite(SEG_C, LOW);
  digitalWrite(SEG_D, LOW);
  digitalWrite(SEG_E, LOW);
  digitalWrite(SEG_F, LOW);
  digitalWrite(SEG_G, LOW);
}

// ฟังก์ชันตัวเลข 0-9
void Digit0() { digitalWrite(SEG_A, HIGH); digitalWrite(SEG_B, HIGH); digitalWrite(SEG_C, HIGH); digitalWrite(SEG_D, HIGH); digitalWrite(SEG_E, HIGH); digitalWrite(SEG_F, HIGH); digitalWrite(SEG_G, LOW); }
void Digit1() { digitalWrite(SEG_A, LOW);  digitalWrite(SEG_B, HIGH); digitalWrite(SEG_C, HIGH); digitalWrite(SEG_D, LOW);  digitalWrite(SEG_E, LOW);  digitalWrite(SEG_F, LOW);  digitalWrite(SEG_G, LOW); }
void Digit2() { digitalWrite(SEG_A, HIGH); digitalWrite(SEG_B, HIGH); digitalWrite(SEG_C, LOW);  digitalWrite(SEG_D, HIGH); digitalWrite(SEG_E, HIGH); digitalWrite(SEG_F, LOW);  digitalWrite(SEG_G, HIGH); }
void Digit3() { digitalWrite(SEG_A, HIGH); digitalWrite(SEG_B, HIGH); digitalWrite(SEG_C, HIGH); digitalWrite(SEG_D, HIGH); digitalWrite(SEG_E, LOW);  digitalWrite(SEG_F, LOW);  digitalWrite(SEG_G, HIGH); }
void Digit4() { digitalWrite(SEG_A, LOW);  digitalWrite(SEG_B, HIGH); digitalWrite(SEG_C, HIGH); digitalWrite(SEG_D, LOW);  digitalWrite(SEG_E, LOW);  digitalWrite(SEG_F, HIGH); digitalWrite(SEG_G, HIGH); }
void Digit5() { digitalWrite(SEG_A, HIGH); digitalWrite(SEG_B, LOW);  digitalWrite(SEG_C, HIGH); digitalWrite(SEG_D, HIGH); digitalWrite(SEG_E, LOW);  digitalWrite(SEG_F, HIGH); digitalWrite(SEG_G, HIGH); }
void Digit6() { digitalWrite(SEG_A, HIGH); digitalWrite(SEG_B, LOW);  digitalWrite(SEG_C, HIGH); digitalWrite(SEG_D, HIGH); digitalWrite(SEG_E, HIGH); digitalWrite(SEG_F, HIGH); digitalWrite(SEG_G, HIGH); }
void Digit7() { digitalWrite(SEG_A, HIGH); digitalWrite(SEG_B, HIGH); digitalWrite(SEG_C, HIGH); digitalWrite(SEG_D, LOW);  digitalWrite(SEG_E, LOW);  digitalWrite(SEG_F, LOW);  digitalWrite(SEG_G, LOW); }
void Digit8() { digitalWrite(SEG_A, HIGH); digitalWrite(SEG_B, HIGH); digitalWrite(SEG_C, HIGH); digitalWrite(SEG_D, HIGH); digitalWrite(SEG_E, HIGH); digitalWrite(SEG_F, HIGH); digitalWrite(SEG_G, HIGH); }
void Digit9() { digitalWrite(SEG_A, HIGH); digitalWrite(SEG_B, HIGH); digitalWrite(SEG_C, HIGH); digitalWrite(SEG_D, HIGH); digitalWrite(SEG_E, LOW);  digitalWrite(SEG_F, HIGH); digitalWrite(SEG_G, HIGH); }

DigitFunc digits[] = {Digit0, Digit1, Digit2, Digit3, Digit4, Digit5, Digit6, Digit7, Digit8, Digit9};

void loop() {
  for (int i = 0; i < 10; i++) {
    offDisplay();
    digits[i]();       // แสดงตัวเลข
    delay(500);        // หน่วงเวลา
  }
}
