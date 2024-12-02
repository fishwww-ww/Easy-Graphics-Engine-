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

    void draw() const;
    void move(int dx, int dy); // 移动方法
    int getX() const { return x; } // 获取 x 坐标
    int getY() const { return y; } // 获取 y 坐标
    static int getCount();
};

#endif // POINT_H