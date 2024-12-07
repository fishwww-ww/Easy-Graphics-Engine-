#include <graphics.h>
#include "../include/Point.hpp"
#include "../include/Line.hpp"
#include "../include/Circle.hpp"
#include "../include/Rectangles.hpp"
#include "../include/Triangle.hpp"
#include "../include/EquilateralTriangle.hpp"
#include "../include/Square.hpp"
#include <string> // 包含 string 头文件
#include <iostream> // 包含 iostream 头文件
#include <cmath> // 包含 cmath 头文件，用于计算旋转

int main()
{
    initgraph(640, 480);
    setbkcolor(WHITE);
    cleardevice();

    Point p1(100, 100);
    double length = 50;
    Shape* square = new Square(p1, length);

    square->draw();

    // square->move(100, 100);
    // square->scale(4, p1);
    square->rotate(45, p1);
    square->draw();

    std::string areaText = "Area: " + std::to_string(square->area());
    outtextxy(10, 10, areaText.c_str());

    std::string countText = "Count: " + std::to_string(Square::getCount());
    outtextxy(10, 30, countText.c_str());


    getch();
    closegraph();
    return 0;
}
