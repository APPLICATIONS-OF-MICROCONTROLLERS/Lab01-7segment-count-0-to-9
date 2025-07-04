const int SEG_A = 16;
const int SEG_B = 17;
const int SEG_C = 18;
const int SEG_D = 19;
const int SEG_E = 21;
const int SEG_F = 22;
const int SEG_G = 23;
const int SEG_DP = 5;

byte digits[10][8] = {
  {1, 1, 1, 1, 1, 1, 0, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1, 0}, // 2
  {1, 1, 1, 1, 0, 0, 1, 0}, // 3
  {0, 1, 1, 0, 0, 1, 1, 0}, // 4
  {1, 0, 1, 1, 0, 1, 1, 0}, // 5
  {1, 0, 1, 1, 1, 1, 1, 0}, // 6
  {1, 1, 1, 0, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1, 0}, // 8
  {1, 1, 1, 1, 0, 1, 1, 0}  // 9
};

void setup() {
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
  pinMode(SEG_DP, OUTPUT);

  Serial.begin(115200);
}

void displayDigit(int digit) {
  if (digit >= 0 && digit <= 9) {
    digitalWrite(SEG_A, digits[digit][0]);
    digitalWrite(SEG_B, digits[digit][1]);
    digitalWrite(SEG_C, digits[digit][2]);
    digitalWrite(SEG_D, digits[digit][3]);
    digitalWrite(SEG_E, digits[digit][4]);
    digitalWrite(SEG_F, digits[digit][5]);
    digitalWrite(SEG_G, digits[digit][6]);
    digitalWrite(SEG_DP, digits[digit][7]);
  } else {
    digitalWrite(SEG_A, LOW);
    digitalWrite(SEG_B, LOW);
    digitalWrite(SEG_C, LOW);
    digitalWrite(SEG_D, LOW);
    digitalWrite(SEG_E, LOW);
    digitalWrite(SEG_F, LOW);
    digitalWrite(SEG_G, LOW);
    digitalWrite(SEG_DP, LOW);
  }
}

void loop() {
  for (int i = 0; i <= 9; i++) {
    Serial.print("Displaying: ");
    Serial.println(i);

    displayDigit(i);
    delay(1000);
  }
}
