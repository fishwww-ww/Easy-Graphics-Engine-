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
    Point pivot(250, 250);
    Rectangles rect(p1, p2);

    p1.draw();
    p2.draw();
    rect.draw();
    pivot.draw();

    // 围绕点 pivot 进行水平镜像并重新绘制
    rect.mirror(pivot, true); // 水平镜像
    rect.draw();


    getch();
    closegraph();
    return 0;
}
