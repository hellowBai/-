// 绘画.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <graphics.h>      // 引用图形库头文件
#include <conio.h>


int main()
{
	initgraph(640, 480);
	setfillcolor(WHITE);
	setbkcolor(BLACK);
	circle(320, 240,20);
	getchar();
    return 0;
}

