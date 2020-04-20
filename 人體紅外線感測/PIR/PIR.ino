/*
 人體紅外線感測器接線:
 S1 ==> D2
 S2 ==> 空接
 V  ==> 5V
 G  ==> GND  
 程式說明:當人體紅外線感測器感應到熱源時會觸發，此時會點亮板載LED，待感測器恢復狀態後LED會熄滅。
 */
#define PIR 2
#define LED 13

void setup() {
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (digitalRead(PIR) == 0) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}
