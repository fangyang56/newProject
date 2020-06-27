int pos = 0;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  // 关闭引脚8的音频功能:
  noTone(8);
  // 在6针上播放一个音符200毫秒:
  tone(6, 880, 200); // play tone 69 (A5 = 880 Hz)
  delay(200); // Wait for 200 millisecond(s)
  // 关闭引脚6的音频功能:
  noTone(6);
  // 弹奏音符在引脚7 500毫秒:
  tone(7, 988, 500); // play tone 71 (B5 = 988 Hz)
  delay(500); //等待500毫秒
  // 关闭引脚7的音频功能:
  noTone(7);
  // 弹奏音符在引脚8 300毫秒:
  tone(8, 1047, 300); // play tone 72 (C6 = 1047 Hz)
  delay(300); // 等待300毫秒
}