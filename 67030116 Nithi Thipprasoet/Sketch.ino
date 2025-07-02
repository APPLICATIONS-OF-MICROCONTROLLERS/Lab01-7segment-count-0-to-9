// กำหนดขา segment A ถึง G
#define SEG_A 19
#define SEG_B 18
#define SEG_C 5
#define SEG_D 17
#define SEG_E 16
#define SEG_F 4
#define SEG_G 0

// สร้างอาร์เรย์เก็บขา segment
const int segments[] = {SEG_A, SEG_B, SEG_C, SEG_D, SEG_E, SEG_F, SEG_G};

// รูปแบบการแสดงเลข 0-9 (Common Cathode)
const byte digits[10][7] = {
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

void setup()
{
  // ตั้งค่า segment เป็น OUTPUT
  for (int i = 0; i < 7; i++) {
    pinMode(segments[i], OUTPUT);
  }
}

// ฟังก์ชันแสดงเลข 0-9
void displayDigit(int digit)
{
  for (int i = 0; i < 7; i++) {
    digitalWrite(segments[i], digits[digit][i]);
  }
}

void loop()
{
  for (int i = 0; i <= 9; i++) {
    displayDigit(i);
    delay(1000); // หน่วงเวลา 1 วินาทีต่อเลข
  }
}
