## 目标

通过 ardunio 操控蜂鸣器，执行输入的频率，演奏音乐。

## 操作

以 arduino uno 为例

### 需要

- 蜂鸣器一个（10块钱包邮的游戏机喇叭，或者废旧电话听筒都可以，其它大功率设备需要接电阻）

- 公对母杜邦线 2 条

### 接线

- 蜂鸣器正极接 digit 8 号。

- 蜂鸣器负极接 digit GND 
       
### 演奏

- 确定 `pitchesNMN.h` 和 `xxx.ino` 在同一文件夹，或者修改路径。

- 打开电脑，用 Arduino IDE 打开需要播放的 ino 文件，
   
- `验证`无误后，执行`上传`就可以听到乐曲播放了。

## 调音提示：

- 1. 每次只可发出一个音节，即使同一台 Arduino 接上多个扬声器，也只能依序播放。

- 2. 在 ino 文件里 ，找到 `#include "pitchesNMN.h"`这一行， 可以自己修改 `pitchesNMN.h` 的路径。

- 3. 该程序包含两个 pitches 文件， pitchesNMN.h 为简谱记法。设置了 7个高音，7个中音，7个低音，和5个倍低音，可自行修改； `pitches12ET.h` 为十二平
均律设定，可选范围更大。不过因为蜂鸣器有频率范围，建议设定在 330Hz~4000HZ 。

- 4. 可以自己新建 ino 文件，编辑曲子，如使用纯律简谱记法 ， d5 表示'低音sol'，z4表示'中音fa'，g3表示'高音mi',以此类推;如采用十二平均律设定，则建议调谐范围在 E4~B7，频率太低，声音浑浊，频率太高，出现破音。

- 5. 编辑曲子时，在 ino 里 ， 找到 `int melody[]={ }; `，在大括号里输入音符.

- 6. 找到`int noteDurations[] = { }; `，在大括号里输入每个音符的节拍间隔。需要注意的是，这里的`noteDuration`取值为'持续时间的倒数'，如一个音时长 1/8 节拍，则持续时间为0.125s(我们设定一个节拍1秒钟)，而`noteDuration`取值为8。之所以如此，主要是为了考虑代码上的简洁。字符类型默认定义为整数(int)，可修改为浮点数(float)获取精确调整。节奏较长时，可增加 符号0 ，表示停顿。

- 7. 找到 `thisNote < %数字`，输入的音符数。  

## 更新的曲子：

- [x] yingtixu ..........莺啼序 

- [x] yihonglian.........忆红莲

- [x] xianjuyao..........仙居谣
