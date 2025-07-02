const int A = 19;
const int B = 18;
const int C = 5;
const int D = 17;
const int E = 16;
const int F = 4;
const int G = 0;

const int segments[] = {A, B, C, D, E, F, G};

const bool digits[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segments[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i <= 9; i++) {
    for (int seg = 0; seg < 7; seg++) {
      digitalWrite(segments[seg], digits[i][seg]);
    }
    delay(1000);
  }
}





