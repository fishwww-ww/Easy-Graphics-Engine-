#include "../include/Rectangles.h"
#include <cmath> // 包含 cmath 头文件，用于计算旋转
#define M_PI 3.14159265358979323846 // 定义圆周率

int Rectangles::count = 0; // 初始化静态成员变量

Rectangles::Rectangles(const Point& topLeft, const Point& bottomRight)
    : topLeft(topLeft), bottomRight(bottomRight),
      top(topLeft, Point(bottomRight.getX(), topLeft.getY())),
      bottom(Point(topLeft.getX(), bottomRight.getY()), bottomRight),
      left(topLeft, Point(topLeft.getX(), bottomRight.getY())),
      right(Point(bottomRight.getX(), topLeft.getY()), bottomRight) {
    count++;
}

Rectangles::~Rectangles() {
    count--;
}

void Rectangles::draw() const {
    top.draw();
    bottom.draw();
    left.draw();
    right.draw();
}

double Rectangles::perimeter() const {
    double width = bottomRight.getX() - topLeft.getX();
    double height = bottomRight.getY() - topLeft.getY();
    return 2 * (width + height); // 计算矩形的周长
}

double Rectangles::area() const {
    double width = bottomRight.getX() - topLeft.getX();
    double height = bottomRight.getY() - topLeft.getY();
    return width * height; // 计算矩形的面积
}

void Rectangles::move(int dx, int dy) {
    topLeft.move(dx, dy); // 移动左上角顶点
    bottomRight.move(dx, dy); // 移动右下角顶点
    top.move(dx, dy); // 移动上边
    bottom.move(dx, dy); // 移动下边
    left.move(dx, dy); // 移动左边
    right.move(dx, dy); // 移动右边
}

void Rectangles::rotate(double angle, const Point& pivot) {
    // 旋转顶点
    topLeft.rotate(angle, pivot);
    bottomRight.rotate(angle, pivot);

    // 更新边
    top = Line(topLeft, Point(bottomRight.getX(), topLeft.getY()));
    bottom = Line(Point(topLeft.getX(), bottomRight.getY()), bottomRight);
    left = Line(topLeft, Point(topLeft.getX(), bottomRight.getY()));
    right = Line(Point(bottomRight.getX(), topLeft.getY()), bottomRight);

    // 旋转边
    top.rotate(angle, pivot);
    bottom.rotate(angle, pivot);
    left.rotate(angle, pivot);
    right.rotate(angle, pivot);
}

void Rectangles::mirror(const Point& axisPoint, bool horizontal) {
    // 镜像顶点
    topLeft.mirror(axisPoint, horizontal);
    bottomRight.mirror(axisPoint, horizontal);

    // 更新边
    top = Line(topLeft, Point(bottomRight.getX(), topLeft.getY()));
    bottom = Line(Point(topLeft.getX(), bottomRight.getY()), bottomRight);
    left = Line(topLeft, Point(topLeft.getX(), bottomRight.getY()));
    right = Line(Point(bottomRight.getX(), topLeft.getY()), bottomRight);
}

int Rectangles::getCount() {
    return count; // 返回当前对象计数
}