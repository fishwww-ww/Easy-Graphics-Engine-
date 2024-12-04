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
    Point pivot(240, 240);
    Rectangles rect(p1, p2);

    p1.draw();
    p2.draw();
    rect.draw();

    // 围绕点 pivot 旋转矩形并重新绘制
    rect.rotate(90, p2); // 旋转45度
    rect.draw();

    getch();
    closegraph();
    return 0;
}
