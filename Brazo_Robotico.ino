#include <Servo.h>  // Incluye la biblioteca Servo

Servo myservo_3;
Servo myservo_4;
Servo myservo_5;
Servo myservo_6;
Servo myservo_7;
Servo myservo_8;


void setup() {
  myservo_3.attach(3);
  myservo_4.attach(4);
  myservo_5.attach(5);
  myservo_6.attach(6);
  myservo_7.attach(7);
  myservo_8.attach(8);  // Asocia el servo al pin digital 9
}

void loop() {
  //myservo_8.write(100);   // 20 de base
  //delay(1000);
  //myservo_7.write(90);   // 90 de base
  //delay(1000);
  //myservo_6.write(0);    // 0 de base
  //delay(1000);
  //myservo_5.write(60);   // 90 de base      0 muestra
  //delay(1000);
  //myservo_4.write(180);    // 180 de base   120 muestra
  //delay(1000);
  //myservo_3.write(0);     // 0 de base, dunciona inverso al 4        60 muestra
  ////////////////////////////////////muestra agarre de cubo////////////////////////
  myservo_5.write(20);
  myservo_4.write(120);
  myservo_3.write(60);
  myservo_6.write(0);
  delay(5000);
  myservo_8.write(70); 
  //myservo_2.write(90);
  delay(500);// 0 de base
  
}