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
    Line l1(p1, p2);
    
    // Rectangle rect(p1, p2);
    // Triangle triangle(p1, p2, p3);

    p1.draw();
    p2.draw();
    p3.draw();
    l1.draw();
    // rect.draw();
    // triangle.draw();

    // // 输出矩形的周长
    // std::string perimeterText = "Rectangle perimeter: " + std::to_string(rect.perimeter());
    // outtextxy(10, 110, perimeterText.c_str());

    // // 输出矩形的面积
    // std::string rectAreaText = "Rectangle area: " + std::to_string(rect.area());
    // outtextxy(10, 130, rectAreaText.c_str());

    // // 输出三角形的周长
    // std::string trianglePerimeterText = "Triangle perimeter: " + std::to_string(triangle.perimeter());
    // outtextxy(10, 150, trianglePerimeterText.c_str());

    // // 输出三���形的面积
    // std::string triangleAreaText = "Triangle area: " + std::to_string(triangle.area());
    // outtextxy(10, 170, triangleAreaText.c_str());

    getch();
    closegraph();
    return 0;
}
