// 内蔵LEDはGPIO 25に接続されています
const int ledPin = 25;

void setup() {
  // LEDピンを出力モードに設定
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // LEDを点灯
  digitalWrite(ledPin, HIGH);
  delay(1000); // 1秒間点灯

  // LEDを消灯
  digitalWrite(ledPin, LOW);
  delay(1000); // 1秒間消灯
}