constexpr int segmentPins[] = {23, 22, 21, 19, 18, 5, 4}; // A-G

constexpr bool digitSegments[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

void setup() {
  for (int pin : segmentPins) {
    pinMode(pin, OUTPUT);
  }
}

void showDigit(int digit) {
  if (digit < 0 || digit > 9) return; 
  for (size_t i = 0; i < 7; ++i) {
    digitalWrite(segmentPins[i], digitSegments[digit][i]);
  }
}

void loop() {
  for (int i = 0; i <= 9; ++i) {
    showDigit(i);
    delay(1000);
  }
}
