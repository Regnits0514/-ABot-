#include <Servo.h>
#include <Servo.h>
Servo r;
Servo l;

void setup()
{
pinMode(8, OUTPUT);

r.attach(12);
l.attach(13);
}

void loop()
{
  r.write(1700);
  digitalWrite(8, HIGH);
  delay(400);
  r.write(1300);
  digitalWrite(8, LOW);
  delay(400);
}