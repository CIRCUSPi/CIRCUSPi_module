/*
 光感測器接線:
 S1 ==> A0
 S2 ==> 空接
 V  ==> 5V
 G  ==> GND  
 程式說明:每隔0.5秒從序列埠監控視窗印出光感測器感測的數值。
 */
#define Light A0

void setup() {
  Serial.begin(9600);
  pinMode(Light, INPUT);
}

void loop() {
  Serial.print("Light Sensor: ");
  Serial.println(analogRead(Light));
  delay(500);
}
