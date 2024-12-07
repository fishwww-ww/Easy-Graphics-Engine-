#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"
#include "Rectangles.hpp"

class Parallelogram : public Shape{
private:
    Point topLeft; // 左上角顶点
    Point bottomLeft; // 左下角顶点
    Point bottomRight; // 右下角顶点
    Point topRight; // 右上角顶点
    Line left; // 左边
    Line bottom; // 下边
    Line right; // 右边
    Line top; // 上边
    double width; // 宽度
    double height; // 高度
    double angle; // 旋转角度
    static int count; // 静态成员变量，用于计数
public:
    Parallelogram(const Point& topLeft, double width, double height, double angle);
    ~Parallelogram();

    void draw() const override;
    double perimeter() const override;
    double area() const override;
    void move(int dx, int dy) override;
    void rotate(double angle, const Point& pivot) override;
    void mirror(const Point& axisPoint, bool horizontal) override;
    void scale(double factor, const Point& pivot) override;
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // PARALLELOGRAM_H