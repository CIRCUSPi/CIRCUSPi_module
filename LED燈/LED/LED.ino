/*
 LED燈接線:
 S1 ==> D5
 S2 ==> 空接
 V  ==> 5V
 G  ==> GND  
 程式說明:LED會逐漸亮滅。
 */
#define LED 5

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int i=0; i<255; i++) {
    analogWrite(LED, i);
    delay(5);
  }
  for (int i=255; i>0; i--) {
    analogWrite(LED, i);
    delay(5);
  }
}
