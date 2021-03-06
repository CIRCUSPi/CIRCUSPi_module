/*
 按鈕接線:
 S1 ==> D2
 S2 ==> 空接
 V  ==> 5V
 G  ==> GND  
 程式說明:當按下按鈕時，會點亮板載LED，放開後LED會熄滅。
 */
#define BUTTON 2
#define LED 13

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON) == 0) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}
