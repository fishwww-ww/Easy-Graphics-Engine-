#ifndef REGULARHEXAGON_H
#define REGULARHEXAGON_H

#include "Shape.hpp"
#include "Point.hpp"
#include "Line.hpp"

class RegularHexagon : public Shape {
private:
    Point center; // 中心点
    double sideLength; // 边长
    Point vertices[6]; // 六个顶点
    Line sides[6]; // 六条边
    static int count;

    void calculateVertices(); // 计算顶点位置
    void calculateSides(); // 计算边

public:
    RegularHexagon(const Point& center, double sideLength);
    ~RegularHexagon();

    void draw() const override;
    double perimeter() const override;
    double area() const override;
    void move(int dx, int dy) override;
    void rotate(double angle, const Point& pivot) override;
    void mirror(const Point& axisPoint, bool horizontal) override;
    void scale(double factor, const Point& pivot) override;
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // REGULARHEXAGON_H