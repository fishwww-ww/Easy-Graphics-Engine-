#include "../include/Line.h"
#include <cmath> // 包含 cmath 头文件，用于计算旋转
#define M_PI 3.14159265358979323846 // 定义圆周率

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

void Line::rotate(double angle, const Point& pivot) {
    // 将角度转换为弧度
    double radians = angle * M_PI / 180.0;

    // 计算旋转后的起点坐标
    int dx1 = start.getX() - pivot.getX();
    int dy1 = start.getY() - pivot.getY();
    int newStartX = static_cast<int>(dx1 * cos(radians) - dy1 * sin(radians)) + pivot.getX();
    int newStartY = static_cast<int>(dx1 * sin(radians) + dy1 * cos(radians)) + pivot.getY();

    // 计算旋转后的终点坐标
    int dx2 = end.getX() - pivot.getX();
    int dy2 = end.getY() - pivot.getY();
    int newEndX = static_cast<int>(dx2 * cos(radians) - dy2 * sin(radians)) + pivot.getX();
    int newEndY = static_cast<int>(dx2 * sin(radians) + dy2 * cos(radians)) + pivot.getY();

    // 更新起点和终点位置
    start = Point(newStartX, newStartY);
    end = Point(newEndX, newEndY);
}

void Line::mirror(const Point& axisPoint, bool horizontal) {
    start.mirror(axisPoint, horizontal); // 镜像起点
    end.mirror(axisPoint, horizontal); // 镜像终点
}

void Line::scale(double factor, const Point& pivot) {
    // 计算缩放后的起点坐标
    int dx1 = start.getX() - pivot.getX();
    int dy1 = start.getY() - pivot.getY();
    int newStartX = static_cast<int>(dx1 * factor) + pivot.getX();
    int newStartY = static_cast<int>(dy1 * factor) + pivot.getY();

    // 计算缩放后的终点坐标
    int dx2 = end.getX() - pivot.getX();
    int dy2 = end.getY() - pivot.getY();
    int newEndX = static_cast<int>(dx2 * factor) + pivot.getX();
    int newEndY = static_cast<int>(dy2 * factor) + pivot.getY();

    // 更新起点和终点位置
    start = Point(newStartX, newStartY);
    end = Point(newEndX, newEndY);
}

int Line::getCount() {
    return count; // 返回当前对象计数
}