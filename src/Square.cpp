#include "../include/Square.hpp"
#include <cmath> // 包含 cmath 头文件，用于计算面积

int Square::count = 0; // 初始化静态成员变量

Square::Square(const Point& topLeft, double length)
    : topLeft(topLeft), 
      bottomLeft(topLeft.getX() + length, topLeft.getY()), 
      bottomRight(topLeft.getX() + length, topLeft.getY() + length), 
      topRight(topLeft.getX(), topLeft.getY() + length),
      left(topLeft, bottomLeft), 
      bottom(bottomLeft, bottomRight), 
      right(bottomRight, topRight), 
      top(topRight, topLeft),
      length(length) {
    count++; // 构造函数中增加计数
}

Square::~Square() {
    count--; // 析构函数中减少计数
}

void Square::draw() const {
    left.draw();
    bottom.draw();
    right.draw();
    top.draw();
}

double Square::perimeter() const {
    return 4 * length;
}

double Square::area() const {
    return length * length;
}

void Square::move(int dx, int dy) {
    topLeft.move(dx, dy);
    bottomLeft.move(dx, dy);
    bottomRight.move(dx, dy);
    topRight.move(dx, dy);
    left = Line(topLeft, bottomLeft);
    bottom = Line(bottomLeft, bottomRight);
    right = Line(bottomRight, topRight);
    top = Line(topRight, topLeft);
}

void Square::rotate(double angle, const Point& pivot) {
    topLeft.rotate(angle, pivot);
    bottomLeft.rotate(angle, pivot);
    bottomRight.rotate(angle, pivot);
    topRight.rotate(angle, pivot);
    left = Line(topLeft, bottomLeft);
    bottom = Line(bottomLeft, bottomRight);
    right = Line(bottomRight, topRight);
    top = Line(topRight, topLeft);
}

void Square::mirror(const Point& axisPoint, bool horizontal) {
    topLeft.mirror(axisPoint, horizontal);
    bottomLeft.mirror(axisPoint, horizontal);
    bottomRight.mirror(axisPoint, horizontal);
    topRight.mirror(axisPoint, horizontal);
    left = Line(topLeft, bottomLeft);
    bottom = Line(bottomLeft, bottomRight);
    right = Line(bottomRight, topRight);
    top = Line(topRight, topLeft);
}

void Square::scale(double factor, const Point& pivot) {
    int dx1 = topLeft.getX() - pivot.getX();
    int dy1 = topLeft.getY() - pivot.getY();
    int newtopLeftX = static_cast<int>(dx1 * factor) + pivot.getX();
    int newtopLeftY = static_cast<int>(dy1 * factor) + pivot.getY();

    int dx2 = bottomLeft.getX() - pivot.getX();
    int dy2 = bottomLeft.getY() - pivot.getY();
    int newbottomLeftX = static_cast<int>(dx2 * factor) + pivot.getX();
    int newbottomLeftY = static_cast<int>(dy2 * factor) + pivot.getY();

    int dx3 = bottomRight.getX() - pivot.getX();
    int dy3 = bottomRight.getY() - pivot.getY();
    int newbottomRightX = static_cast<int>(dx3 * factor) + pivot.getX();
    int newbottomRightY = static_cast<int>(dy3 * factor) + pivot.getY();

    int dx4 = topRight.getX() - pivot.getX();
    int dy4 = topRight.getY() - pivot.getY();
    int newtopRightX = static_cast<int>(dx4 * factor) + pivot.getX();
    int newtopRightY = static_cast<int>(dy4 * factor) + pivot.getY();

    topLeft = Point(newtopLeftX, newtopLeftY);
    bottomLeft = Point(newbottomLeftX, newbottomLeftY);
    bottomRight = Point(newbottomRightX, newbottomRightY);
    topRight = Point(newtopRightX, newtopRightY);

    left = Line(topLeft, bottomLeft);
    bottom = Line(bottomLeft, bottomRight);
    right = Line(bottomRight, topRight);
    top = Line(topRight, topLeft);
}

int Square::getCount() {
    return count; // 返回当前对象计数
}