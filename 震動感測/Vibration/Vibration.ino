/*
 震動感測接線:
 S1 ==> D2
 S2 ==> 空接
 V  ==> 5V
 G  ==> GND  
 程式說明:當發生震動時，會點亮板載LED。
 */
#define Vibration 2
#define LED 13

void setup() {
  pinMode(Vibration, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (digitalRead(Vibration) == 1) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}
