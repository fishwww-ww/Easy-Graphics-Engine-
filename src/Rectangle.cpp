#include "../include/Rectangle.h"

int Rectangle::count = 0; // 初始化静态成员变量

Rectangle::Rectangle(const Point& topLeft, const Point& bottomRight)
    : topLeft(topLeft), bottomRight(bottomRight),
      top(topLeft, Point(bottomRight.getX(), topLeft.getY())),
      bottom(Point(topLeft.getX(), bottomRight.getY()), bottomRight),
      left(topLeft, Point(topLeft.getX(), bottomRight.getY())),
      right(Point(bottomRight.getX(), topLeft.getY()), bottomRight) {
    count++;
}

Rectangle::~Rectangle() {
    count--;
}

void Rectangle::draw() const {
    top.draw();
    bottom.draw();
    left.draw();
    right.draw();
}

double Rectangle::perimeter() const {
    double width = bottomRight.getX() - topLeft.getX();
    double height = bottomRight.getY() - topLeft.getY();
    return 2 * (width + height); // 计算矩形的周长
}

double Rectangle::area() const {
    double width = bottomRight.getX() - topLeft.getX();
    double height = bottomRight.getY() - topLeft.getY();
    return width * height; // 计算矩形的面积
}

int Rectangle::getCount() {
    return count; // 返回当前对象计数
}