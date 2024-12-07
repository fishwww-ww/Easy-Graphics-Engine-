#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#include "Shape.hpp"
#include "Triangle.hpp"
#include "Point.hpp"
#include "Line.hpp"

// class EquilateralTriangle : public Shape, public Triangle {
class EquilateralTriangle : public Shape {
private:
    Point vertex1; // 顶点1
    Point vertex2; // 顶点2
    Point vertex3; // 顶点3
    Line side1; // 边1
    Line side2; // 边2
    Line side3; // 边3
    static int count;
public:
    EquilateralTriangle(const Point& v1, const Point& v2, const Point& v3);
    ~EquilateralTriangle();

    void draw() const override;
    double perimeter() const override;
    double area() const override;
    void move(int dx, int dy) override;
    void rotate(double angle, const Point& pivot) override;
    void mirror(const Point& axisPoint, bool horizontal) override;
    void scale(double factor, const Point& pivot) override;
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // EQUILATERAL_TRIANGLE_H