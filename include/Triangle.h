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
    double perimeter() const;
    double area() const;
    void move(int dx, int dy); // 移动三角形的方法
    void rotate(double angle, const Point& pivot); // 旋转三角形的方法
    void mirror(const Point& axisPoint, bool horizontal);
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // TRIANGLE_H