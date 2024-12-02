#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"
#include "Line.h"

class Rectangle {
private:
    Point topLeft; // 左上角顶点
    Point bottomRight; // 右下角顶点
    Line top; // 上边
    Line bottom; // 下边
    Line left; // 左边
    Line right; // 右边
    static int count; // 静态成员变量，用于计数

public:
    Rectangle(const Point& topLeft, const Point& bottomRight);
    ~Rectangle();

    void draw() const;
    double perimeter() const; // 计算矩形的周长
    double area() const; // 计算矩形的面积
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // RECTANGLE_H