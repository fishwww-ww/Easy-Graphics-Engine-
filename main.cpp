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
#include <string> // 包含 string 头文�?
#include <iostream> // 包含 iostream 头文�?
#include <cmath> // 包含 cmath 头文件，用于计算旋转

int main()
{
    initgraph(640, 480);
    setbkcolor(LIGHTGRAY);
    cleardevice();
    setcolor(RED);

    // 实例化测�?
    // Point p1(60, 120);
    // Point p2(60, 160);
    // Point p3(140, 150);
    // Point p4(30, 200);
    // Point p5(90, 240);
    // Point p6(140, 200);
    // Point p7(120, 240);
    // Point p8(160, 240);
    // Line line(p1, p2);
    // Circle circle(p3, 30);
    // Rectangles rectangles(p4, p5);
    // Triangle triangle(p6, p7, p8);

    // p1.draw();
    // p2.draw();
    // line.draw();
    // circle.draw();
    // rectangles.draw();
    // triangle.draw();

    // std::string PointCount = "Piont Count: " + std::to_string(Point::getCount());
    // outtextxy(10, 10, PointCount.c_str());
    // std::string LineCount = "Line Count: " + std::to_string(Line::getCount());
    // outtextxy(10, 30, LineCount.c_str());
    // std::string CircleCount = "Circle Count: " + std::to_string(Circle::getCount());
    // outtextxy(10, 50, CircleCount.c_str());
    // std::string RectanglesCount = "Rectangles Count: " + std::to_string(Rectangles::getCount());
    // outtextxy(10, 70, RectanglesCount.c_str());
    // std::string TriangleCount = "Triangle Count: " + std::to_string(Triangle::getCount());
    // outtextxy(10, 90, TriangleCount.c_str());

    //面积与周长方法
    // Point p1(20,10);
    // Point p2(50, 20);
    // Line line(p1, p2);
    // line.draw();
    // std::string LineLenth = "Line Lenth: " + std::to_string(line.length());
    // outtextxy(10, 40, LineLenth.c_str());  
    // Point p3(50, 100);
    // Circle circle(p3, 30);
    // circle.draw();
    // std::string CircleCircumference = "Circle Circumference: " + std::to_string(circle.circumference());
    // outtextxy(10, 140, CircleCircumference.c_str());
    // std::string CircleArea = "Circle Area: " + std::to_string(circle.area());
    // outtextxy(10, 160, CircleArea.c_str());  
    // Point p4(50, 190);
    // Point p5(30, 210);
    // Point p6(70, 210);
    // Triangle triangle(p4, p5, p6);
    // triangle.draw();
    // std::string TrianglePerimeter = "Triangle Perimeter: " + std::to_string(triangle.perimeter());
    // outtextxy(10, 230, TrianglePerimeter.c_str());
    // std::string TriangleArea = "Triangle Area: " + std::to_string(triangle.area());
    // outtextxy(10, 250, TriangleArea.c_str());
    // Point p7(30, 290);
    // Point p8(90, 310);
    // Rectangles rectangles(p7, p8);
    // rectangles.draw();
    // std::string RectanglesPerimeter = "Rectangles Perimeter: " + std::to_string(rectangles.perimeter());
    // outtextxy(10, 330, RectanglesPerimeter.c_str());
    // std::string RectanglesArea = "Rectangles Area: " + std::to_string(rectangles.area());
    // outtextxy(10, 350, RectanglesArea.c_str());


    // 线段类
    // Point p1(60, 10);
    // Point p2(90, 20);
    // Line line(p1, p2);
    // line.draw();
    // line.rotate(45, p1);
    // line.draw();
    // outtextxy(10, 40, "Rotated 45 degrees");
    // Point p3(60, 100);
    // Point p4(90, 110);
    // Line line2(p3, p4);
    // line2.draw();
    // line2.mirror(Point(100,110), false);
    // line2.draw();
    // outtextxy(10, 130, "Mirrored virtically");
    // Point p5(60, 170);
    // Point p6(90, 190);
    // Line line3(p5, p6);
    // line3.draw();
    // line3.scale(3, p5);
    // line3.draw();
    // outtextxy(10, 240, "Scaled by a factor of 3");
    // Point p7(60, 280);
    // Point p8(90, 300);
    // Line line4(p7, p8);
    // line4.draw();
    // line4.move(0, 30);
    // line4.draw();
    // outtextxy(10, 350, "x move 0, y move 30");


    // 圆类
    // Point p1(60, 30);
    // int r = 20;
    // Circle circle(p1, r);
    // circle.draw();
    // circle.rotate(45, p1);
    // circle.draw();
    // outtextxy(10, 60, "Rotated 45 degrees");
    // Point p2(60, 110);
    // Circle circle2(p2, r);
    // circle2.draw();
    // circle2.mirror(Point(100, 110), false);
    // Line l(Point(100, 120), Point(100, 90));
    // l.draw();
    // circle2.draw();
    // outtextxy(10, 150, "Mirrored virtically");
    // Point p3(60, 200);
    // Circle circle3(p3, r);
    // circle3.draw();
    // circle3.scale(0.5);
    // circle3.draw();
    // outtextxy(10, 240, "Scaled by a factor of 1/2");
    // Point p4(60, 290);
    // Circle circle4(p4, r);
    // circle4.draw();
    // circle4.move(100, 0);
    // circle4.draw();
    // outtextxy(10, 330, "x move 100, y move 0");


    // 三角形类
    // Point p1(60, 30);
    // Point p2(40, 60);
    // Point p3(80, 60);
    // Triangle triangle(p1, p2, p3);
    // triangle.draw();
    // triangle.rotate(45, p1);
    // triangle.draw();
    // outtextxy(10, 80, "Rotated 45 degrees");    
    // triangle.rotate(-45, p1);
    // triangle.move(0, 80);
    // triangle.draw();
    // triangle.mirror(Point(80, 140), false);
    // triangle.draw();
    // outtextxy(10, 160, "Mirrored virtically");
    // triangle.mirror(Point(80, 140), false);
    // triangle.move(0, 80);
    // triangle.draw();
    // triangle.scale(2, Point(60,190));
    // triangle.draw();
    // outtextxy(10, 250, "Scaled by a factor of 2");
    // triangle.scale(0.5, Point(60,190));
    // triangle.move(0, 90);
    // triangle.draw();
    // triangle.move(120, 0);
    // triangle.draw();
    // outtextxy(10, 330, "x move 120, y move 0");


    // 矩形类
    // Point p1(40, 30);
    // Point p2(90, 60);
    // Rectangles rectangles(p1, p2);
    // rectangles.draw();
    // rectangles.rotate(45, p1);
    // rectangles.draw();
    // outtextxy(10, 100, "Rotated 45 degrees");
    // Point p3(40, 130);
    // Point p4(90, 160);
    // Rectangles rectangles2(p3, p4);
    // rectangles2.draw();
    // rectangles2.mirror(Point(100, 150), false);
    // Line l(Point(100, 160), Point(100, 130));
    // l.draw();
    // rectangles2.draw();
    // outtextxy(10, 180, "Mirrored virtically");
    // Point p5(40, 200);
    // Point p6(90, 230);
    // Rectangles rectangles3(p5, p6);
    // rectangles3.draw();
    // rectangles3.scale(0.5, p5);
    // rectangles3.draw();
    // outtextxy(10, 270, "Scaled by a factor of 1/2");
    // Point p7(40, 300);
    // Point p8(90, 330);
    // Rectangles rectangles4(p7, p8);
    // rectangles4.draw();
    // rectangles4.move(100, 0);
    // rectangles4.draw();
    // outtextxy(10, 350, "x move 100, y move 0");


    // 实例化测试
    // Point p1(30, 30);
    // int lenth = 30;
    // Shape* s = new EquilateralTriangle(p1, lenth);
    // s->draw();
    // std::string EquilateralTriangleCount = "EquilateralTriangle Count: " + std::to_string(EquilateralTriangle::getCount());
    // outtextxy(100, 10, EquilateralTriangleCount.c_str());
    // std::string EquilateralTrianglePerimeter = "EquilateralTriangle Perimeter: " + std::to_string(s->perimeter());
    // outtextxy(100, 30, EquilateralTrianglePerimeter.c_str());
    // std::string EquilateralTriangleArea = "EquilateralTriangle Area: " + std::to_string(s->area());
    // outtextxy(100, 50, EquilateralTriangleArea.c_str());
    
    // Point p2(30, 100);
    // double width = 30;
    // double height = 40; 
    // double angle = 60;
    // s = new Parallelogram(p2, width, height, angle);
    // s->draw();
    // std::string ParallelogramCount = "Parallelogram Count: " + std::to_string(Parallelogram::getCount());
    // outtextxy(100, 90, ParallelogramCount.c_str());
    // std::string ParallelogramPerimeter = "Parallelogram Perimeter: " + std::to_string(s->perimeter());
    // outtextxy(100, 110, ParallelogramPerimeter.c_str());
    // std::string ParallelogramArea = "Parallelogram Area: " + std::to_string(30.0*40);
    // outtextxy(100, 130, ParallelogramArea.c_str());

    // Point p3(60, 190);
    // double sideLength = 30;
    // s = new RegularHexagon(p3, sideLength);
    // s->draw();
    // std::string RegularHexagonCount = "RegularHexagon Count: " + std::to_string(RegularHexagon::getCount());
    // outtextxy(100, 170, RegularHexagonCount.c_str());
    // std::string RegularHexagonPerimeter = "RegularHexagon Perimeter: " + std::to_string(s->perimeter());
    // outtextxy(100, 190, RegularHexagonPerimeter.c_str());
    // std::string RegularHexagonArea = "RegularHexagon Area: " + std::to_string(s->area());
    // outtextxy(100, 210, RegularHexagonArea.c_str());

    // Point p4(30, 250);
    // double length = 30;
    // s = new Square(p4, length);
    // s->draw();
    // std::string SquareCount = "Square Count: " + std::to_string(Square::getCount());
    // outtextxy(100, 250, SquareCount.c_str());
    // std::string SquarePerimeter = "Square Perimeter: " + std::to_string(s->perimeter());
    // outtextxy(100, 270, SquarePerimeter.c_str());
    // std::string SquareArea = "Square Area: " + std::to_string(s->area());
    // outtextxy(100, 290, SquareArea.c_str());


    // 等边三角形类
    // Point p1(60, 30);
    // double lenth = 30;
    // EquilateralTriangle triangle(p1, lenth);
    // triangle.draw();
    // triangle.rotate(45, p1);
    // triangle.draw();
    // outtextxy(10, 80, "Rotated 45 degrees");    
    // triangle.rotate(-45, p1);
    // triangle.move(0, 80);
    // triangle.draw();
    // triangle.mirror(Point(90, 110), false);
    // triangle.draw();
    // outtextxy(10, 160, "Mirrored virtically");
    // triangle.mirror(Point(80, 140), false);
    // triangle.move(0, 80);
    // triangle.draw();
    // triangle.scale(2, Point(60,190));
    // triangle.draw();
    // outtextxy(10, 250, "Scaled by a factor of 2");
    // triangle.scale(0.5, Point(60,190));
    // triangle.move(0, 90);
    // triangle.draw();
    // triangle.move(120, 0);
    // triangle.draw();
    // outtextxy(10, 330, "x move 120, y move 0");

    // // 平行四边形类
    // Point p2(360, 30);
    // double width = 30;
    // double height = 40;
    // double angle = 60;
    // Parallelogram parallelogram(p2, width, height, angle);
    // parallelogram.draw();
    // parallelogram.rotate(45, p2);
    // parallelogram.draw();
    // outtextxy(360, 100, "Rotated 45 degrees");
    // Point p3(360, 130);
    // Parallelogram parallelogram2(p3, width, height, angle);
    // parallelogram2.draw();
    // parallelogram2.mirror(Point(360, 170), true);
    // parallelogram2.draw();
    // outtextxy(360, 230, "Mirrored horizontally");
    // Point p4(360, 250);
    // Parallelogram parallelogram3(p4, width, height, angle);
    // parallelogram3.draw();
    // parallelogram3.scale(0.5, p4);
    // parallelogram3.draw();
    // outtextxy(360, 320, "Scaled by a factor of 1/2");
    // Point p5(360, 350);
    // Parallelogram parallelogram4(p5, width, height, angle);
    // parallelogram4.draw();
    // parallelogram4.move(100, 0);
    // parallelogram4.draw();
    // outtextxy(360, 400, "x move 100, y move 0");

    // 正六边形类
    Point p6(60, 40);
    double sideLength = 30;
    RegularHexagon regularHexagon(p6, sideLength);
    regularHexagon.draw();
    // regularHexagon.rotate(30, Point(90, 40));
    // regularHexagon.draw();
    RegularHexagon r(Point(120, 40), sideLength);
    r.draw();
    outtextxy(10, 80, "Rotated 180 degrees");
    Point p7(60, 130);
    RegularHexagon regularHexagon2(p7, sideLength);
    regularHexagon2.draw();
    regularHexagon2.mirror(Point(120, 130), false);
    Line l(Point(120, 140), Point(120, 110));
    l.draw();
    regularHexagon2.draw();
    outtextxy(10, 160, "Mirrored virtically");
    Point p8(60, 210);
    RegularHexagon regularHexagon3(p8, sideLength);
    regularHexagon3.draw();
    regularHexagon3.scale(0.5, p8);
    regularHexagon3.draw();
    outtextxy(10, 240, "Scaled by a factor of 1/2");
    Point p9(60, 290);
    RegularHexagon regularHexagon4(p9, sideLength);
    regularHexagon4.draw();
    regularHexagon4.move(100, 0);
    regularHexagon4.draw();
    outtextxy(10, 330, "x move 100, y move 0");

    // 正方形类
    Point p10(360, 30);
    double length = 30;
    Square square(p10, length);
    square.draw();
    square.rotate(45, p10);
    square.draw();
    outtextxy(360, 80, "Rotated 45 degrees");
    Point p11(360, 120);
    Square square2(p11, length);
    square2.draw();
    square2.mirror(Point(360, 160), true);
    Line l2(Point(360, 160), Point(390, 160));
    l2.draw();
    square2.draw();
    outtextxy(360, 210, "Mirrored horizontally");
    Point p12(360, 250);
    Square square3(p12, length);
    square3.draw();
    square3.scale(0.5, p12);
    square3.draw();
    outtextxy(360, 290, "Scaled by a factor of 1/2");
    Point p13(360, 320);
    Square square4(p13, length);
    square4.draw();
    square4.move(100, 0);
    square4.draw();
    outtextxy(360, 360, "x move 100, y move 0");


    getch();
    closegraph();
    return 0;
}