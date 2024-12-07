#include <graphics.h>
#include "../include/Point.hpp"
#include "../include/Line.hpp"
#include "../include/Circle.hpp"
#include "../include/Rectangles.hpp"
#include "../include/Triangle.hpp"
#include "../include/EquilateralTriangle.hpp"
#include "../include/Square.hpp"
#include "../include/Parallelogram.hpp"
#include "../include/RegularHexagon.hpp"
#include <string> // 包含 string 头文件
#include <iostream> // 包含 iostream 头文件
#include <cmath> // 包含 cmath 头文件，用于计算旋转

int main()
{
    initgraph(640, 480);
    setbkcolor(WHITE);
    cleardevice();

    Point center(320, 240);
    double sideLength = 50;
    Shape* hexagon = new RegularHexagon(center, sideLength);

    hexagon->draw();

    std::string areaText = "Area: " + std::to_string(hexagon->area());
    outtextxy(10, 10, areaText.c_str());

    std::string countText = "Count: " + std::to_string(RegularHexagon::getCount());
    outtextxy(10, 30, countText.c_str());

    delete hexagon;

    getch();
    closegraph();
    return 0;
}
