#include "../include/Parallelogram.hpp"
#include "../include/Triangle.hpp"
#include "../include/Shape.hpp"
#include <cmath> // 包含 cmath 头文件，用于计算面积
#define M_PI 3.14159265358979323846 // 定义圆周率

int Parallelogram::count = 0; // 初始化静态成员变量

Parallelogram::Parallelogram(const Point& topLeft, double width,double height, double angle)
    : topLeft(topLeft), 
      bottomLeft(topLeft.getX() + height / std::tan(angle * M_PI / 180.0), topLeft.getY() + height), 
      bottomRight(topLeft.getX() + height / std::tan(angle * M_PI / 180.0) + width, topLeft.getY() + height), 
      topRight(topLeft.getX() + width, topLeft.getY()),
      left(topLeft, bottomLeft), 
      bottom(bottomLeft, bottomRight), 
      right(bottomRight, topRight), 
      top(topRight, topLeft),
      width(width),
      angle(angle) {
    count++; // 构造函数中增加计数
}

Parallelogram::~Parallelogram() {
    count--; // 析构函数中减少计数
}

void Parallelogram::draw() const {
    left.draw();
    bottom.draw();
    right.draw();
    top.draw();
}

double Parallelogram::perimeter() const {
    return 2 * (width + bottomLeft.distance(topLeft));
}

double Parallelogram::area() const {
    return width * height;
}

void Parallelogram::move(int dx, int dy) {
    topLeft.move(dx, dy);
    bottomLeft.move(dx, dy);
    bottomRight.move(dx, dy);
    topRight.move(dx, dy);
    left = Line(topLeft, bottomLeft);
    bottom = Line(bottomLeft, bottomRight);
    right = Line(bottomRight, topRight);
    top = Line(topRight, topLeft);
}

void Parallelogram::rotate(double angle, const Point& pivot) {
    topLeft.rotate(angle, pivot);
    bottomLeft.rotate(angle, pivot);
    bottomRight.rotate(angle, pivot);
    topRight.rotate(angle, pivot);
    left = Line(topLeft, bottomLeft);
    bottom = Line(bottomLeft, bottomRight);
    right = Line(bottomRight, topRight);
    top = Line(topRight, topLeft);
}

void Parallelogram::mirror(const Point& axisPoint, bool horizontal) {
    topLeft.mirror(axisPoint, horizontal);
    bottomLeft.mirror(axisPoint, horizontal);
    bottomRight.mirror(axisPoint, horizontal);
    topRight.mirror(axisPoint, horizontal);
    left = Line(topLeft, bottomLeft);
    bottom = Line(bottomLeft, bottomRight);
    right = Line(bottomRight, topRight);
    top = Line(topRight, topLeft);
}

void Parallelogram::scale(double factor, const Point& pivot) {
    left.scale(factor, pivot);
    bottom.scale(factor, pivot);
    right.scale(factor, pivot);
    top.scale(factor, pivot);
}

int Parallelogram::getCount() {
    return count;
}