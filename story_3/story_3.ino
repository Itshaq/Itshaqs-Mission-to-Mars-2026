// C++ code
const int RED = 12; //Left reverse
const int GREEN = 11; //Left forward
const int WHITE = 10; //Left enable
const int YELLOW = 9; //Right enable
const int ORANGE = 8; //Right reverse
const int BLUE = 7; //Right forward
void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(WHITE, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(ORANGE, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop()
{
  digitalWrite(WHITE, HIGH);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  delay(5000);
  digitalWrite(WHITE, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  delay(1000);
  digitalWrite(WHITE, HIGH);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, HIGH);
  digitalWrite(ORANGE, HIGH);
  delay(2000);
  digitalWrite(RED, LOW);
  digitalWrite(ORANGE, LOW);
  digitalWrite(WHITE, LOW);
  digitalWrite(YELLOW, LOW);
}
