#include "../include/Point.h"
#include <cmath> // 包含 cmath 头文件，用于计算旋转
#define M_PI 3.14159265358979323846 // 定义圆周率

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

void Point::rotate(double angle, const Point& pivot) {
    // 将角度转换为弧度
    double radians = angle * M_PI / 180.0;

    // 计算旋转后的坐标
    int dx = x - pivot.getX();
    int dy = y - pivot.getY();
    int newX = static_cast<int>(dx * cos(radians) - dy * sin(radians)) + pivot.getX();
    int newY = static_cast<int>(dx * sin(radians) + dy * cos(radians)) + pivot.getY();

    // 更新坐标
    x = newX;
    y = newY;
}

void Point::mirror(const Point& axisPoint, bool horizontal) {
    if (horizontal) {
        y = 2 * axisPoint.getY() - y; // 水平镜像
    } else {
        x = 2 * axisPoint.getX() - x; // 垂直镜像
    }
}

int Point::getCount() {
    return count; // 返回当前对象计数
}