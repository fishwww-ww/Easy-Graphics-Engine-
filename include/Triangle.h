#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include "Line.h"

class Triangle {
private:
    Point vertex1; // 顶点1
    Point vertex2; // 顶点2
    Point vertex3; // 顶点3
    Line side1; // 边1
    Line side2; // 边2
    Line side3; // 边3
    static int count; // 静态成员变量，用于计数

public:
    Triangle(const Point& v1, const Point& v2, const Point& v3);
    ~Triangle();

    void draw() const;
    double perimeter() const; // 计算三角形的周长
    double area() const; // 计算三角形的面积
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // TRIANGLE_H