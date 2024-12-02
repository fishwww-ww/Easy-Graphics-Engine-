#include <graphics.h>
#include "../include/Point.h"
#include "../include/Line.h"
#include "../include/Circle.h"
#include "../include/Rectangles.h"
#include "../include/Triangle.h"
#include <string> // 包含 string 头文件
#include <iostream> // 包含 iostream 头文件

int main()
{
    initgraph(640, 480);
    setbkcolor(WHITE);
    cleardevice();

    Point p1(100, 100);
    Point p2(200, 200);
 
    Triangle t(p1, p2, Point(300, 100));
    t.draw();
    t.move(250, 250);
    t.draw();

    getch();
    closegraph();
    return 0;
}
