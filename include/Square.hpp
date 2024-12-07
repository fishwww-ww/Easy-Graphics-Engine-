#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"

class Square : public Shape {
private:
    Point topLeft; // 顶点1
    Point bottomLeft; // 顶点2
    Point bottomRight; // 顶点3
    Point topRight; // 顶点4
    Line left; // 边1
    Line bottom; // 边2
    Line right; // 边3
    Line top; // 边4
    double length; // 边长
    static int count;

public:
    Square(const Point& topLeft, double length);
    ~Square();

    void draw() const override;
    double perimeter() const override;
    double area() const override;
    void move(int dx, int dy) override;
    void rotate(double angle, const Point& pivot) override;
    void mirror(const Point& axisPoint, bool horizontal) override;
    void scale(double factor, const Point& pivot) override;
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // SQUARE_H