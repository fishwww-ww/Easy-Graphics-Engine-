#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"

class Shape {
public:
    Shape() = default;
    virtual ~Shape() = default;

    virtual void draw() const = 0; // 纯虚函数，用于绘制形状
    virtual double perimeter() const = 0; // 纯虚函数，用于计算周长
    virtual double area() const = 0; // 纯虚函数，用于计算面积
    virtual void move(int dx, int dy) = 0; // 纯虚函数，用于移动形状
    virtual void rotate(double angle, const Point& pivot) = 0; // 纯虚函数，用于旋转形状
    virtual void mirror(const Point& axisPoint, bool horizontal) = 0; // 纯虚函数，用于镜像形状
    virtual void scale(double factor, const Point& pivot) = 0; // 纯虚函数，用于缩放形状
};

#endif // SHAPE_H