/*
 *《忆红莲》 曲谱
 *作词：孤簧
 *作曲：水琴
 *记谱：
 *bilibili ID = av
 *曲谱输入：离枝 
 */
 #include "/home/litchi/Arduino/pitchesNMN.h" //设置好路径
 //曲谱:
 int melody[]={
  z6,g1,z5,z3,z2,z3,z5,z2,z3,0,//10
  z1,z3,z2,z5,z3,      //5
  0, d5,d6,z3,d7,z1,z2,z1,d7,d3,//10
  d3,d5,d6,d6,z1,d7,d6,d5,d3,d2,d3,d7,d3,//13舞
  0, d5,d6,z3,z2,z1,z2,z3,z5,z2,//10路
  d6,d7,z1,z3,z2,z2,z3,z1,z2,d6,//10 chu
  
  0, d5,d6,z3,d7,z1,z2,z1,d7,d3,//10 bu
  d3,d5,d6,z1,z2,z3,z2,z1,d7,d6,d7,z1,z2,d7,//14 wu
  0, d5,z1,z3,z2,z1,z2,z3,z5,z2,//10 wu
  d6,d7,z1,z3,z2,z2,z3,z1,z2,d6,0,//11 chu
  z1,z2,z6,z5,z6,z3,z2,z1,z2,z3,z2,z3,//12 gu
  d6,z1,z2,z3,z2,z1,d6,z1,z3,z2,z3,z5,z3,//13 wu
  z3,z5,z6,z5,z6,z3,z2,z1,z2,z3,z5,z2,//12 zhu
  d6,d7,z1,z3,z2,z2,z1,d6, 0,//9 chu
  
  
  
 };

 //音符持续时间：4 = 四分之一音符，8 = 八分之一音符:
 int noteDurations[] = {
 1,1,1,1,2,2,2,2,1,1,
 1,1,1,1,1,
 4,2,1,1,1,2,2,1,1,1,
 2,2,1,2,2,1,2,2,2,2,2,2,1,
 4,2,1,1,1,2,2,1,1,1,
 2,2,2,2,1,2,2,2,2,1,// chu
 
 2,2,1,1,1,2,2,1,1,1,//10 bu
 2,2,1,2,2,2,2,2,2,2,2,2,2,1,//14 wu
 2,2,1,1,1,2,2,1,1,1,//10 wu
 2,2,2,2,1,2,2,2,2,1,1,//11 chu
 1,1,2,2,2,2,1,2,2,1,1,1,//12 gu
 2,2,2,2,2,2,1,2,2,1,2,2,1,//13 wu
 2,2,2,2,2,2,1,2,2,1,1,1,//12 zhu
 2,2,2,2,1,1,1,1,1,//9 zhu
 };
 
 void setup() {
  // 增删节拍时，需要修改 thisNote 的数字:
  for (int thisNote = 0; thisNote < 149; thisNote++) {
 
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // 为了区分, 设置好最小时间.
    // 建议持续时间 + 30% :
    int pauseBetweenNotes = noteDuration * 1.1;
    delay(pauseBetweenNotes);
    // 停止:
    noTone(8);
  }
 }

void loop() {
  // 

}
