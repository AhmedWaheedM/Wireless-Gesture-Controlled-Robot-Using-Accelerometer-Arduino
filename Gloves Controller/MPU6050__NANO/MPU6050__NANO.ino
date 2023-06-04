#include <Wire.h>
#include "accelerometer.h"
//==============================================================
int White = 5;
int Data = 0;
//==============================================================
void printData()
{ Serial.write ("X=");
  Serial.println(accelX);

  Serial.write ("Y=");
  Serial.println(accelY);

  Serial.write ("Z=");
  Serial.println(accelZ);
  Serial.println();
}
//==============================================================
void setup() {
  Serial.begin (9600);
  Wire.begin();
  setupMPU();
}
//==============================================================
void loop() {
  recordAccelRegisters();
  printData();
  //==============================================================
  if (accelX > 11000)
  {
    Serial.println ('B');
  }
  else if (accelX < -5000)
  {
    Serial.println ('F');
  }
 else  if (accelY > 11000)
  {
    Serial.println ('R');
  }
 else if (accelY < -11000)
  {
    Serial.println ('L');
  }
  else
  {
    Serial.println ('S');
  }
  delay(500);
}
