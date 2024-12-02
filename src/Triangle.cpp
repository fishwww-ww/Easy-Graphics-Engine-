#include "../include/Triangle.h"
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

int Triangle::getCount() {
    return count; // 返回当前对象计数
}