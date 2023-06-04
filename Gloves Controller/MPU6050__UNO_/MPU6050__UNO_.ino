int Data = 0;
int Motor1A = 5;
int Motor1B = 6;
int Motor2A = 9;
int Motor2B = 10;
//==============================================================
void forward (){
  digitalWrite (Motor1A, HIGH);
  digitalWrite (Motor2A, HIGH);
  digitalWrite (Motor1B, LOW);
  digitalWrite (Motor2B, LOW);
}
void backward (){
  digitalWrite (Motor1A, LOW);
  digitalWrite (Motor2A, LOW);
  digitalWrite (Motor1B, HIGH);
  digitalWrite(Motor2B, HIGH);
}
void left (){
  digitalWrite (Motor1A, HIGH);
  digitalWrite (Motor2A, LOW);
  digitalWrite (Motor1B, LOW);
  digitalWrite(Motor2B, LOW);
}
void right (){
  digitalWrite (Motor1A, LOW);
  digitalWrite (Motor2A, HIGH);
  digitalWrite (Motor1B, LOW);
  digitalWrite(Motor2B, LOW);
}
void stay (){
  digitalWrite (Motor1A, LOW);
  digitalWrite (Motor2A, LOW);
  digitalWrite (Motor1B, LOW);
  digitalWrite(Motor2B, LOW);
}
//==============================================================
void setup() {
  Serial.begin (9600);
  pinMode (Motor1A, OUTPUT);
  pinMode (Motor2A, OUTPUT);
  pinMode (Motor1B, OUTPUT);
  pinMode (Motor2B, OUTPUT);
}
//==============================================================
void loop() {
  if (Serial.available() > 0)
  {
    Data = Serial.read();

  }
  if (Data == 'F')
  {
    forward();
  }
  else if (Data == 'B')
  {
    backward();
  }
  else if (Data == 'L')
  {
    left();
  }
  else if (Data == 'R')
  {
    right();
  }
  else if (Data == 'S')
  {
    stay();
  }
}
