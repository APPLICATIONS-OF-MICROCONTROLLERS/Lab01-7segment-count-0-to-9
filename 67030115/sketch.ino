#define SEG_A 19 
#define SEG_B 18 
#define SEG_C 5  
#define SEG_D 17 
#define SEG_E 16 
#define SEG_F 4  
#define SEG_G 0  
void setup() {
  pinMode(SEG_A, OUTPUT);
  pinMode(SEG_B, OUTPUT);
  pinMode(SEG_C, OUTPUT);
  pinMode(SEG_D, OUTPUT);
  pinMode(SEG_E, OUTPUT);
  pinMode(SEG_F, OUTPUT);
  pinMode(SEG_G, OUTPUT);
}

void displayDigit(int digit) {
  switch (digit) {
    case 0: // เลข 0
      digitalWrite(SEG_A, HIGH); 
      digitalWrite(SEG_B, HIGH); 
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH); 
      digitalWrite(SEG_E, HIGH); digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, LOW);
      break;
    case 1: // เลข 1
      digitalWrite(SEG_A, LOW); 
      digitalWrite(SEG_B, HIGH); 
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, LOW); 
      digitalWrite(SEG_E, LOW); 
      digitalWrite(SEG_F, LOW);
      digitalWrite(SEG_G, LOW);
      break;
    case 2: // เลข 2
      digitalWrite(SEG_A, HIGH); 
      digitalWrite(SEG_B, HIGH); digitalWrite(SEG_C, LOW);
      digitalWrite(SEG_D, HIGH);
       digitalWrite(SEG_E, HIGH); 
       digitalWrite(SEG_F, LOW);
      digitalWrite(SEG_G, HIGH);
      break;
    case 3: // งเลข 3
      digitalWrite(SEG_A, HIGH); 
      digitalWrite(SEG_B, HIGH); 
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH); 
      digitalWrite(SEG_E, LOW); 
      digitalWrite(SEG_F, LOW);
      digitalWrite(SEG_G, HIGH);
      break;
    case 4: // เลข 4
      digitalWrite(SEG_A, LOW); 
      digitalWrite(SEG_B, HIGH); 
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, LOW); 
      digitalWrite(SEG_E, LOW); 
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 5: // เลข 5
      digitalWrite(SEG_A, HIGH); 
      digitalWrite(SEG_B, LOW); 
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH); 
      digitalWrite(SEG_E, LOW); 
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 6: // เลข 6
      digitalWrite(SEG_A, HIGH); digitalWrite(SEG_B, LOW); digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH); digitalWrite(SEG_E, HIGH); digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 7: // เลข 7
      digitalWrite(SEG_A, HIGH); 
      digitalWrite(SEG_B, HIGH); 
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, LOW); 
      digitalWrite(SEG_E, LOW); 
      digitalWrite(SEG_F, LOW);
      digitalWrite(SEG_G, LOW);
      break;
    case 8: // เลข 8
      digitalWrite(SEG_A, HIGH); 
      digitalWrite(SEG_B, HIGH); 
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH); 
      digitalWrite(SEG_E, HIGH); 
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    case 9: // เลข 9
      digitalWrite(SEG_A, HIGH); 
      digitalWrite(SEG_B, HIGH); 
      digitalWrite(SEG_C, HIGH);
      digitalWrite(SEG_D, HIGH); 
      digitalWrite(SEG_E, LOW); 
      digitalWrite(SEG_F, HIGH);
      digitalWrite(SEG_G, HIGH);
      break;
    default: 
      digitalWrite(SEG_A, LOW); 
      digitalWrite(SEG_B, LOW); 
      digitalWrite(SEG_C, LOW);
      digitalWrite(SEG_D, LOW); 
      digitalWrite(SEG_E, LOW); 
      digitalWrite(SEG_F, LOW);
      digitalWrite(SEG_G, LOW);
      break;
  }
}

void loop() {
  for (int i = 0; i <= 9; i++) { // วนลูปจาก 0 ถึง 9
    displayDigit(i); 
    delay(1000);     
  }
}
