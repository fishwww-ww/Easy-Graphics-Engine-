#include "../include/Circle.hpp"
#include <cmath> // 包含 cmath 头文件，用于计算圆周长和面积
#define M_PI 3.14159265358979323846 // 定义圆周率

int Circle::count = 0; // 初始化静态成员变量

Circle::Circle(const Point& center, int radius) : center(center), radius(radius) {
    count++; // 构造函数中增加计数
}

Circle::~Circle() {
    count--; // 析构函数中减少计数
}

void Circle::draw() const {
    circle(center.getX(), center.getY(), radius); // 使用 EGE 库绘制圆
}

double Circle::circumference() const {
    return 2 * M_PI * radius; // 计算圆的周长
}

double Circle::area() const {
    return M_PI * radius * radius; // 计算圆的面积
}

void Circle::move(int dx, int dy) {
    center.move(dx, dy); // 移动圆心
}

void Circle::rotate(double angle, const Point& pivot) {
    // 将角度转换为弧度
    double radians = angle * M_PI / 180.0;
    // 计算旋转后的圆心坐标
    int dx = center.getX() - pivot.getX();
    int dy = center.getY() - pivot.getY();
    int newX = static_cast<int>(dx * cos(radians) - dy * sin(radians)) + pivot.getX();
    int newY = static_cast<int>(dx * sin(radians) + dy * cos(radians)) + pivot.getY();
    // 更新圆心位置
    center = Point(newX, newY);
}

void Circle::mirror(const Point& axisPoint, bool horizontal) {
    center.mirror(axisPoint, horizontal); // 镜像圆心
}

void Circle::scale(double factor) {
    radius *= factor;
}

int Circle::getCount() {
    return count; // 返回当前对象计数
}