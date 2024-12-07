#ifndef POINT_H
#define POINT_H

#include <graphics.h>
using namespace ege;

class Point {
private:
    int x, y;
    color_t color;
    static int count; // 静态成员变量，用于计数

public:
    Point(int x, int y, color_t color = EGERGB(0xFF, 0x0, 0x0));
    ~Point();

    double distance(const Point& p) const; // 计算两点之间的距离
    void draw() const;
    void move(int dx, int dy); // 移动方法
    int getX() const { return x; } // 获取 x 坐标
    int getY() const { return y; } // 获取 y 坐标
    void rotate(double angle, const Point& pivot); // 旋转方法
    void mirror(const Point& axisPoint, bool horizontal); // 镜像方法
    static int getCount();
};

#endif // POINT_H