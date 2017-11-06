/*
 *《仙居谣》 曲谱
 *作词:宿小善/九天/铭羽/斜染
 *作曲：papaw泡泡
 *记谱：火中莲lily
 *bilibili ID = av3259283
 *程序输入：离枝 
 */
 #include "pitchesNMN.h" //设置好路径
 //曲谱:
 int melody[]={
  z6,g1,g2,g5,g5,g3,g2,g1,g2,g3,//10
  g5,g6,g2,g1,g1,z6,z5,z6,g1,g2,//10
  g1,g2,g3,g5,g6,g5,g3,g5,g3,g2,g3,//11
  g3,0,0,//3
  
  d6,z3,z5,z3,z2,z3,z5,z3,//8
  d6,z1,z1,z2,z3,z2,z2,z1,z1,z2,//10
  d6,z3,z5,z3,z2,z3,z5,z5,//8
  z5,z6,z5,z3,z2,z1,z2,z2,z3,z2,//10
  d6,z3,z5,z3,z2,z3,z5,z3,//8
  d6,z1,z1,z2,z3,z2,z2,z1,z1,z2,//10

  d6,z3,z5,z3,z2,z3,z5,z5,//8
  z2,z3,z5,z6,z5,g1,z7,z5,z6,z3,//10
  d6,z1,z5,z3,z3,z3,z3,z2,z1,z2,//10
  z5,z5,z5,z2,z1,z1,z2,//7
  z2,z3,d6,d6,z1,z5,z3,//7
  z3,z3,z3,z2,z1,z2,//6
  z5,z5,z5,z2,z1,z1,z2,z3,z4,z3,0,//11
 };

 //音符持续时间：4 = 四分音符，8 = 八分音符:
 int noteDurations[] = {
  1,3,3,3,1,1.5,3,3,3,3,
  3,3,3,1,3,3,3,3,3,3,
  3,3,3,3,3,3,3,3,6,6,1,
  1,1,1,

  1,1.5,3,1,3,3,3,1.5,
  3,3,3,3,3,3,6,6,3,1.5,
  1,1.5,3,1,3,3,3,1.5,
  6,3,3,3,3,3,6,6,3,1.5,
  1,1.5,3,1,3,3,3,1.5,
  3,3,3,3,3,3,6,6,3,1.5,

  1,1.5,3,1.5,3,3,3,1.5,
  3,3,3,3,3,3,3,3,1.5,1,
  3,3,3,1,6,6,3,3,1.5,3,
  6,6,3,3,3,3,1.5,
  3,3,1,3,3,3,1,
  6,6,3,3,1.5,3,
  6,6,3,3,3,3,1.5,3,3,1,1,
  
 };
 
 void setup() {
  // 增删节拍时，需要修改 thisNote 的数字:
  for (int thisNote = 0; thisNote < 147; thisNote++) {
 
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // 为了区分, 设置好最小时间.
    // 建议持续时间 + 30% :
    int pauseBetweenNotes = noteDuration * 1.0;
    delay(pauseBetweenNotes);
    // 停止:
    noTone(8);
  }
 }

void loop() {
  // put your main code here, to run repeatedly:

}
