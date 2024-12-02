#include <graphics.h>
#include "../include/Point.h"
#include "../include/Line.h"
#include "../include/Circle.h"
#include "../include/Rectangle.h"
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
    // Line l1(p1, p2);
    
    Rectangle

    // Triangle triangle(p1, p2, p3);

    p1.draw();
    p2.draw();
    p3.draw();
    // l1.draw();
    // r.draw();
    // triangle.draw();

    // 输出矩形的周长
    // std::string perimeterText = "Rectangle perimeter: " + std::to_string(r.perimeter());
    // outtextxy(10, 110, perimeterText.c_str());

    // 输出矩形的面积
    // std::string areaText = "Rectangle area: " + std::to_string(r.area());
    // outtextxy(10, 130, areaText.c_str());

    getch();
    closegraph();
    return 0;
}
