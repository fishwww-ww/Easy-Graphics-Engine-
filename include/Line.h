#ifndef LINE_H
#define LINE_H

#include "Point.h"
#include <cmath> // 包含 cmath 头文件，用于计算平方根

class Line {
private:
    Point start;
    Point end;
    static int count; // 静态成员变量，用于计数

public:
    Line(const Point& start, const Point& end);
    ~Line();

    void draw() const;
    double length() const; // 计算线段长度的方法
    static int getCount(); // 静态成员函数，返回当前对象计数
};

#endif // LINE_H