#include <Servo.h>
Servo servo1;
Servo servo2;
int servoPin = 3;
int servoPinbig = 9;
int flip = 2;
int scrape = 4;
int flipper = 7;

// Flipper Spatula
// servo2.write(50); // resting position (forward)
// servo2.write(160); // not in use position (back)

// Clamp
// servo1.write(0); // not in use position (back)
// servo1.write(160); // calmping position (forward)

void flip_func()
{
  servo2.write(50); // resting position (forward)
  servo1.write(160); // calmping position (forward)
  delay(2000); //needed for the PWM Servo Motor to work
}

void scrape_func()
{
  servo2.write(160); // not in use position (back)
  servo1.write(0); // not in use position (back)
  delay(2000); //needed for the PWM Servo Motor to work
}

void flipper_func()
{
  servo2.write(50); // resting position (forward)
  servo1.write(0); // calmping position (forward)
  delay(2000); //needed for the PWM Servo Motor to work
}

void setup(){
  servo1.attach(servoPin);
  servo2.attach(servoPinbig);
  pinMode(flip, OUPUT);
  pinMode(scrape, OUPUT);
  pinMode(flipper, OUPUT);
}

void loop(){

  if(flip == HIGH)
  {
    flip_func();
  }
  else if (scrape == HIGH)
  {
    scrape_func();
  }
  else if (flipper == HIGH)
  {
    flipper_func();
  }
  delay(500);
}
