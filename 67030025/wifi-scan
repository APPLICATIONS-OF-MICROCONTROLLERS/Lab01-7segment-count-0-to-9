const int A = 19;
const int B = 18;
const int C = 5;
const int D = 17;
const int E = 16;
const int F = 4;
const int G = 0;

const int segments[] = {A, B, C, D, E, F, G};

const bool digits[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, 
  {0, 1, 1, 0, 0, 0, 0}, 
  {1, 1, 0, 1, 1, 0, 1}, 
  {1, 1, 1, 1, 0, 0, 1}, 
  {0, 1, 1, 0, 0, 1, 1}, 
  {1, 0, 1, 1, 0, 1, 1}, 
  {1, 0, 1, 1, 1, 1, 1},
  {1, 1, 1, 0, 0, 0, 0}, 
  {1, 1, 1, 1, 1, 1, 1}, 
  {1, 1, 1, 1, 0, 1, 1}  
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segments[i], OUTPUT);
  }
}

void loop() {
  for (int num = 0; num <= 9; num++) {
    for (int seg = 0; seg < 7; seg++) {
      digitalWrite(segments[seg], digits[num][seg]);
    }
    delay(1000);
  }
}
