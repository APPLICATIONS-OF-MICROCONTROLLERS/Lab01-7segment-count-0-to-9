// ขากำหนดตามวงจรในภาพ
int a = 4;
int b = 16;
int c = 5;
int d = 17;
int e = 0;
int f = 18;
int g = 19;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void displayDigit(bool A, bool B, bool C, bool D, bool E, bool F, bool G) {
  // สำหรับ common cathode
  digitalWrite(a, A ? HIGH : LOW);
  digitalWrite(b, B ? HIGH : LOW);
  digitalWrite(c, C ? HIGH : LOW);
  digitalWrite(d, D ? HIGH : LOW);
  digitalWrite(e, E ? HIGH : LOW);
  digitalWrite(f, F ? HIGH : LOW);
  digitalWrite(g, G ? HIGH : LOW);
}

void loop() {
  // แสดงเลข 0
  displayDigit(1,1,1,1,1,1,0); delay(1000);
  // แสดงเลข 1
  displayDigit(0,1,1,0,0,0,0); delay(1000);
  // แสดงเลข 2
  displayDigit(1,1,0,1,1,0,1); delay(1000);
  // แสดงเลข 3
  displayDigit(1,1,1,1,0,0,1); delay(1000);
  // แสดงเลข 4
  displayDigit(0,1,1,0,0,1,1); delay(1000);
  // แสดงเลข 5
  displayDigit(1,0,1,1,0,1,1); delay(1000);
  // แสดงเลข 6
  displayDigit(1,0,1,1,1,1,1); delay(1000);
  // แสดงเลข 7
  displayDigit(1,1,1,0,0,0,0); delay(1000);
  // แสดงเลข 8
  displayDigit(1,1,1,1,1,1,1); delay(1000);
  // แสดงเลข 9
