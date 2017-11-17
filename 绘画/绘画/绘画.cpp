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
    cleardevice();
	setfillcolor(GREEN);//身体
	fillrectangle(long / 2-85, width / 2 +20, long / 2+85, width / 2 + 130);
	setfillcolor(WHITE);//档
	fillcircle(long / 2, width / 2 +135, 5);
	setcolor(BLACK);//脚
	roundrect(long / 2 + 90, width / 2 + 130, long / 2 + 5, width / 2 + 150, 35, 35);
	roundrect(long / 2 - 90, width / 2 + 130, long / 2 - 5, width / 2 + 150, 35, 35);
	setfillcolor(WHITE);//身体
	fillcircle(long / 2, width / 2 + 40, 75);
	setcolor(BLACK);//口袋
//	rectangle(long / 2 - 50, width / 2 + 50, long / 2+50, width / 2 + 90);
	pie(long / 2 - 50, width / 2 + 50, long / 2 + 50, width / 2 + 90,PI-PI/18,PI/18);
	setfillcolor(GREEN);//头部
	fillcircle(long / 2, width / 2 -50 , 100);
	setfillcolor(WHITE);//脸部
	solidellipse(long / 2-90, (width / 2-30)-80, long / 2+90, (width / 2-30)+80);
	
	roundrect(long / 2 - 40, width / 2 - 120, long / 2 - 5, width / 2 - 65, 45, 45);
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
//	rectangle(long / 2 - 70, width / 2 - 100, long / 2 + 70, width / 2 + 10);   //调试弧度
	arc(long / 2 -70, width / 2-10 , long / 2+70, width / 2+10, PI-6, 6);
	setfillcolor(RGB(255,0,0));//猫链圈
	fillroundrect(long / 2 - 90, width / 2+20  , long / 2 + 90, width / 2+35, 25, 25);
	setfillcolor(YELLOW);//铃铛
	fillcircle(long/2,width/2+40,15);
	setfillcolor(YELLOW);//铃铛纹路
	fillrectangle(long / 2 - 10.5, width / 2 + 30, long / 2 + 10.5, width / 2 + 35);
	setfillcolor(BLACK);
	fillcircle(long / 2, width / 2 + 45, 5);
	fillrectangle(long / 2 - 0.5, width / 2 + 40, long / 2 + 0.5, width / 2 + 55);
	setfillcolor(GREEN);//手
	POINT pts1[] = { { long / 2 - 85, width / 2 + 25 },{ long / 2 - 85, width / 2 + 50 },{ long / 2 - 130, width / 2 + 65 } ,{ long / 2 - 130, width / 2 + 40 } };
	fillpolygon(pts1, 4);
	setfillcolor(WHITE);
	fillcircle(long / 2-130 , width / 2 + 52.5, 12.5);
	setfillcolor(GREEN);//手
	POINT pts2[] = { { long / 2 + 85, width / 2 + 25 },{ long / 2 + 85, width / 2 + 50 },{ long / 2 + 130, width / 2 + 65 } ,{ long / 2 + 130, width / 2 + 40 } };
	fillpolygon(pts2, 4);
	setfillcolor(WHITE);
	fillcircle(long / 2 + 130, width / 2 + 52.5, 12.5);
	getchar();

    return 0;
}

