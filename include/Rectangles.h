#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"
#include "Line.h"

class Rectangles {
private:
    Point topLeft; // 左上角顶点
    Point bottomRight; // 右下角顶点
    Line top; // 上边
    Line bottom; // 下边
    Line left; // 左边
    Line right; // 右边
    static int count; // 静态成员变量，用于计数

public:
    Rectangles(const Point& topLeft, const Point& bottomRight);
    ~Rectangles();

    void draw() const;
    double perimeter() const; // 计算矩形的周长
    double area() const; // 计算矩形的面积
    void move(int dx, int dy); // 移动方法
    void rotate(double angle, const Point& pivot); // 旋转方法
    void mirror(const Point& axisPoint, bool horrizontal);
    void scale(double factor, const Point& pivot); // 缩放方法
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // RECTANGLE_H