#include <regx52.h>
// 定义外部函数接口

extern void display(int position, int number);
extern void delay(unsigned int ms);
extern unsigned char isKeyPressed(__sbit Key);

// 定义按键
__sbit __at (0xB1) Key1; // P3.1 引脚
__sbit __at (0xB0) Key2; // P3.0 引脚
__sbit __at (0xB2) Key3; // P3.2 引脚
__sbit __at (0xB3) Key4; // P3.3 引脚