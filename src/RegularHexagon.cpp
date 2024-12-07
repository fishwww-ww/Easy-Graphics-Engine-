#include "../include/RegularHexagon.hpp"
#include <cmath> // 包含 cmath 头文件，用于计算面积
#define M_PI 3.14159265358979323846 // 定义圆周率

int RegularHexagon::count = 0; // 初始化静态成员变量

RegularHexagon::RegularHexagon(const Point& center, double sideLength)
    : center(center), sideLength(sideLength), vertices{Point(0, 0), Point(0, 0), Point(0, 0), Point(0, 0), Point(0, 0), Point(0, 0)}, sides{Line(Point(0, 0), Point(0, 0)), Line(Point(0, 0), Point(0, 0)), Line(Point(0, 0), Point(0, 0)), Line(Point(0, 0), Point(0, 0)), Line(Point(0, 0), Point(0, 0)), Line(Point(0, 0), Point(0, 0))} {
    calculateVertices();
    calculateSides();
    count++; // 构造函数中增加计数
}

RegularHexagon::~RegularHexagon() {
    count--; // 析构函数中减少计数
}

void RegularHexagon::calculateVertices() {
    double angle = M_PI / 3; // 60度
    for (int i = 0; i < 6; ++i) {
        vertices[i] = Point(
            center.getX() + sideLength * cos(i * angle),
            center.getY() + sideLength * sin(i * angle)
        );
    }
}

void RegularHexagon::calculateSides() {
    for (int i = 0; i < 6; ++i) {
        sides[i] = Line(vertices[i], vertices[(i + 1) % 6]);
    }
}

void RegularHexagon::draw() const {
    for (int i = 0; i < 6; ++i) {
        sides[i].draw();
    }
}

double RegularHexagon::perimeter() const {
    return 6 * sideLength;
}

double RegularHexagon::area() const {
    return (3 * sqrt(3) / 2) * sideLength * sideLength;
}

void RegularHexagon::move(int dx, int dy) {
    center.move(dx, dy);
    calculateVertices();
    calculateSides();
}

void RegularHexagon::rotate(double angle, const Point& pivot) {
    center.rotate(angle, pivot);
    calculateVertices();
    calculateSides();
}

void RegularHexagon::mirror(const Point& axisPoint, bool horizontal) {
    center.mirror(axisPoint, horizontal);
    calculateVertices();
    calculateSides();
}

void RegularHexagon::scale(double factor, const Point& pivot) {
    sideLength *= factor;
    calculateVertices();
    calculateSides();
}

int RegularHexagon::getCount() {
    return count; // 返回当前对象计数
}