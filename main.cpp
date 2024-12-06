#include <graphics.h>
#include "../include/Point.h"
#include "../include/Line.h"
#include "../include/Circle.h"
#include "../include/Rectangles.h"
#include "../include/Triangle.h"
#include "../include/EquilateralTriangle.h"
#include <string> // 包含 string 头文件
#include <iostream> // 包含 iostream 头文件
#include <cmath> // 包含 cmath 头文件，用于计算旋转

int main()
{
    initgraph(640, 480);
    setbkcolor(WHITE);
    cleardevice();

    Point p1(100, 200);
    Point p2(150, 200);
    Point p3(200, 250);
    Point pivot(100, 100);
    Shape* t =new EquilateralTriangle(p1, p2, p3);

    t->draw();
    // t->perimeter();
    t->mirror(pivot, true);
    t->draw();
    Shape* t2 = new EquilateralTriangle(p3, p2, p1);
    EquilateralTriangle t3(p2, p1, p3);
    // std::string areaText = "count: " + std::to_string(t->getCount());
    std::string areaText = "count: " + std::to_string(EquilateralTriangle::getCount());
    outtextxy(100, 150, areaText.c_str());

    delete t;

    getch();
    closegraph();
    return 0;
}
