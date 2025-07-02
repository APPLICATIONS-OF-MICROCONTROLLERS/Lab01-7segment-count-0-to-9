// กำหนดขา segment
const int seg_a = 23;
const int seg_b = 22;
const int seg_c = 21;
const int seg_d = 19;
const int seg_e = 18;
const int seg_f = 5;
const int seg_g = 4;

// กำหนดลำดับขา segment ไว้ใน array เพื่อความสะดวก
const int segments[] = {seg_a, seg_b, seg_c, seg_d, seg_e, seg_f, seg_g};

// กำหนดรูปแบบการแสดงผลของตัวเลข 0-9 (HIGH = ติด, LOW = ดับ)
// segment: a b c d e f g
const byte digitPatterns[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},  // 0
  {0, 1, 1, 0, 0, 0, 0},  // 1
  {1, 1, 0, 1, 1, 0, 1},  // 2
  {1, 1, 1, 1, 0, 0, 1},  // 3
  {0, 1, 1, 0, 0, 1, 1},  // 4
  {1, 0, 1, 1, 0, 1, 1},  // 5
  {1, 0, 1, 1, 1, 1, 1},  // 6
  {1, 1, 1, 0, 0, 0, 0},  // 7
  {1, 1, 1, 1, 1, 1, 1},  // 8
  {1, 1, 1, 1, 0, 1, 1}   // 9
};

void setup() {
  // ตั้งค่าขาเป็น OUTPUT
  for (int i = 0; i < 7; i++) {
    pinMode(segments[i], OUTPUT);
  }
}

void displayDigit(int digit) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segments[i], digitPatterns[digit][i]);
  }
}

void loop() {
  for (int i = 0; i <= 9; i++) {
    displayDigit(i);
    delay(1000); // หน่วงเวลา 1 วินาที
  }
}
