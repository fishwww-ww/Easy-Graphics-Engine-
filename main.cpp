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
    Point p3(150, 50);
    Point pivot(150, 150);
    Triangle triangle(p1, p2, p3);

    p1.draw();
    p2.draw();
    p3.draw();
    triangle.draw();
    pivot.draw();

    // 围绕点 pivot 缩放三角形并重新绘制
    triangle.scale(1.5, pivot); // 放大1.5倍
    triangle.draw();

    getch();
    closegraph();
    return 0;
}
