#ifndef __REGX52_H__
#define __REGX52_H__


#ifndef __SDCC
#include <lint.h>
#error "This header file must be used for SDCC compiler !"
#endif

// 特殊功能寄存器定义
__sfr __at (0x80) P0;  // 端口 0
__sfr __at (0x90) P1;  // 端口 1
__sfr __at (0xA0) P2;  // 端口 2
__sfr __at (0xB0) P3;  // 端口 3
__sfr __at (0xD0) PSW; // 程序状态字
__sfr __at (0xE0) ACC; // 累加器
__sfr __at (0xF0) B;   // B 寄存器
__sfr __at (0x81) SP;  // 堆栈指针
__sfr __at (0x82) DPL; // 数据指针低字节
__sfr __at (0x83) DPH; // 数据指针高字节
__sfr __at (0xA8) IE;  // 中断使能寄存器
__sfr __at (0xB8) IP;  // 中断优先级寄存器
__sfr __at (0x87) PCON;// 电源控制寄存器
__sfr __at (0x88) TCON;// 定时器控制寄存器
__sfr __at (0x89) TMOD;// 定时器模式寄存器
__sfr __at (0x8A) TL0; // 定时器 0 低字节
__sfr __at (0x8C) TH0; // 定时器 0 高字节
__sfr __at (0x8B) TL1; // 定时器 1 低字节
__sfr __at (0x8D) TH1; // 定时器 1 高字节
__sfr __at (0x98) SCON;// 串口控制寄存器
__sfr __at (0x99) SBUF;// 串口数据缓冲寄存器

// 位定义
__sbit __at (0xD7) CY;  // PSW.7
__sbit __at (0xD6) AC;  // PSW.6
__sbit __at (0xD5) F0;  // PSW.5
__sbit __at (0xD4) RS1; // PSW.4
__sbit __at (0xD3) RS0; // PSW.3
__sbit __at (0xD2) OV;  // PSW.2
__sbit __at (0xD1) F1;  // PSW.1
__sbit __at (0xD0) P;   // PSW.0

__sbit __at (0xA8) EA;  // IE.7
__sbit __at (0xAF) ET2; // IE.5
__sbit __at (0xAD) ES;  // IE.4
__sbit __at (0xAC) ET1; // IE.3
__sbit __at (0xAB) EX1; // IE.2
__sbit __at (0xAA) ET0; // IE.1
__sbit __at (0xA9) EX0; // IE.0

__sbit __at (0xB8) PX0; // IP.0
__sbit __at (0xB9) PT0; // IP.1
__sbit __at (0xBA) PX1; // IP.2
__sbit __at (0xBB) PT1; // IP.3
__sbit __at (0xBC) PS;  // IP.4

__sbit __at (0x90) P1_0; // P1.0
__sbit __at (0x91) P1_1; // P1.1
__sbit __at (0x92) P1_2; // P1.2
__sbit __at (0x93) P1_3; // P1.3
__sbit __at (0x94) P1_4; // P1.4
__sbit __at (0x95) P1_5; // P1.5
__sbit __at (0x96) P1_6; // P1.6
__sbit __at (0x97) P1_7; // P1.7

__sbit __at (0xA0) P2_0; // P2.0
__sbit __at (0xA1) P2_1; // P2.1
__sbit __at (0xA2) P2_2; // P2.2
__sbit __at (0xA3) P2_3; // P2.3
__sbit __at (0xA4) P2_4; // P2.4
__sbit __at (0xA5) P2_5; // P2.5
__sbit __at (0xA6) P2_6; // P2.6
__sbit __at (0xA7) P2_7; // P2.7

__sbit __at (0xB0) P3_0; // P3.0
__sbit __at (0xB1) P3_1; // P3.1
__sbit __at (0xB2) P3_2; // P3.2
__sbit __at (0xB3) P3_3; // P3.3
__sbit __at (0xB4) P3_4; // P3.4
__sbit __at (0xB5) P3_5; // P3.5
__sbit __at (0xB6) P3_6; // P3.6
__sbit __at (0xB7) P3_7; // P3.7

// 定义操作引脚的宏，便于操作每一个引脚
#define SET_PIN(port, pin) (port |= (1 << pin))  // 设置某一引脚为高电平
#define CLR_PIN(port, pin) (port &= ~(1 << pin)) // 设置某一引脚为低电平
#define TOGGLE_PIN(port, pin) (port ^= (1 << pin)) // 翻转某一引脚的状态
#define READ_PIN(port, pin) ((port >> pin) & 0x01) // 读取某一引脚的状态

// 时钟频率定义
#define FOSC 11059200 // 定义单片机的时钟频率（11.0592 MHz）

#endif // __REGX52_H__
