#include "../include/Triangle.hpp"
#include <cmath> // 包含 cmath 头文件，用于计算面积

int Triangle::count = 0; // 初始化静态成员变量

Triangle::Triangle(const Point& v1, const Point& v2, const Point& v3)
    : vertex1(v1), vertex2(v2), vertex3(v3),
      side1(v1, v2), side2(v2, v3), side3(v3, v1) {
    count++; // 构造函数中增加计数
}

Triangle::~Triangle() {
    count--; // 析构函数中减少计数
}

void Triangle::draw() const {
    side1.draw();
    side2.draw();
    side3.draw();
}

double Triangle::perimeter() const {
    return side1.length() + side2.length() + side3.length(); // 计算三角形的周长
}

double Triangle::area() const {
    // 使用海伦公式计算三角形的面积
    double a = side1.length();
    double b = side2.length();
    double c = side3.length();
    double s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::move(int dx, int dy) {
    vertex1.move(dx, dy); // 移动顶点1
    vertex2.move(dx, dy); // 移动顶点2
    vertex3.move(dx, dy); // 移动顶点3
    side1.move(dx, dy); // 移动边1
    side2.move(dx, dy); // 移动边2
    side3.move(dx, dy); // 移动边3
}

void Triangle::rotate(double angle, const Point& pivot) {
    vertex1.rotate(angle, pivot); // 旋转顶点1
    vertex2.rotate(angle, pivot); // 旋转顶点2
    vertex3.rotate(angle, pivot); // 旋转顶点3
    side1.rotate(angle, pivot); // 旋转边1
    side2.rotate(angle, pivot); // 旋转边2
    side3.rotate(angle, pivot); // 旋转边3
}

void Triangle::mirror(const Point& axisPoint, bool horizontal) {
    vertex1.mirror(axisPoint, horizontal); // 镜像顶点1
    vertex2.mirror(axisPoint, horizontal); // 镜像顶点2
    vertex3.mirror(axisPoint, horizontal); // 镜像顶点3
    side1.mirror(axisPoint, horizontal);
    side2.mirror(axisPoint, horizontal);
    side3.mirror(axisPoint, horizontal);
}

void Triangle::scale(double factor, const Point& pivot) {
    // 计算缩放后的顶点坐标
    int dx1 = vertex1.getX() - pivot.getX();
    int dy1 = vertex1.getY() - pivot.getY();
    int newVertex1X = static_cast<int>(dx1 * factor) + pivot.getX();
    int newVertex1Y = static_cast<int>(dy1 * factor) + pivot.getY();

    int dx2 = vertex2.getX() - pivot.getX();
    int dy2 = vertex2.getY() - pivot.getY();
    int newVertex2X = static_cast<int>(dx2 * factor) + pivot.getX();
    int newVertex2Y = static_cast<int>(dy2 * factor) + pivot.getY();

    int dx3 = vertex3.getX() - pivot.getX();
    int dy3 = vertex3.getY() - pivot.getY();
    int newVertex3X = static_cast<int>(dx3 * factor) + pivot.getX();
    int newVertex3Y = static_cast<int>(dy3 * factor) + pivot.getY();

    // 更新顶点位置
    vertex1 = Point(newVertex1X, newVertex1Y);
    vertex2 = Point(newVertex2X, newVertex2Y);
    vertex3 = Point(newVertex3X, newVertex3Y);

    // 更新边
    side1 = Line(vertex1, vertex2);
    side2 = Line(vertex2, vertex3);
    side3 = Line(vertex3, vertex1);
}

int Triangle::getCount() {
    return count; // 返回当前对象计数
}