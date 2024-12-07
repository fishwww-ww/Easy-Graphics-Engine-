#include <graphics.h>
#include "../include/Point.hpp"
#include "../include/Line.hpp"
#include "../include/Circle.hpp"
#include "../include/Rectangles.hpp"
#include "../include/Triangle.hpp"
#include "../include/EquilateralTriangle.hpp"
#include "../include/Square.hpp"
#include "../include/Parallelogram.hpp"
#include <string> // 包含 string 头文件
#include <iostream> // 包含 iostream 头文件
#include <cmath> // 包含 cmath 头文件，用于计算旋转

int main()
{
    initgraph(640, 480);
    setbkcolor(WHITE);
    cleardevice();

    Point p1(100, 100);
    double width = 100;
    double height = 50;
    double angle = 30;

    Parallelogram* pm = new Parallelogram(p1, width, height, angle);

    pm->draw();
    pm->scale(4, p1);
    pm->draw();


    // std::string areaText = "Area: " + std::to_string(square->area());
    // outtextxy(10, 10, areaText.c_str());

    std::string countText = "Count: " + std::to_string(Parallelogram::getCount());
    outtextxy(10, 30, countText.c_str());


    getch();
    closegraph();
    return 0;
}
