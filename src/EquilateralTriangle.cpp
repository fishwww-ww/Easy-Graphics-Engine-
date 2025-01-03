#include "../include/EquilateralTriangle.hpp"
#include "../include/Triangle.hpp"
#include "../include/Shape.hpp"
#include <cmath> // 包含 cmath 头文件，用于计算面积

int EquilateralTriangle::count = 0; // 初始化静态成员变量


// EquilateralTriangle::EquilateralTriangle(const Point& v1, const Point& v2, const Point& v3)
EquilateralTriangle::EquilateralTriangle(const Point& v1, double length)
    : vertex1(v1), vertex2(v1.getX()+length,v1.getY()), vertex3(v1.getX()+length/2, v1.getY()+length*std::sqrt(3)/2),
      side1(vertex1, vertex2), side2(vertex2, vertex3), side3(vertex3, vertex1) {
    count++; // 构造函数中增加计数
}

EquilateralTriangle::~EquilateralTriangle() {
    count--; // 析构函数中减少计数
}

void EquilateralTriangle::draw() const {
    // Triangle::draw();
    side1.draw();
    side2.draw();
    side3.draw();
}

double EquilateralTriangle::perimeter() const {
    return side1.length() + side2.length() + side3.length(); // 计算三角形的周长
    // return side1.length() * 3;
    // return Triangle::perimeter();
}

double EquilateralTriangle::area() const {
    return std::sqrt(3) / 4 * side1.length() * side1.length(); // 计算三角形的面积
    // return Triangle::area();
}

void EquilateralTriangle::move(int dx, int dy) {
    vertex1.move(dx, dy); // 移动顶点1
    vertex2.move(dx, dy); // 移动顶点2
    vertex3.move(dx, dy); // 移动顶点3
    side1.move(dx, dy); // 移动边1
    side2.move(dx, dy); // 移动边2
    side3.move(dx, dy); // 移动边3
    // Triangle::move(dx, dy);
}

void EquilateralTriangle::rotate(double angle, const Point& pivot) {
    vertex1.rotate(angle, pivot); 
    vertex2.rotate(angle, pivot); 
    vertex3.rotate(angle, pivot); 
    side1.rotate(angle, pivot); 
    side2.rotate(angle, pivot); 
    side3.rotate(angle, pivot); 
}

void EquilateralTriangle::mirror(const Point& axisPoint, bool horizontal) {
    vertex1.mirror(axisPoint, horizontal); 
    vertex2.mirror(axisPoint, horizontal); 
    vertex3.mirror(axisPoint, horizontal); 
    side1.mirror(axisPoint, horizontal);
    side2.mirror(axisPoint, horizontal);
    side3.mirror(axisPoint, horizontal);
}

void EquilateralTriangle::scale(double factor, const Point& pivot) {
    side1.scale(factor, pivot);
    side2.scale(factor, pivot);
    side3.scale(factor, pivot);
}

int EquilateralTriangle::getCount() {
    return count; // 返回当前对象计数
}