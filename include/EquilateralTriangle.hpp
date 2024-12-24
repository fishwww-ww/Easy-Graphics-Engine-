#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#include "Shape.hpp"
#include "Triangle.hpp"
#include "Point.hpp"
#include "Line.hpp"

class EquilateralTriangle : public Shape {
private:
    Point vertex1;
    Point vertex2;
    Point vertex3;
    Line side1; 
    Line side2; 
    Line side3; 
    double length;
    static int count;
public:
    EquilateralTriangle(const Point& v1, double length);
    ~EquilateralTriangle();

    void draw() const override;
    double perimeter() const override;
    double area() const override;
    void move(int dx, int dy) override;
    void rotate(double angle, const Point& pivot) override;
    void mirror(const Point& axisPoint, bool horizontal) override;
    void scale(double factor, const Point& pivot) override;
    static int getCount(); 
};

#endif // EQUILATERAL_TRIANGLE_H