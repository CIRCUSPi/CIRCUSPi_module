/*
 蜂鳴器接線:
 S1 ==> D9
 S2 ==> 空接
 V  ==> 5V
 G  ==> GND  
 程式說明:蜂鳴器會每隔1秒發出四短音。
 */
#define Buzzer 9

void setup() {
 pinMode(Buzzer, OUTPUT);
}

void loop() {
  tone(Buzzer, 1000, 100);
  delay(200);
  tone(Buzzer, 1000, 100);
  delay(200);
  tone(Buzzer, 1000, 100);
  delay(200);
  tone(Buzzer, 1000, 100);
  delay(1000);
}
