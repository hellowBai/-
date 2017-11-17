// 绘画.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <graphics.h>      // 引用图形库头文件
#include <conio.h>

#define long 640
#define width 480
#define PI 3.14159265
int main()
{

	initgraph(640, 480);
	setbkcolor(WHITE); //背景
	setfillcolor(WHITE);//身体
	fillcircle(long / 2, width / 2 + 40, 75);
	setfillcolor(GREEN);//头部
	fillcircle(long / 2, width / 2 -50 , 100);
	setfillcolor(WHITE);//脸部
	fillellipse(long / 2-90, (width / 2-30)-80, long / 2+90, (width / 2-30)+80);
	setfillcolor(RED);//鼻子
	fillcircle(long / 2, width / 2 - 70, 10);
	setcolor(BLACK);//眼睛
	roundrect(long / 2 - 40, width / 2 - 120, long / 2 - 5, width / 2 - 65, 45, 45);
	setcolor(BLACK);//眼睛
	roundrect(long / 2 + 40, width / 2 - 120, long / 2 + 5, width / 2 - 65, 45, 45);
	setfillcolor(BLACK);//眼珠子
	fillcircle(long / 2-10, width / 2 - 85, 4);
	setfillcolor(BLACK);
	fillcircle(long / 2 + 10, width / 2 - 85, 4);
	setfillcolor(BLACK);//胡子
	line(long / 2-30, width / 2 - 50,long/2-65, width / 2 - 60);
	line(long / 2 - 30, width / 2 - 45, long / 2 - 65, width / 2 - 45);
	line(long / 2 - 30, width / 2 - 40, long / 2 - 65, width / 2 - 30);
	line(long / 2 + 30, width / 2 - 50, long / 2 + 65, width / 2 - 60);
	line(long / 2 + 30, width / 2 - 45, long / 2 + 65, width / 2 - 45);
	line(long / 2 + 30, width / 2 - 40, long / 2 + 65, width / 2 - 30);
	setfillcolor(BLACK);//嘴巴
	arc(long / 2 -100, width / 2 - 80, long / 2 + 100, width / 2 -80, PI * 5 / 4, PI * 7 / 4);
	
	getchar();
    return 0;
}

