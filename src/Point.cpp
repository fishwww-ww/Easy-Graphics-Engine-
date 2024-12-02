#include "../include/Point.h"

int Point::count = 0; // 初始化静态成员变量

Point::Point(int x, int y, color_t color) : x(x), y(y), color(color) {
    count++; // 构造函数中增加计数
}

Point::~Point() {
    count--; // 析构函数中减少计数
}

void Point::draw() const {
    setcolor(color);
    circle(x, y, 1); // 画一个半径为1的圆来表示点
}

void Point::move(int dx, int dy) {
    x += dx; // 更新 x 坐标
    y += dy; // 更新 y 坐标
}

int Point::getCount() {
    return count; // 返回当前对象计数
}