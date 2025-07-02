// กำหนดขา segment
#define a 13
#define b 12
#define c 14
#define d 27
#define e 26
#define f 25
#define g 33
 
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  Serial.begin(115200);
  Serial.println("Chanin Khomvongsa 67030281");
}
 
// ฟังก์ชันปิดทุก segment
void clearSegments() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
 
// ฟังก์ชันแสดงเลข 0-9
void displayNumber(int num) {
  clearSegments();
  switch(num) {
    case 0:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      break;
    case 1:
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      break;
    case 2:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(d, HIGH);
      break;
    case 3:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(g, HIGH);
      break;
    case 4:
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      break;
    case 5:
      digitalWrite(a, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      break;
    case 6:
      digitalWrite(a, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(g, HIGH);
      break;
    case 7:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      break;
    case 8:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
    case 9:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
  }
}
 
void loop() {
  for (int i = 0; i <= 9; i++) {
    Serial.print("แสดงเลข: ");
    Serial.println(i);
    displayNumber(i);
    delay(1000);
  }
}
