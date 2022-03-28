#include <Ultrasonic.h>    // подключаем библиотеку Ultrasonic
Ultrasonic ultrasonic(6,8); // назначаем выходы для Trig и Echo
int lpin = 13;
void setup() {
  Serial.begin(9600);        // подключаем монитор порта
  pinMode (13, OUTPUT); // подключаем к пину светодиод
}

void loop() {
  // put your main code here, to run repeatedly:
  int dist = ultrasonic.read(CM);
  Serial.print(dist);     // выводим расстояние в сантиметрах
  Serial.println(" cm");
  if (dist < 50)
    {
    digitalWrite(lpin, HIGH);
    delay(1500);
    digitalWrite(lpin, LOW);
    }
     else if (dist > 5)
     {
     digitalWrite(lpin, LOW);
     }
  delay(100);
}
