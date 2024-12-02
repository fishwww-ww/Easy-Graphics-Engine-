#include "../include/Line.h"

int Line::count = 0; // 初始化静态成员变量

Line::Line(const Point& start, const Point& end) : start(start), end(end) {
    count++; // 构造函数中增加计数
}

Line::~Line() {
    count--; // 析构函数中减少计数
}

void Line::draw() const {
    line(start.getX(), start.getY(), end.getX(), end.getY());
}

double Line::length() const {
    int dx = end.getX() - start.getX();
    int dy = end.getY() - start.getY();
    return std::sqrt(dx * dx + dy * dy); // 使用欧几里得距离公式计算长度
}

void Line::move(int dx, int dy) {
    start.move(dx, dy); // 移动起点
    end.move(dx, dy); // 移动终点
}

int Line::getCount() {
    return count; // 返回当前对象计数
}