#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.hpp"
#include "Line.hpp"

class Circle {
private:
    Point center; // 圆心
    int radius; // 半径
    static int count; // 静态成员变量，用于计数

public:
    Circle(const Point& center, int radius);
    ~Circle();

    void draw() const;
    double circumference() const; // 计算圆的周长
    double area() const; // 计算圆的面积
    void move(int dx, int dy); // 移动圆心
    void rotate(double angle, const Point& pivot); // 围绕指定点旋转圆心
    void mirror(const Point& axisPoint, bool horizontal); // 镜像方法
    void scale(double factor); // 缩放方法 
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // CIRCLE_H