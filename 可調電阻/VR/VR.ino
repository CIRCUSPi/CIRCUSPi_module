/*
 可調電阻接線:
 S1 ==> A0
 S2 ==> 空接
 V  ==> 5V
 G  ==> GND  
 程式說明:每隔0.5秒從序列埠監控視窗印出可調電阻的數值。
 */
#define VR A0

void setup() {
  Serial.begin(9600);
  pinMode(VR, INPUT);
}

void loop() {
  Serial.print("VR: ");
  Serial.println(analogRead(VR));
  delay(500);
}
