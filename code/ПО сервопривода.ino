// Подклоючаем библиотеку Servo
#include <Servo.h> 

// Пин для сервопривода
int servoPin = 3;
// Создаем объект
Servo Servo1;

void setup() {
  // Нам нужно подключить сервопривод к используемому номеру пина
  Servo1.attach(servoPin);
}

void loop(){
  // 0 градусов
  Servo1.write(0);
  delay(1000);
  // 90 градусов
  Servo1.write(90);
  delay(1000);
  // 180 градусов
  Servo1.write(180);
  delay(1000);
}