const int SEG_A = 16;
const int SEG_B = 17;
const int SEG_C = 18;
const int SEG_D = 19;
const int SEG_E = 21;
const int SEG_F = 22;
const int SEG_G = 23;

// Array เก็บค่าสถานะของแต่ละ Segment สำหรับตัวเลข 0-9
// แต่ละแถวแทนตัวเลข 0-9 ตามลำดับ
byte digits[10][8] = {
{1, 1, 1, 1, 1, 1, 0, 0}, 
{0, 1, 1, 0, 0, 0, 0, 0}, 
{1, 1, 0, 1, 1, 0, 1, 0},
{1, 1, 1, 1, 0, 0, 1, 0}, 
{0, 1, 1, 0, 0, 1, 1, 0}, 
{1, 0, 1, 1, 0, 1, 1, 0}, 
{1, 0, 1, 1, 1, 1, 1, 0}, 
{1, 1, 1, 0, 0, 0, 0, 0},
{1, 1, 1, 1, 1, 1, 1, 0}, 
{1, 1, 1, 1, 0, 1, 1, 0} 
};

void setup() {
// กำหนดขา GPIO ทั้งหมดให้เป็น OUTPUT
pinMode(SEG_A, OUTPUT);
pinMode(SEG_B, OUTPUT);
pinMode(SEG_C, OUTPUT);
pinMode(SEG_D, OUTPUT);
pinMode(SEG_E, OUTPUT);
pinMode(SEG_F, OUTPUT);
pinMode(SEG_G, OUTPUT);
pinMode(SEG_DP, OUTPUT); // กำหนดขา DP เป็น OUTPUT ด้วย

Serial.begin(115200);
}

void displayDigit(int digit) {
// ตรวจสอบว่าตัวเลขอยู่ในช่วง 0-9 หรือไม่
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
// ถ้าตัวเลขไม่อยู่ในช่วง 0-9 ให้ปิดทุก Segment
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
// วนลูปแสดงตัวเลข 0 ถึง 9
for (int i = 0; i <= 9; i++) {
Serial.print("Displaying: ");
Serial.println(i);
displayDigit(i); 
delay(1000); // หน่วงเวลา 1 วินาที (1000 มิลลิวินาที)
}
}
